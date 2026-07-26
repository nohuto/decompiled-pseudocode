/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C00070A0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0069BB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E860 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0068F44 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074848 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE11C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v3; // r15d
  __int64 CurrentIrql; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v7; // r10
  __int64 v8; // rdx
  char v9; // r9
  char v10; // bl
  unsigned int v11; // ecx
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  char *v16; // r8
  PNET_BUFFER_LIST Alignment; // rsi
  unsigned __int64 v18; // rbx
  int *v19; // r9
  char *SourceHandle; // rcx
  int v21; // r15d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx
  int v28; // r15d
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  PNET_BUFFER_LIST *v33; // rdx
  _QWORD *v34; // rax
  char *v35; // [rsp+40h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]
  char v38; // [rsp+A0h] [rbp+8h]
  int v40; // [rsp+B8h] [rbp+20h]

  v3 = ReturnFlags;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisFilterHandle);
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E3FD8 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v7 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 82);
    v8 = 0LL;
    v9 = 0;
    v10 = ndisNblTrackerEpoch;
    v11 = v3 & 1;
    v12 = 0LL;
    v13 = *((_QWORD *)NdisFilterHandle + 68);
    v14 = 0LL;
    v40 = v11;
    v36 = v7;
    v37 = 0LL;
    v38 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferLists, v7, 0x8Au, (void *)v13, v11);
      LOBYTE(v11) = v40;
      v9 = 0;
      v7 = v36;
    }
    v15 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 1) != 0 )
    {
      v16 = *(char **)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v10 & 1);
      v15 |= CurrentIrql;
    }
    else
    {
      v16 = (char *)v15;
    }
    v35 = v16;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v18 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        v19 = &WPP_RECORDER_INITIALIZED;
        while ( Alignment->NetBufferListInfo[27] == (void *)v18 )
        {
          if ( !v18 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v8,
                                                v16,
                                                v19);
          if ( (v18 & 4) != 0 )
            goto LABEL_50;
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v8 = (unsigned __int8)*SourceHandle;
            if ( (unsigned __int8)(v8 - 17) <= 1u || (_BYTE)v8 == 5 )
            {
              if ( SourceHandle != v16 || Alignment->ParentNetBufferList )
              {
                ++v12;
                CurrentIrql = v15;
              }
              else
              {
                ++v14;
                CurrentIrql = 24LL;
                ++v12;
              }
              goto LABEL_20;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != v19 )
            {
              LOBYTE(v8) = 3;
              WPP_RECORDER_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v8,
                27,
                12,
                (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
                (char)Alignment,
                *SourceHandle);
              goto LABEL_49;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != v19 )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v8,
              27,
              11,
              (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
              (char)Alignment);
LABEL_49:
            v16 = v35;
            v19 = &WPP_RECORDER_INITIALIZED;
            v7 = v36;
          }
LABEL_50:
          CurrentIrql = v15 | 4;
LABEL_20:
          Alignment->NetBufferListInfo[27] = (void *)CurrentIrql;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v21 = v40;
        v22 = v37 - v12;
        v9 = v38;
        if ( (v18 & 1) != 0 && v22 )
        {
          if ( !(_BYTE)v40 && !v38 )
          {
            v9 = 1;
            v38 = 1;
            CurrentIrql = KeGetCurrentIrql();
            if ( (_BYTE)CurrentIrql == 2 )
              v21 = 1;
            else
              LOBYTE(v21) = 0;
            v40 = v21;
          }
          v23 = v18;
          v24 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
          v8 = 2 * ((v23 >> 1) & 1);
          if ( (_BYTE)v21 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v25 = (_QWORD *)(*(_QWORD *)(v24 + 8 * v8 + 40) + (unsigned int)CurrentIrql);
            *v25 += v22;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8 * v8 + 48), v22);
          }
        }
        v16 = v35;
        v37 = v12;
        if ( !Alignment )
        {
          v3 = ReturnFlags;
          LOBYTE(v11) = v40;
          break;
        }
      }
    }
    v26 = v12 - v14;
    if ( (v15 & 1) != 0 && v26 )
    {
      if ( !(_BYTE)v11 && !v9 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v11) = (_BYTE)CurrentIrql == 2;
      }
      v29 = v15;
      v30 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
      v31 = 2 * ((v29 >> 1) & 1);
      if ( (_BYTE)v11 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v32 = (_QWORD *)(*(_QWORD *)(v30 + 8 * v31 + 40) + (unsigned int)CurrentIrql);
        *v32 += v26;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 8 * v31 + 48), v26);
      }
    }
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v27 = *((_QWORD *)NdisFilterHandle + 53) + 96 * CurrentIrql;
  if ( !ndisIterativeDataPathDisabled && ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v27 + 88) )
  {
    v28 = v3 | 1;
    if ( !*(_QWORD *)(v27 + 72) )
    {
      *(_QWORD *)(v27 + 72) = NetBufferLists;
LABEL_35:
      *(_QWORD *)(v27 + 80) = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v28;
      return;
    }
    v33 = *(PNET_BUFFER_LIST **)(v27 + 80);
    if ( v28 != *((_DWORD *)v33 + 33) || (v28 & 6) != 0 )
    {
      v33[14] = NetBufferLists;
      goto LABEL_35;
    }
    v34 = *v33;
    if ( *v33 )
    {
      do
      {
        v33 = (PNET_BUFFER_LIST *)v34;
        v34 = (_QWORD *)*v34;
      }
      while ( v34 );
    }
    *v33 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(
      NetBufferLists,
      v3,
      (struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((struct _NDIS_OBJECT_HEADER **)NdisFilterHandle + 69),
      *((void **)NdisFilterHandle + 67),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))NdisFilterHandle + 66));
  }
}
