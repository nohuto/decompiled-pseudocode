/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1C0091924
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A08E0 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     AcpiCheckExternalConnection @ 0x1C00918BC (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // r14
  int v10; // edi
  char *v12; // rax
  const char *v13; // r8
  const char *v14; // r10
  char *IrpText; // rax
  const char *v16; // r8
  const char *v17; // r10
  char *v18; // rax
  const char *v19; // r8
  const char *v20; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_BYTE *)(v7 + 1);
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    AcpiCheckExternalConnection();
    v10 = ACPIDetectPdoDevices(a1, a3);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xDu,
          (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
          a2,
          IrpText,
          v10,
          v8,
          v16,
          v17);
      }
    }
    else
    {
      v10 = ACPIDetectDockDevices(v8, a3);
      if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0xEu,
          (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
          a2,
          v18,
          v10,
          v8,
          v19,
          v20);
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = ACPIDebugGetIrpText(*(_QWORD *)(DeviceExtension + 8), *(_BYTE *)(v7 + 1));
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xCu,
        (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
        a2,
        v12,
        0,
        v8,
        v13,
        v14);
    }
    return 3221225485LL;
  }
}
