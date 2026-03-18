/*
 * XREFs of MiMirrorBrownPhase @ 0x140A48B0C
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     MiMirrorGatherBrownPages @ 0x14038A428 (MiMirrorGatherBrownPages.c)
 *     MiMirrorPerformBrownWrites @ 0x140399444 (MiMirrorPerformBrownWrites.c)
 *     MiEmptyAllWorkingSets @ 0x14059673C (MiEmptyAllWorkingSets.c)
 *     PsQuitNextPartition @ 0x1405E2D20 (PsQuitNextPartition.c)
 *     MiActOnMirrorBitmap @ 0x1407FD674 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiMirrorBrownPhase(__int64 a1)
{
  int v1; // eax
  int v3; // r15d
  ULONG_PTR **i; // rcx
  ULONG_PTR **NextPartition; // rax
  ULONG_PTR **v6; // rdi
  ULONG_PTR *v7; // r14
  int j; // esi
  int v9; // eax
  unsigned int v10; // r9d
  int v11; // ebp
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xC0) == 0 )
  {
    v13 = 0LL;
    v3 = (v1 & 0xA) == 0;
    for ( i = 0LL; ; i = v6 )
    {
      NextPartition = (ULONG_PTR **)PsGetNextPartition(i);
      v6 = NextPartition;
      if ( !NextPartition )
        break;
      v7 = *NextPartition;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v7 == &MiSystemPartition )
      {
        for ( j = 0; ; ++j )
        {
          MiActOnMirrorBitmap((__int64)qword_140C52A10, 2);
          if ( j == v3 && !*(_BYTE *)(a1 + 20) )
          {
            *(_BYTE *)(a1 + 20) = 1;
            _InterlockedIncrement(&dword_140C5325C);
          }
          v9 = *(_DWORD *)(a1 + 8);
          if ( (v9 & 0x400) != 0 || (v9 & 4) != 0 )
          {
            v10 = *(_DWORD *)(a1 + 12);
          }
          else
          {
            if ( (v9 & 0x10) == 0 )
              MiEmptyAllWorkingSets((__int64)v7);
            v10 = 0;
          }
          MiMirrorGatherBrownPages((__int64 *)a1, (__int64)v7, *(_DWORD *)(a1 + 16), v10);
          v11 = MiMirrorPerformBrownWrites(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), &v13);
          if ( v11 < 0 )
          {
            PsQuitNextPartition(v6);
            return (unsigned int)v11;
          }
          if ( *(_BYTE *)(a1 + 20) || v13 < 0x400 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
          continue;
        PsQuitNextPartition(v6);
        return 0LL;
      }
    }
  }
  return 0LL;
}
