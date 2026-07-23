/*
 * XREFs of MiMirrorBrownPhase @ 0x14099668C
 * Callers:
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiMirrorPerformBrownWrites @ 0x140382400 (MiMirrorPerformBrownWrites.c)
 *     MiMirrorGatherBrownPages @ 0x1403844C8 (MiMirrorGatherBrownPages.c)
 *     MiEmptyAllWorkingSets @ 0x14053B438 (MiEmptyAllWorkingSets.c)
 *     PsQuitNextPartition @ 0x140584500 (PsQuitNextPartition.c)
 *     MiActOnMirrorBitmap @ 0x1407777F4 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiMirrorBrownPhase(__int64 a1)
{
  int v1; // eax
  int v3; // r15d
  ULONG_PTR **i; // rcx
  ULONG_PTR *v5; // r14
  int j; // esi
  int v7; // eax
  unsigned int v8; // r9d
  int v9; // ebp
  ULONG_PTR **NextPartition; // rax
  ULONG_PTR **v11; // rdi
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xC0) == 0 )
  {
    v13 = 0LL;
    v3 = (v1 & 0xA) == 0;
    for ( i = 0LL; ; i = v11 )
    {
      NextPartition = (ULONG_PTR **)PsGetNextPartition(i);
      v11 = NextPartition;
      if ( !NextPartition )
        break;
      v5 = *NextPartition;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v5 == &MiSystemPartition )
      {
        for ( j = 0; ; ++j )
        {
          MiActOnMirrorBitmap((__int64)qword_140C4E750, 2);
          if ( j == v3 && !*(_BYTE *)(a1 + 20) )
          {
            *(_BYTE *)(a1 + 20) = 1;
            _InterlockedIncrement(&dword_140C4ED8C);
          }
          v7 = *(_DWORD *)(a1 + 8);
          if ( (v7 & 0x400) != 0 || (v7 & 4) != 0 )
          {
            v8 = *(_DWORD *)(a1 + 12);
          }
          else
          {
            if ( (v7 & 0x10) == 0 )
              MiEmptyAllWorkingSets((__int64)v5);
            v8 = 0;
          }
          MiMirrorGatherBrownPages((__int64 *)a1, v5, *(_DWORD *)(a1 + 16), v8);
          v9 = MiMirrorPerformBrownWrites(*(_QWORD *)a1, *(unsigned int *)(a1 + 8), &v13);
          if ( v9 < 0 )
          {
            PsQuitNextPartition(v11);
            return (unsigned int)v9;
          }
          if ( *(_BYTE *)(a1 + 20) == 1 || v13 < 0x400 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
          continue;
        PsQuitNextPartition(v11);
        return 0LL;
      }
    }
  }
  return 0LL;
}
