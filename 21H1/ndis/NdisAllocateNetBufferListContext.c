/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C00AC390
 * Callers:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003B10 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0003E20 (NdisAllocateNetBufferList.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x1C00AC2F8 (ndisIsCurrentNblContextBlockPreallocated.c)
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  NDIS_STATUS v4; // ebp
  int v5; // edi
  int v7; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  _NET_BUFFER_LIST_CONTEXT *v11; // r10
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v14; // edx
  unsigned __int16 v15; // si
  _NET_BUFFER_LIST_CONTEXT *PoolWithTag; // rax

  v4 = 0;
  v5 = ContextSize;
  v7 = ContextBackFill;
  if ( ContextSize )
  {
    if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    {
      return -1073676267;
    }
    else
    {
      if ( !ndisIsCurrentNblContextBlockPreallocated((__int64)NetBufferList)
        || *(_WORD *)(v10 + 10) < (unsigned __int16)v5 )
      {
        *(_WORD *)(v9 + 56) += v5;
        v12 = *(unsigned __int16 *)(v9 + 56);
        if ( v12 <= ndisMaxCachedNblContextSize )
        {
          if ( (unsigned __int16)v12 <= WORD1(NetBufferList->NdisReserved[1]) )
            LOWORD(v12) = WORD1(NetBufferList->NdisReserved[1]);
          WORD1(NetBufferList->NdisReserved[1]) = v12;
        }
      }
      if ( v10 && (v13 = *(_WORD *)(v10 + 10), v13 >= (unsigned __int16)v5) )
      {
        *(_WORD *)(v10 + 10) = v13 - v5;
      }
      else if ( v11 && v11->Size >= (unsigned __int16)v5 )
      {
        v11->Offset -= v5;
        v11->Next = NetBufferList->Context;
        NetBufferList->Context = v11;
        NetBufferList->NetBufferListInfo[28] = 0LL;
      }
      else
      {
        v14 = LOWORD(NetBufferList->NdisReserved[1]);
        v15 = v7 + v5;
        if ( v14 <= ndisMaxCachedNblContextSize )
        {
          if ( v11 )
          {
            NetBufferList->NetBufferListInfo[28] = 0LL;
            ExFreePool(v11);
            LOWORD(v14) = NetBufferList->NdisReserved[1];
          }
          if ( v15 <= v5 + WORD1(NetBufferList->NdisReserved[1]) - (unsigned __int16)v14 )
            v15 = v5 + WORD1(NetBufferList->NdisReserved[1]) - v14;
          if ( v15 > (unsigned int)(v5 + v7) )
            PoolTag = 1668170830;
        }
        PoolWithTag = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 16LL, PoolTag);
        if ( PoolWithTag )
        {
          PoolWithTag->Size = v15;
          PoolWithTag->Offset = v15 - v5;
          PoolWithTag->Next = NetBufferList->Context;
          NetBufferList->Context = PoolWithTag;
        }
        else
        {
          LOWORD(NetBufferList->NdisReserved[1]) -= v5;
          return -1073741670;
        }
      }
    }
  }
  return v4;
}
