/*
 * XREFs of MxSwitchDescriptors @ 0x140B51D98
 * Callers:
 *     MxGetNextPage @ 0x140AF65CC (MxGetNextPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiFindHighestDescriptorByNode @ 0x14057F840 (MiFindHighestDescriptorByNode.c)
 *     MiInitializeBootMemoryDescriptor @ 0x140AF66DC (MiInitializeBootMemoryDescriptor.c)
 */

__int64 *__fastcall MxSwitchDescriptors(unsigned int a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // r12
  __int64 *v3; // r15
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned __int64 HighestDescriptorByNode; // rsi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v1 = a1;
  if ( !MxBootDescriptorAnyNodeBitMap )
  {
    MxBootDescriptorAnyNodeBitMap = 64;
    qword_140D686E8 = (__int64)&MxBootDescriptorAnyNodeBuffer;
  }
  v2 = KeLoaderBlock_0;
  v3 = &MxBootFreeDescriptor[5 * a1];
  while ( 2 )
  {
    v4 = 0LL;
    v5 = (unsigned __int16)KeNumberNodes;
    if ( !_bittest64((const signed __int64 *)qword_140D686E8, v1) )
      v5 = v1;
    HighestDescriptorByNode = (unsigned __int64)MiFindHighestDescriptorByNode(v2, v5);
    if ( !HighestDescriptorByNode )
    {
      v7 = (unsigned __int16)KeNumberNodes;
      if ( v5 == (unsigned __int16)KeNumberNodes )
        return 0LL;
      v5 = (unsigned __int16)KeNumberNodes;
      _bittestandset((signed __int32 *)qword_140D686E8, v1);
      HighestDescriptorByNode = (unsigned __int64)MiFindHighestDescriptorByNode(v2, v7);
      if ( !HighestDescriptorByNode )
        return 0LL;
    }
    do
    {
      v8 = *(_DWORD *)(HighestDescriptorByNode + 24);
      if ( v8 == 2 || v8 == 24 )
      {
        if ( *((_DWORD *)MiSearchNumaNodeTable(*(_QWORD *)(HighestDescriptorByNode + 32)) + 2) == (_DWORD)v1
          || _bittest64((const signed __int64 *)qword_140D686E8, v1) )
        {
          v4 = HighestDescriptorByNode;
          goto LABEL_29;
        }
        if ( !v4 )
          v4 = HighestDescriptorByNode;
      }
      v9 = *(_QWORD *)HighestDescriptorByNode;
      v10 = HighestDescriptorByNode;
      if ( *(_QWORD *)HighestDescriptorByNode )
      {
        while ( 1 )
        {
          HighestDescriptorByNode = v9;
          if ( !*(_QWORD *)(v9 + 8) )
            break;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      else
      {
        while ( 1 )
        {
          HighestDescriptorByNode = *(_QWORD *)(HighestDescriptorByNode + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !HighestDescriptorByNode || *(_QWORD *)(HighestDescriptorByNode + 8) == v10 )
            break;
          v10 = HighestDescriptorByNode;
        }
      }
    }
    while ( HighestDescriptorByNode );
    _bittestandset((signed __int32 *)qword_140D686E8, v1);
    if ( v4 )
    {
LABEL_29:
      MiInitializeBootMemoryDescriptor(
        (unsigned __int64 *)&MxBootFreeDescriptor[5 * v1],
        v4,
        *(_QWORD *)(v4 + 32),
        *(_QWORD *)(v4 + 40));
      *(_DWORD *)(v4 + 24) |= 0x40000000u;
      return &MxBootFreeDescriptor[5 * v1];
    }
    if ( v5 != (unsigned __int16)KeNumberNodes )
      continue;
    break;
  }
  v3[4] = 0LL;
  return 0LL;
}
