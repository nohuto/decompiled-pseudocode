/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C0005AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E5E0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00737E0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074534 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C65C0 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  NDIS_PORT_NUMBER v5; // r15d
  struct NDIS_NBL_TRACKER_HANDLE__ *v8; // rdx
  char v9; // cl
  unsigned __int64 v10; // rbx
  char v11; // di
  __int64 v12; // r12
  ULONG v13; // r13d
  unsigned __int64 v14; // rbx
  char *v15; // r9
  int *v16; // r10
  struct _NET_BUFFER_LIST *Alignment; // r13
  unsigned __int64 v18; // rdi
  char *SourceHandle; // rcx
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  ULONG v33; // [rsp+40h] [rbp-68h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v34; // [rsp+48h] [rbp-60h]
  __int64 v35; // [rsp+50h] [rbp-58h]
  char *v36; // [rsp+58h] [rbp-50h]
  PNET_BUFFER_LIST v37; // [rsp+60h] [rbp-48h]
  __int64 v38; // [rsp+68h] [rbp-40h]
  char v39; // [rsp+B0h] [rbp+8h]
  NDIS_PORT_NUMBER v40; // [rsp+C0h] [rbp+18h]

  v40 = PortNumber;
  v5 = PortNumber;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferList, PortNumber, SendFlags, (ULONG_PTR)NdisFilterHandle);
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v8 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 82);
    v9 = 0;
    v10 = *((_QWORD *)NdisFilterHandle + 56);
    v11 = ndisNblTrackerEpoch;
    v12 = 0LL;
    *(_QWORD *)&PortNumber = 0LL;
    v34 = v8;
    LOBYTE(v13) = SendFlags & 1;
    v38 = 0LL;
    v33 = SendFlags & 1;
    v35 = 0LL;
    v39 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferList, v8, 0x90u, (void *)v10, SendFlags & 1);
      v8 = v34;
      v9 = 0;
      *(_QWORD *)&PortNumber = 0LL;
    }
    v14 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      v15 = *(char **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 |= 2LL * (v11 & 1);
    }
    else
    {
      v15 = (char *)v14;
    }
    v36 = v15;
    v37 = NetBufferList;
    if ( !NetBufferList )
    {
LABEL_31:
      v27 = v12 - *(_QWORD *)&PortNumber;
      if ( (v14 & 1) != 0 && v27 )
      {
        if ( !(_BYTE)v13 && !v9 )
          LOBYTE(v13) = KeGetCurrentIrql() == 2;
        v28 = v14;
        v29 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
        v30 = 2 * ((v28 >> 1) & 1);
        if ( (_BYTE)v13 )
        {
          v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v31 += v27;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v27);
        }
      }
      goto LABEL_4;
    }
    v16 = &WPP_RECORDER_INITIALIZED;
LABEL_12:
    Alignment = v37;
    v18 = (unsigned __int64)v37->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v18 )
      {
LABEL_21:
        v22 = v38 - v12;
        v37 = Alignment;
        v13 = v33;
        if ( (v18 & 1) != 0 && v22 )
        {
          if ( !(_BYTE)v33 && !v39 )
          {
            v39 = 1;
            LOBYTE(v13) = KeGetCurrentIrql() == 2;
            v33 = v13;
          }
          v23 = v18;
          v24 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
          v25 = 2 * ((v23 >> 1) & 1);
          if ( (_BYTE)v13 )
          {
            v26 = (_QWORD *)(*(_QWORD *)(v24 + 8 * v25 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v26 += v22;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8 * v25 + 48), v22);
          }
          *(_QWORD *)&PortNumber = v35;
        }
        v8 = v34;
        v38 = v12;
        if ( !v37 )
        {
          v5 = v40;
          v9 = v39;
          goto LABEL_31;
        }
        goto LABEL_12;
      }
      if ( !v18 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFDuLL,
                                            v8,
                                            *(_QWORD *)&PortNumber,
                                            v15);
      if ( (v18 & 4) != 0 )
        goto LABEL_48;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
        break;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != v16 )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v8,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)Alignment);
        goto LABEL_46;
      }
LABEL_48:
      v21 = v14 | 4;
LABEL_20:
      Alignment->NetBufferListInfo[27] = (void *)v21;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_21;
    }
    v20 = (unsigned __int8)*SourceHandle;
    if ( (unsigned __int8)(v20 - 17) <= 1u || (_BYTE)v20 == 5 )
    {
      if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
      {
        v8 = v34;
        ++v12;
        v21 = v14;
      }
      else
      {
        v8 = v34;
        v35 = ++*(_QWORD *)&PortNumber;
        ++v12;
        v21 = 24LL;
      }
      goto LABEL_20;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != v16 )
    {
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        27,
        12,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        (char)Alignment,
        *SourceHandle);
LABEL_46:
      *(_QWORD *)&PortNumber = v35;
      v16 = &WPP_RECORDER_INITIALIZED;
      v15 = v36;
    }
    v8 = v34;
    goto LABEL_48;
  }
LABEL_4:
  if ( byte_1C00E3EA8 )
  {
    v32 = *((_QWORD *)NdisFilterHandle + 102);
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 12) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 808, NetBufferList, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))NdisFilterHandle + 78))(
    NdisFilterHandle,
    NetBufferList,
    v5,
    SendFlags);
}
