/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C018DB70
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0179C7C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A84C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01763B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0176430 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C018DE5C (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C018DF00 (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C018E784 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r15
  __int64 ChildContainerId; // rdi
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGADAPTER *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _FAST_MUTEX *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v41; // eax
  __int64 v42; // rax
  GUID Guid; // [rsp+38h] [rbp-29h] BYREF
  __int64 v44; // [rsp+48h] [rbp-19h] BYREF
  int v45; // [rsp+50h] [rbp-11h]
  GUID v46; // [rsp+58h] [rbp-9h] BYREF
  __int128 v47; // [rsp+68h] [rbp+7h]
  struct DXGMONITOR *v48[2]; // [rsp+78h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v44 = 0LL;
  Guid = 0LL;
  v45 = 0;
  v3 = 0;
  v46 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v47 = 0LL;
  v6 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v7 = v6[5];
  if ( *(_DWORD *)(v2 + 496) != 1 )
  {
LABEL_18:
    if ( *(_DWORD *)(v7 + 28) >= 0x3005u && *(_QWORD *)(v7 + 768) )
    {
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(v6[487], 1LL);
      ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                v7,
                                v6[6],
                                *(unsigned int *)(*(_QWORD *)(v2 + 936) + 24LL),
                                &v46);
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)v6[487], v23);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 72LL), 0);
      if ( (_DWORD)ChildContainerId == -1071841279 )
      {
        if ( *(_DWORD *)(v2 + 496) != 1 )
          goto LABEL_22;
        v33 = WdLogNewEntry5_WdEvent(a1, a2);
        *(_QWORD *)(v33 + 24) = a1;
        WdLogEvent5_WdEvent(v33);
        LODWORD(ChildContainerId) = 0;
        v46 = Guid;
      }
      else if ( (int)ChildContainerId < 0 )
      {
        goto LABEL_22;
      }
    }
    if ( v3 )
    {
      v34 = *(_QWORD *)&v46.Data1 - *(_QWORD *)&Guid.Data1;
      if ( *(_QWORD *)&v46.Data1 == *(_QWORD *)&Guid.Data1 )
        v34 = *(_QWORD *)v46.Data4 - *(_QWORD *)Guid.Data4;
      if ( v34 )
      {
        v35 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v35 + 24) = *(_QWORD *)(v7 + 768);
        *(_QWORD *)(v35 + 32) = (int)ChildContainerId;
        WdLogEvent5_WdError(v35);
        v38 = WdLogNewEntry5_WdError(v37, v36);
        *(GUID *)(v38 + 24) = Guid;
        *(GUID *)(v38 + 40) = v46;
        WdLogEvent5_WdError(v38);
        v46 = Guid;
      }
    }
    goto LABEL_23;
  }
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v2 + 936) + 4LL)) )
    return (unsigned int)ChildContainerId;
  ChildContainerId = *(unsigned int *)(v2 + 504);
  v12 = (DXGADAPTER *)v6[487];
  v13 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v13 + 24) = ChildContainerId;
  *(_QWORD *)(v13 + 32) = v12;
  if ( !v12 || (_DWORD)ChildContainerId == -1 )
  {
    LODWORD(ChildContainerId) = -1073741811;
  }
  else
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v26);
    }
    v16 = *((_QWORD *)v12 + 337);
    if ( !v16 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v27);
      v16 = *((_QWORD *)v12 + 337);
    }
    v17 = *(struct _FAST_MUTEX **)(v16 + 96);
    if ( !v17 )
    {
      v28 = WdLogNewEntry5_WdError(0LL, v14);
      *(_QWORD *)(v28 + 24) = v12;
      WdLogEvent5_WdError(v28);
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    v48[0] = 0LL;
    LODWORD(ChildContainerId) = MONITOR_MGR::_GetMonitorInstance(v17, (unsigned int)ChildContainerId, 1, v48);
    if ( (int)ChildContainerId >= 0 )
    {
      ChildContainerId = (__int64)v48[0];
      if ( !v48[0] )
      {
        v29 = WdLogNewEntry5_WdAssertion(v19, v18);
        WdLogEvent5_WdAssertion(v29);
        v32 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v32);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(ChildContainerId + 296), 1u);
      MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                                (DXGMONITOR *)ChildContainerId,
                                (struct _MONITOR_PACKED_ELD_INFORMATION *)&v44);
      v21 = (struct _ERESOURCE *)(ChildContainerId + 296);
      LODWORD(ChildContainerId) = MonitorEldInformation;
      ExReleaseResourceLite(v21);
      KeLeaveCriticalRegion();
    }
  }
  if ( (int)ChildContainerId < 0 )
    return (unsigned int)ChildContainerId;
  LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v6[487], *(unsigned int *)(v2 + 504), &Guid);
  if ( (int)ChildContainerId >= 0 )
  {
    v3 = 1;
    goto LABEL_17;
  }
  v22 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v44, 12LL, &Guid);
  ChildContainerId = v22;
  if ( v22 >= 0 )
  {
LABEL_17:
    *(_QWORD *)&v47 = v44;
    DWORD2(v47) = v45;
    v46 = Guid;
    goto LABEL_18;
  }
LABEL_22:
  v24 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v24 + 24) = *(_QWORD *)(v7 + 768);
  *(_QWORD *)(v24 + 32) = ChildContainerId;
  WdLogEvent5_WdError(v24);
LABEL_23:
  if ( (int)ChildContainerId < 0 && !v3 )
    return (unsigned int)ChildContainerId;
  v39 = *(_QWORD *)&v46.Data1;
  *(_OWORD *)v48 = 0LL;
  if ( !*(_QWORD *)&v46.Data1 )
    v39 = *(_QWORD *)v46.Data4 - (unsigned __int64)v48[1];
  if ( !v39 )
  {
    ChildContainerId = -1073741823LL;
LABEL_43:
    v42 = WdLogNewEntry5_WdError(v39, a2);
    *(_QWORD *)(v42 + 24) = *(_QWORD *)(v7 + 768);
    *(_QWORD *)(v42 + 32) = ChildContainerId;
    WdLogEvent5_WdError(v42);
    return (unsigned int)ChildContainerId;
  }
  p_Guid = &v46;
  if ( v3 )
    p_Guid = &Guid;
  v41 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v2 + 960));
  ChildContainerId = v41;
  if ( v41 < 0 )
    goto LABEL_43;
  return (unsigned int)ChildContainerId;
}
