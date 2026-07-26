/*
 * XREFs of NdisAllocateReassembledNetBufferList @ 0x1C00AD010
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003B10 (NdisAllocateNetBufferAndNetBufferList.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0065198 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00737E0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C00ACA70 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C00ACB78 (NetioCopyOpaqueNetBufferListInformation.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C00AD430 (NdisFreeReassembledNetBufferList.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateReassembledNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        NDIS_HANDLE NetBufferAndNetBufferListPoolHandle,
        ULONG StartOffset,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateReassembleFlags)
{
  ULONG v6; // esi
  NDIS_HANDLE v7; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v10; // rdi
  _NET_BUFFER *FirstNetBuffer; // rbx
  _NET_BUFFER *v12; // r15
  unsigned int DataLength; // r14d
  ULONG v14; // r14d
  ULONG v15; // edx
  struct _MDL *MdlChain; // rsi
  ULONG ByteCount; // eax
  ULONG v18; // eax
  ULONG v19; // r10d
  char *v20; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v22; // r12
  ULONG v23; // eax
  bool v24; // zf
  ULONG v25; // r14d
  ULONG v26; // r12d
  struct _MDL *v27; // rax
  struct _MDL *v28; // rcx
  struct _MDL *v29; // rax
  int v30; // eax
  unsigned int v31; // edx
  NDIS_STATUS v32; // eax
  struct _NET_BUFFER_LIST *v33; // rcx
  const struct _EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-B8h]
  const struct _GUID *v38; // [rsp+28h] [rbp-B0h]
  struct _MDL *v41; // [rsp+50h] [rbp-88h]
  void *VirtualAddress; // [rsp+60h] [rbp-78h]
  char *VirtualAddressa; // [rsp+60h] [rbp-78h]
  ULONG Length[4]; // [rsp+70h] [rbp-68h] BYREF
  struct _GUID v45; // [rsp+80h] [rbp-58h] BYREF

  v6 = StartOffset;
  v7 = NetBufferAndNetBufferListPoolHandle;
  if ( !NetBufferAndNetBufferListPoolHandle || (*((_DWORD *)NetBufferAndNetBufferListPoolHandle + 15) & 1) == 0 )
    v7 = ndisNetBufferListPool;
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v7, 0, 0, 0LL, 0, 0LL);
  v10 = NetBufferAndNetBufferList;
  if ( NetBufferAndNetBufferList )
  {
    FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
    if ( !FirstNetBuffer )
      goto LABEL_40;
    do
    {
      if ( FirstNetBuffer->DataLength > v6 )
        break;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    if ( FirstNetBuffer )
    {
      v12 = NetBufferAndNetBufferList->FirstNetBuffer;
      v41 = 0LL;
      do
      {
        DataLength = FirstNetBuffer->DataLength;
        if ( DataLength > v6 )
        {
          v14 = DataLength - v6;
          v15 = v6 + FirstNetBuffer->DataOffset;
          MdlChain = FirstNetBuffer->MdlChain;
          while ( 1 )
          {
            if ( !MdlChain )
              goto LABEL_31;
            ByteCount = MdlChain->ByteCount;
            if ( v15 < ByteCount )
              break;
            MdlChain = MdlChain->Next;
            v15 -= ByteCount;
          }
          v18 = ByteCount - v15;
          v19 = v14;
          if ( v14 >= v18 )
            v19 = v18;
          v20 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v15;
          Length[0] = v19;
          VirtualAddress = v20;
          Mdl = IoAllocateMdl(v20, v19, 0, 0, 0LL);
          v22 = Mdl;
          if ( Mdl )
          {
            IoBuildPartialMdl(MdlChain, Mdl, VirtualAddress, Length[0]);
            v22->Next = 0LL;
            if ( v12->MdlChain )
            {
              v41->Next = v22;
            }
            else
            {
              v12->Link.Region = (unsigned __int64)v22;
              v12->MdlChain = v22;
              v12->CurrentMdlOffset = 0;
              v12->DataOffset = 0;
            }
            v23 = Length[0];
            v12->DataLength += Length[0];
            v25 = v14 - v23;
            v24 = v25 == 0;
            v41 = v22;
            while ( !v24 )
            {
              MdlChain = MdlChain->Next;
              if ( !MdlChain )
                break;
              v26 = v25;
              VirtualAddressa = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
              if ( v25 >= MdlChain->ByteCount )
                v26 = MdlChain->ByteCount;
              v27 = IoAllocateMdl((char *)MdlChain->StartVa + MdlChain->ByteOffset, v26, 0, 0, 0LL);
              *(_QWORD *)Length = v27;
              if ( !v27 )
                goto LABEL_40;
              IoBuildPartialMdl(MdlChain, v27, VirtualAddressa, v26);
              v28 = *(struct _MDL **)Length;
              v29 = v41;
              v41 = *(struct _MDL **)Length;
              **(_QWORD **)Length = 0LL;
              v29->Next = v28;
              v30 = -1;
              v31 = v12->DataLength;
              if ( v26 + v31 >= v31 )
                v30 = v26 + v31;
              v12->DataLength = v30;
              if ( v26 + v31 < v31 )
                goto LABEL_40;
              v25 -= v26;
              v24 = v25 == 0;
            }
LABEL_31:
            v6 = StartOffset;
            goto LABEL_32;
          }
          goto LABEL_40;
        }
LABEL_32:
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      }
      while ( FirstNetBuffer );
      v32 = NdisRetreatNetBufferListDataStart(
              v10,
              DataOffsetDelta,
              DataBackFill,
              ndisAllocateMdlInternal,
              ndisFreeMdlInternal);
      v33 = v10;
      if ( v32 )
        goto LABEL_41;
      NetioCopyOpaqueNetBufferListInformation((__int64)v10, (__int64)FragmentNetBufferList);
      if ( byte_1C00E3EA8 )
      {
        v10->NetBufferListInfo[13] = FragmentNetBufferList->NetBufferListInfo[13];
      }
      else if ( Microsoft_Windows_Networking_CorrelationEnabled )
      {
        v35 = (__int64)v10->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
        v45 = (struct _GUID)((__int64)FragmentNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
        *(_OWORD *)Length = (unsigned __int64)v35;
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFLL,
          v34,
          &v45,
          (const struct _GUID *)Length,
          FreeMdlHandler,
          v38,
          3u);
      }
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(v10, 0LL, 9u, (unsigned __int64)FragmentNetBufferList, 0);
    }
    else
    {
LABEL_40:
      v33 = v10;
LABEL_41:
      NdisFreeReassembledNetBufferList(v33, 0, 0);
      return 0LL;
    }
  }
  return v10;
}
