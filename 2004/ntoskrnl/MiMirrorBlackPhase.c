/*
 * XREFs of MiMirrorBlackPhase @ 0x1403EE3B4
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorPerformBlackWrites @ 0x140380098 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackWrites @ 0x1403831B0 (MiMirrorReduceBlackWrites.c)
 *     MiIterateOverPartitions @ 0x140383F64 (MiIterateOverPartitions.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x14052F604 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x1409ADE68 (MiRemoveEnclavePagesFromMirror.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  _QWORD *v4; // rax
  unsigned __int64 i; // rcx
  _QWORD **v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *j; // rax
  _QWORD **v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx

  v2 = *(_QWORD *)a1;
  if ( qword_140C4EC80 )
    MiRemoveEnclavePagesFromMirror(*(_QWORD *)a1);
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 0x40D) != 0 )
  {
    if ( (v3 & 0x100) != 0 )
    {
      MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiMirrorRemoveBlackChildPartitionPages, a1);
      v3 = *(_DWORD *)(a1 + 8);
    }
    if ( (v3 & 0xC0) != 0 )
    {
      MiMirrorReduceBlackToActiveAndPrivatePages(a1);
    }
    else if ( (v3 & 0x100) != 0 )
    {
      MiMirrorReduceBlackWrites((__int64)&MiSystemPartition, a1);
    }
    else
    {
      MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiMirrorReduceBlackWrites, a1);
    }
    v4 = (_QWORD *)qword_140C4E378;
    i = 0LL;
    while ( v4 )
    {
      i = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( i )
    {
      v6 = *(_QWORD ***)(i + 8);
      v7 = i;
      *(_BYTE *)(i + 70) = 1;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = (unsigned __int64)v6; v8; v8 = (_QWORD *)*v8 )
          i = (unsigned __int64)v8;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v7 )
            break;
          v7 = i;
        }
      }
    }
    for ( j = (_QWORD *)qword_140C4E368; j; j = (_QWORD *)*j )
      i = (unsigned __int64)j;
    while ( i )
    {
      v10 = *(_QWORD ***)(i + 8);
      v11 = i;
      *(_BYTE *)(i + 70) = 1;
      if ( v10 )
      {
        v12 = *v10;
        for ( i = (unsigned __int64)v10; v12; v12 = (_QWORD *)*v12 )
          i = (unsigned __int64)v12;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v11 )
            break;
          v11 = i;
        }
      }
    }
  }
  return MiMirrorPerformBlackWrites(v2);
}
