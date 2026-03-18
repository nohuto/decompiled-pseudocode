/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0206954
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0205A28 (DpiPdoAddPdo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0206C1C (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C0206CC0 (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0206EFC (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 v1; // r14
  char v2; // r15
  __int64 ChildContainerId; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int MonitorEldInformation; // edi
  int v13; // eax
  unsigned __int64 v14; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  GUID Guid; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-19h] BYREF
  int v22; // [rsp+50h] [rbp-11h]
  GUID v23; // [rsp+58h] [rbp-9h] BYREF
  __int128 v24; // [rsp+68h] [rbp+7h]
  DXGMONITOR *v25[2]; // [rsp+78h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v21 = 0LL;
  Guid = 0LL;
  v22 = 0;
  v2 = 0;
  v23 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v24 = 0LL;
  v5 = *(_QWORD **)(*(_QWORD *)(v1 + 32) + 64LL);
  v6 = v5[5];
  if ( *(_DWORD *)(v1 + 496) != 1 )
    goto LABEL_10;
  if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v1 + 936) + 4LL)) )
  {
    v9 = *(unsigned int *)(v1 + 504);
    v10 = v5[487];
    v11 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v10;
    if ( !v10 || (_DWORD)v9 == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    MONITOR_MGR::AcquireMonitorShared(v25, v10, v9);
    ChildContainerId = (__int64)v25[0];
    if ( !v25[0] )
    {
      LODWORD(ChildContainerId) = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)v25);
      return (unsigned int)ChildContainerId;
    }
    MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                              v25[0],
                              (struct _MONITOR_PACKED_ELD_INFORMATION *)&v21);
    ExReleaseResourceLite((PERESOURCE)(ChildContainerId + 24));
    KeLeaveCriticalRegion();
    LODWORD(ChildContainerId) = MonitorEldInformation;
    if ( MonitorEldInformation >= 0 )
    {
      LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v5[487], *(unsigned int *)(v1 + 504), &Guid);
      if ( (int)ChildContainerId >= 0 )
      {
        v2 = 1;
      }
      else
      {
        v13 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v21, 12LL, &Guid);
        ChildContainerId = v13;
        if ( v13 < 0 )
          goto LABEL_26;
      }
      *(_QWORD *)&v24 = v21;
      DWORD2(v24) = v22;
      v23 = Guid;
LABEL_10:
      if ( *(_DWORD *)(v6 + 28) >= 0x3005u && *(_QWORD *)(v6 + 768) )
      {
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v1 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(v5[487], 1);
        ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                  v6,
                                  v5[6],
                                  *(unsigned int *)(*(_QWORD *)(v1 + 936) + 24LL),
                                  &v23);
        DxgkReleaseAdapterDdiSync((DXGADAPTER *)v5[487]);
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v1 + 936) + 72LL), 0);
        if ( (_DWORD)ChildContainerId != -1071841279 )
        {
          if ( (int)ChildContainerId >= 0 )
            goto LABEL_14;
LABEL_31:
          WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), ChildContainerId);
LABEL_15:
          if ( (int)ChildContainerId < 0 && !v2 )
            return (unsigned int)ChildContainerId;
          v14 = *(_QWORD *)&v23.Data1;
          *(_OWORD *)v25 = 0LL;
          if ( !*(_QWORD *)&v23.Data1 )
            v14 = *(_QWORD *)v23.Data4 - (unsigned __int64)v25[1];
          if ( !v14 )
          {
            v18 = -1073741823LL;
            LODWORD(ChildContainerId) = -1073741823;
            goto LABEL_27;
          }
          p_Guid = &v23;
          if ( v2 )
            p_Guid = &Guid;
          v16 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v1 + 960));
          ChildContainerId = v16;
          if ( v16 >= 0 )
            return (unsigned int)ChildContainerId;
LABEL_26:
          v18 = ChildContainerId;
LABEL_27:
          WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v18);
          return (unsigned int)ChildContainerId;
        }
        if ( *(_DWORD *)(v1 + 496) != 1 )
          goto LABEL_31;
        WdLogSingleEntry1(4LL, a1);
        LODWORD(ChildContainerId) = 0;
        v23 = Guid;
      }
LABEL_14:
      if ( v2 )
      {
        v19 = *(_QWORD *)&v23.Data1 - *(_QWORD *)&Guid.Data1;
        if ( *(_QWORD *)&v23.Data1 == *(_QWORD *)&Guid.Data1 )
          v19 = *(_QWORD *)v23.Data4 - *(_QWORD *)Guid.Data4;
        if ( v19 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), (int)ChildContainerId);
          WdLogSingleEntry4(
            2LL,
            *(_QWORD *)&Guid.Data1,
            *(_QWORD *)Guid.Data4,
            *(_QWORD *)&v23.Data1,
            *(_QWORD *)v23.Data4);
          v23 = Guid;
        }
      }
      goto LABEL_15;
    }
  }
  return (unsigned int)ChildContainerId;
}
