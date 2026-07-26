/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C00055E0
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00680A0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0069BB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E860 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0069168 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074B38 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE11C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  ULONG v3; // ebp
  __int64 CurrentIrql; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebp
  struct NDIS_NBL_TRACKER_HANDLE__ *v11; // rdx
  unsigned __int64 v12; // rbx
  char v13; // di
  unsigned int v14; // r13d
  char v15; // cl
  __int64 v16; // r10
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  char *v19; // r8
  PNET_BUFFER_LIST Alignment; // r15
  int *v21; // r9
  unsigned __int64 v22; // rdi
  char *SourceHandle; // rcx
  int v24; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  PNET_BUFFER_LIST *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // [rsp+40h] [rbp-58h]
  char *v38; // [rsp+48h] [rbp-50h]
  __int64 v39; // [rsp+50h] [rbp-48h]
  char v40; // [rsp+A0h] [rbp+8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v42; // [rsp+B8h] [rbp+20h]

  v3 = SendCompleteFlags;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)NdisFilterHandle);
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v11 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 82);
    v12 = *((_QWORD *)NdisFilterHandle + 60);
    v13 = ndisNblTrackerEpoch;
    v42 = v11;
    v14 = (v3 & 1) != 0;
    v15 = 0;
    v16 = 0LL;
    v39 = 0LL;
    v17 = 0LL;
    v37 = 0LL;
    v40 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferList, v11, 0x94u, (void *)v12, v14);
      v11 = v42;
      v16 = 0LL;
      v15 = 0;
    }
    v18 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      v19 = *(char **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v13 & 1);
      v18 |= CurrentIrql;
    }
    else
    {
      v19 = (char *)v18;
    }
    v38 = v19;
    Alignment = NetBufferList;
    if ( !NetBufferList )
    {
LABEL_34:
      v30 = v17 - v16;
      if ( (v18 & 1) != 0 && v30 )
      {
        if ( !(_BYTE)v14 && !v15 )
        {
          CurrentIrql = KeGetCurrentIrql();
          LOBYTE(v14) = (_BYTE)CurrentIrql == 2;
        }
        v31 = v18;
        v32 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
        v33 = 2 * ((v31 >> 1) & 1);
        if ( (_BYTE)v14 )
        {
          CurrentIrql = KeGetPcr()->Prcb.Number << 12;
          v34 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v33 + 40) + (unsigned int)CurrentIrql);
          *v34 += v30;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v33 + 48), v30);
        }
      }
      goto LABEL_4;
    }
    v21 = &WPP_RECORDER_INITIALIZED;
LABEL_18:
    v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v22 )
      {
LABEL_27:
        v25 = v39 - v17;
        if ( (v22 & 1) != 0 && v25 )
        {
          if ( !(_BYTE)v14 && !v40 )
          {
            v40 = 1;
            CurrentIrql = KeGetCurrentIrql();
            LOBYTE(v14) = (_BYTE)CurrentIrql == 2;
          }
          v26 = v22;
          v27 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
          v28 = 2 * ((v26 >> 1) & 1);
          if ( (_BYTE)v14 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v29 = (_QWORD *)(*(_QWORD *)(v27 + 8 * v28 + 40) + (unsigned int)CurrentIrql);
            *v29 += v25;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8 * v28 + 48), v25);
          }
        }
        v11 = v42;
        v21 = &WPP_RECORDER_INITIALIZED;
        v39 = v17;
        if ( !Alignment )
        {
          v3 = SendCompleteFlags;
          v15 = v40;
          goto LABEL_34;
        }
        goto LABEL_18;
      }
      if ( !v22 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFDuLL,
                                            v11,
                                            v19,
                                            v21);
      if ( (v22 & 4) != 0 )
        goto LABEL_48;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
        break;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != v21 )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)Alignment);
        goto LABEL_46;
      }
LABEL_48:
      CurrentIrql = v18 | 4;
LABEL_26:
      Alignment->NetBufferListInfo[27] = (void *)CurrentIrql;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_27;
    }
    v24 = (unsigned __int8)*SourceHandle;
    if ( (unsigned __int8)(v24 - 17) <= 1u || (_BYTE)v24 == 5 )
    {
      if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
      {
        v11 = v42;
        ++v17;
        CurrentIrql = v18;
      }
      else
      {
        v11 = v42;
        v37 = ++v16;
        ++v17;
        CurrentIrql = 24LL;
      }
      goto LABEL_26;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != v21 )
    {
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v24,
        27,
        12,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        (char)Alignment,
        *SourceHandle);
LABEL_46:
      v19 = v38;
      v21 = &WPP_RECORDER_INITIALIZED;
      v16 = v37;
    }
    v11 = v42;
    goto LABEL_48;
  }
LABEL_4:
  if ( byte_1C00E3FD8 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList);
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v7 = 3 * CurrentIrql;
  v8 = *((_QWORD *)NdisFilterHandle + 53);
  v9 = 32 * v7;
  if ( !ndisIterativeDataPathDisabled && ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v9 + v8 + 40) )
  {
    v10 = v3 | 1;
    if ( !*(_QWORD *)(v9 + v8 + 24) )
    {
      *(_QWORD *)(v9 + v8 + 24) = NetBufferList;
LABEL_11:
      *(_QWORD *)(v9 + v8 + 32) = NetBufferList;
      NetBufferList->Scratch = 0LL;
      NetBufferList->ChildRefCount = v10;
      return;
    }
    v35 = *(PNET_BUFFER_LIST **)(v9 + v8 + 32);
    if ( v10 != *((_DWORD *)v35 + 33) || (v10 & 6) != 0 )
    {
      v35[14] = NetBufferList;
      goto LABEL_11;
    }
    v36 = *v35;
    if ( *v35 )
    {
      do
      {
        v35 = (PNET_BUFFER_LIST *)v36;
        v36 = (_QWORD *)*v36;
      }
      while ( v36 );
    }
    *v35 = NetBufferList;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      NetBufferList,
      v3,
      (struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((struct _NDIS_OBJECT_HEADER **)NdisFilterHandle + 61),
      *((void **)NdisFilterHandle + 59),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))NdisFilterHandle + 58));
  }
}
