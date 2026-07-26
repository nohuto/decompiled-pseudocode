/*
 * XREFs of NdisFreeNetBufferListContext @ 0x1C00AC950
 * Callers:
 *     NdisFreeNetBufferList @ 0x1C0005310 (NdisFreeNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013360 (NdisFreeCloneNetBufferList.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x1C00AC2F8 (ndisIsCurrentNblContextBlockPreallocated.c)
 */

void __stdcall NdisFreeNetBufferListContext(PNET_BUFFER_LIST NetBufferList, USHORT ContextSize)
{
  USHORT v2; // di
  __int64 v4; // r8
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  int v7; // ecx
  int v8; // edx
  unsigned __int16 *v9; // rcx

  if ( ContextSize )
  {
    v2 = ContextSize;
    do
    {
      NetBufferList->Context->Offset += v2;
      if ( ndisIsCurrentNblContextBlockPreallocated((__int64)NetBufferList) )
        break;
      LOWORD(NetBufferList->NdisReserved[1]) -= v2;
      v5 = *(_WORD *)(v4 + 10);
      v6 = *(_WORD *)(v4 + 8);
      if ( v5 < v6 )
        break;
      v2 = v5 - v6;
      NetBufferList->Context = *(_NET_BUFFER_LIST_CONTEXT **)v4;
      v7 = *(unsigned __int16 *)(v4 + 8);
      *(_WORD *)(v4 + 10) = v7;
      *(_QWORD *)v4 = 0LL;
      v8 = LOWORD(NetBufferList->NdisReserved[1]);
      if ( v7 + v8 <= ndisMaxCachedNblContextSize )
      {
        if ( v7 < WORD1(NetBufferList->NdisReserved[1]) - v8 )
        {
          ExFreePool((PVOID)v4);
          v9 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
          if ( v9 )
          {
            if ( v9[4] < WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
            {
              ExFreePool(v9);
              NetBufferList->NetBufferListInfo[28] = 0LL;
            }
          }
        }
        else
        {
          NetBufferList->NetBufferListInfo[28] = (void *)v4;
        }
      }
      else
      {
        ExFreePool((PVOID)v4);
      }
    }
    while ( v2 );
  }
}
