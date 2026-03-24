/*
 * XREFs of ACPIBusIrpQueryBusRelations @ 0x1C00A2AC0
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F4A0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectFilterDevices @ 0x1C0019004 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0019338 (ACPIDetectPdoDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A974 (ACPIFilterRemoveNonPresentDevices.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E3E0 (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C004AC64 (WPP_RECORDER_SF_qqqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rbx
  int v8; // ebp
  int v9; // r10d
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // r10
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // r8
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 720) )
  {
    v8 = ACPIDetectPdoDevices(a1, a3);
    if ( v8 < 0 )
    {
      v14 = v7[1];
      v15 = byte_1C00701BA;
      v16 = byte_1C00701BA;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (const char *)v7[71];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (const char *)v7[72];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x22u,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          a2,
          v8,
          (char)v7,
          v15,
          v16);
    }
    else
    {
      ACPIFilterRemoveNonPresentDevices((__int64)v7, *a3);
      v9 = ACPIDetectFilterDevices(a1, (__int64)*a3);
      if ( v9 < 0 )
      {
        v17 = v7[1];
        v18 = byte_1C00701BA;
        v19 = byte_1C00701BA;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v18 = (const char *)v7[71];
          if ( (v17 & 0x400000000000LL) != 0 )
            v19 = (const char *)v7[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x23u,
            (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
            a2,
            v9,
            (char)v7,
            v18,
            v19);
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v12 = byte_1C00701BA;
    v13 = byte_1C00701BA;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = (const char *)v7[71];
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = (const char *)v7[72];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x21u,
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        a2,
        0,
        (char)v7,
        v12,
        v13);
    return 3221225485LL;
  }
}
