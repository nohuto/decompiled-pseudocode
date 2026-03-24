/*
 * XREFs of ACPIDockIrpStartDevice @ 0x1C00AC580
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0002320 (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E3E0 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C004C564 (ACPIBuildSynchronizationRequest.c)
 */

__int64 __fastcall ACPIDockIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  int v3; // edi
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  const char *v12; // rax
  __int64 v13; // rdx
  const char *v14; // r10
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v16 = 0LL;
  v5 = DeviceExtension;
  v17 = 0LL;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v6 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_1C00701BA;
    v9 = byte_1C00701BA;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v5 + 568);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v5 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x1Bu,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        v5,
        v8,
        v9);
    v3 = -1073741823;
    goto LABEL_39;
  }
  if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
  {
LABEL_38:
    *(_DWORD *)(v5 + 200) = 2;
    *(_DWORD *)(v5 + 328) = 2;
    goto LABEL_39;
  }
  KdDisableDebugger();
  v3 = ACPIGet((__int64 *)v6, 1262699615, 277086210, 1LL, 4, 0LL, 0LL, (__int64)&v16, 0LL);
  if ( v3 >= 0 )
    v3 = ACPIGet((__int64 *)v6, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v17, 0LL);
  KdEnableDebugger();
  if ( v3 >= 0 )
  {
    v11 = *(_QWORD *)(v5 + 8);
    v12 = byte_1C00701BA;
    v13 = v11 & 0x200000000000LL;
    v14 = byte_1C00701BA;
    if ( (*(_BYTE *)(v6 + 8) & 2) != 0 )
    {
      if ( v16 )
      {
        if ( v13 )
        {
          v12 = *(const char **)(v5 + 568);
          if ( (v11 & 0x400000000000LL) != 0 )
            v14 = *(const char **)(v5 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x1Cu,
            (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
            (char)a2,
            v16,
            v5,
            v12,
            v14);
      }
      else
      {
        if ( v13 )
        {
          v12 = *(const char **)(v5 + 568);
          if ( (v11 & 0x400000000000LL) != 0 )
            v14 = *(const char **)(v5 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x12u,
            0x1Du,
            (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
            (char)a2,
            v5,
            v12,
            v14);
      }
      v3 = -1073741823;
    }
    else if ( v16 == 1 )
    {
      if ( v13 )
      {
        v12 = *(const char **)(v5 + 568);
        if ( (v11 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v5 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Fu,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          (char)a2,
          v3,
          v5,
          v12,
          v14);
    }
    else
    {
      if ( v13 )
      {
        v12 = *(const char **)(v5 + 568);
        if ( (v11 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v5 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x12u,
          0x1Eu,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          (char)a2,
          v5,
          v12,
          v14);
    }
  }
  ACPIBuildSynchronizationRequest(
    RootDeviceExtension,
    (__int64)ACPIBuildIssueNotifyInvalidateRelations,
    RootDeviceExtension,
    v10,
    1);
  if ( v3 >= 0 )
  {
    ACPIInternalClearFlags((void *)(v5 + 8), 0x400000000LL);
    goto LABEL_38;
  }
LABEL_39:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
