/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0069BB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C000AD9C (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C000AF10 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B140 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001B5B8 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00F95F0 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00F9620 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  KSPIN_LOCK *p_Lock; // r12
  int v3; // r14d
  __int64 *v4; // rbx
  KIRQL v5; // al
  unsigned int Flags; // edx
  char *p_OidRequestList; // rcx
  __int64 v8; // rdx
  struct _NDIS_OID_REQUEST *v9; // r13
  char v10; // si
  unsigned int v11; // r8d
  unsigned int v12; // eax
  struct _NDIS_FILTER_BLOCK *Miniport; // rcx
  NDIS_OID Oid; // r9d
  unsigned int v15; // r10d
  NDIS_OID v16; // ecx
  int v17; // ecx
  __int64 (__fastcall *v18)(__int128 *); // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  KIRQL v22; // al
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  KIRQL v26; // al
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r15
  NDIS_OID v28; // r14d
  int v29; // edx
  NDIS_STATUS v30; // ebx
  int v31; // r8d
  int v32; // r9d
  struct _NDIS_OID_REQUEST *v33; // rsi
  struct _NDIS_OID_REQUEST *v34; // rdx
  bool v35; // zf
  __int64 v36; // rdx
  __int64 v37; // r8
  NdisWatchdogState *m_ptr; // rcx
  int v39; // [rsp+28h] [rbp-89h]
  __int128 v40; // [rsp+58h] [rbp-59h] BYREF
  __int128 v41; // [rsp+68h] [rbp-49h]
  __int128 v42; // [rsp+78h] [rbp-39h]
  _QWORD v43[5]; // [rsp+88h] [rbp-29h] BYREF
  int v44; // [rsp+B0h] [rbp-1h]
  int v45; // [rsp+B4h] [rbp+3h]
  _QWORD v46[5]; // [rsp+B8h] [rbp+7h] BYREF
  NDIS_STATUS v47; // [rsp+E0h] [rbp+2Fh]
  int v48; // [rsp+E4h] [rbp+33h]
  struct _NDIS_OID_REQUEST *v49; // [rsp+118h] [rbp+67h] BYREF

  p_Lock = &Parameter->Lock;
  while ( 1 )
  {
LABEL_2:
    v3 = -1073741823;
    v4 = 0LL;
    v5 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    Flags = Parameter->Flags;
    Parameter->LockThread = KeGetCurrentThread();
    if ( (Flags & 0x800) == 0 )
    {
      p_OidRequestList = (char *)&Parameter->OidRequestList;
      if ( *(char **)p_OidRequestList != p_OidRequestList )
      {
        Parameter->Flags = Flags | 0x800;
        v4 = *(__int64 **)p_OidRequestList;
        if ( *(char **)(*(_QWORD *)p_OidRequestList + 8LL) != p_OidRequestList
          || (v8 = *v4, *(__int64 **)(*v4 + 8) != v4) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)p_OidRequestList = v8;
        *(_QWORD *)(v8 + 8) = p_OidRequestList;
      }
    }
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v5);
    if ( !v4 )
      break;
    v9 = (struct _NDIS_OID_REQUEST *)(v4 - 9);
    *((_DWORD *)v4 + 4) &= ~4u;
    v10 = 0;
    v11 = 0;
    v35 = Parameter->Header.Type == 17;
    v40 = 0LL;
    v12 = 73;
    v41 = 0LL;
    v42 = 0LL;
    if ( v35 )
      Miniport = Parameter;
    else
      Miniport = (struct _NDIS_FILTER_BLOCK *)Parameter->Miniport;
    if ( !v9->PortNumber || ((__int64)Miniport[2].FilterDriver & 0x200) == 0 )
    {
      Oid = v9->DATA.QUERY_INFORMATION.Oid;
      v15 = 146;
      while ( v12 >= v11 )
      {
        v16 = *((_DWORD *)&unk_1C00C7330 + 6 * v12);
        if ( v16 > Oid )
        {
          if ( !v12 )
            break;
          v15 = v12 - 1;
        }
        else
        {
          if ( v16 == Oid )
          {
            *((_DWORD *)v4 + 5) = v12;
            *((_DWORD *)v4 + 4) |= 4u;
            v17 = *((_DWORD *)v4 + 4);
            HIDWORD(v42) = 0;
            *(_QWORD *)&v41 = Parameter;
            *(_QWORD *)&v40 = 0LL;
            *(_QWORD *)&v42 = v4 - 9;
            if ( (v17 & 0x220) != 0 )
              *((_QWORD *)&v41 + 1) = v4[4];
            else
              *((_QWORD *)&v41 + 1) = 0LL;
            if ( (v17 & 0x40) != 0 )
              *((_QWORD *)&v40 + 1) = v4[4];
            else
              *((_QWORD *)&v40 + 1) = 0LL;
            DWORD2(v42) = 0;
            if ( (v17 & 0x840080) != 0 )
              break;
            v18 = (__int64 (__fastcall *)(__int128 *))*((_QWORD *)&unk_1C00C7330 + 3 * *((unsigned int *)v4 + 5) + 1);
            if ( !v18 )
              break;
            v10 = v18(&v40);
            if ( v10 != 1 )
              break;
            ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v40, v19, v20, v21);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v36, v37, 0x15u, v39);
            goto LABEL_2;
          }
          v11 = v12 + 1;
        }
        v12 = v11 + ((v15 - v11 + 1) >> 1);
        if ( v12 > v15 )
          break;
      }
    }
    v22 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    if ( (Parameter->Flags & 0x10000) != 0 )
    {
      v10 = 1;
      v3 = -1073676286;
    }
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v22);
    if ( v10 == 1 )
    {
      v43[4] = v4 - 9;
      v43[0] = 0LL;
      v43[1] = 0LL;
      v43[3] = 0LL;
      v45 = 0;
      v43[2] = Parameter;
      v44 = v3;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v43, v23, v24, v25);
    }
    else
    {
      *((_DWORD *)v4 + 4) |= 0x20000u;
      v26 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      Parameter->PendingOidRequest = v9;
      Parameter->LockThread = 0LL;
      KeReleaseSpinLock(p_Lock, v26);
      ndisDrainWatchdog(Parameter->PendingOidWatchdog.m_ptr);
      ndisArmWatchdog(
        Parameter->PendingOidWatchdog.m_ptr,
        Parameter,
        0x24u,
        Parameter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler,
        0x88B8u,
        v9->DATA.QUERY_INFORMATION.Oid);
      FilterDriver = Parameter->FilterDriver;
      v28 = v9->DATA.QUERY_INFORMATION.Oid;
      v49 = 0LL;
      v30 = ndisOidCloneForCompatibility(&Parameter->Header, v9, 1, &v49);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v31,
          0x68u,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)Parameter,
          v28);
      v33 = v49;
      if ( !v30 )
      {
        v34 = v9;
        if ( v49 )
          v34 = v49;
        v30 = FilterDriver->DefaultFilterCharacteristics.OidRequestHandler(Parameter->FilterModuleContext, v34);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v29,
          v31,
          0x69u,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)Parameter,
          v28,
          (char)v9);
      v35 = v30 == 259;
      if ( v30 != 259 )
      {
        if ( v33 )
          ndisOidFreeInternalCloneRequest(Parameter, v33, 1, 0LL);
        v35 = v30 == 259;
      }
      if ( !v35 )
      {
        m_ptr = (NdisWatchdogState *)Parameter->PendingOidWatchdog.m_ptr;
        if ( m_ptr != (NdisWatchdogState *)-1LL )
          NdisWatchdogState::CancelTimer(m_ptr);
        v46[0] = 0LL;
        v46[1] = 0LL;
        v46[3] = 0LL;
        v48 = 0;
        v46[4] = v9;
        v46[2] = Parameter;
        v47 = v30;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v46, v29, v31, v32);
      }
    }
  }
}
