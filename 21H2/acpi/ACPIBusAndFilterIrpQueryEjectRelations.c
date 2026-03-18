/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AC5AC
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008E540 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0048FA8 (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C0049724 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIDetectEjectDevices @ 0x1C004E440 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r8
  const char *v8; // rax
  const char *v9; // r10
  __int64 CorrespondingDock; // rax
  int v12; // edi
  __int64 v13; // rdx
  void *v14; // rax
  void *v15; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    if ( ACPIDockIsDockDevice() )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v12 = ACPIDetectEjectDevices((__int64)v6, a3, CorrespondingDock);
    if ( v12 < 0 )
    {
      v13 = v6[1];
      v14 = &unk_1C006FB8B;
      v15 = &unk_1C006FB8B;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (void *)v6[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (void *)v6[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x11u,
          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
          v12,
          (char)v6,
          (__int64)v14,
          (__int64)v15);
    }
    return (unsigned int)v12;
  }
  else
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = (const char *)&unk_1C006FB8B;
    v9 = (const char *)&unk_1C006FB8B;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v6[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = (const char *)v6[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x10u,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        a2,
        0,
        (char)v6,
        v8,
        v9);
    return 3221225485LL;
  }
}
