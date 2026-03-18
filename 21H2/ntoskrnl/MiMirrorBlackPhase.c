/*
 * XREFs of MiMirrorBlackPhase @ 0x14038A168
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14038A2A8 (MiIterateOverPartitions.c)
 *     MiMirrorReduceBlackWrites @ 0x14038F620 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorPerformBlackWrites @ 0x140399738 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x14058CCB0 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140A6A8C0 (MiRemoveEnclavePagesFromMirror.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  _QWORD *v4; // rax
  unsigned __int64 i; // rcx
  _QWORD *j; // rax
  _QWORD **v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD **v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx

  v2 = *a1;
  if ( MemoryDescriptorList )
    MiRemoveEnclavePagesFromMirror(*a1);
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 0x40D) != 0 )
  {
    if ( (v3 & 0x100) != 0 )
    {
      MiIterateOverPartitions(MiMirrorRemoveBlackChildPartitionPages, a1);
      v3 = *((_DWORD *)a1 + 2);
    }
    if ( (v3 & 0xC0) != 0 )
    {
      MiMirrorReduceBlackToActiveAndPrivatePages(a1);
    }
    else if ( (v3 & 0x100) != 0 )
    {
      MiMirrorReduceBlackWrites(&MiSystemPartition, a1);
    }
    else
    {
      MiIterateOverPartitions(MiMirrorReduceBlackWrites, a1);
    }
    v4 = (_QWORD *)qword_140C51DF8;
    i = 0LL;
    while ( v4 )
    {
      i = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( i )
    {
      v8 = *(_QWORD ***)(i + 8);
      v9 = i;
      *(_BYTE *)(i + 71) = 1;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (unsigned __int64)v8; v10; v10 = (_QWORD *)*v10 )
          i = (unsigned __int64)v10;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
    }
    for ( j = (_QWORD *)qword_140C51DE8; j; j = (_QWORD *)*j )
      i = (unsigned __int64)j;
    while ( i )
    {
      v11 = *(_QWORD ***)(i + 8);
      v12 = i;
      *(_BYTE *)(i + 71) = 1;
      if ( v11 )
      {
        v13 = *v11;
        for ( i = (unsigned __int64)v11; v13; v13 = (_QWORD *)*v13 )
          i = (unsigned __int64)v13;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v12 )
            break;
          v12 = i;
        }
      }
    }
  }
  return MiMirrorPerformBlackWrites(v2);
}
