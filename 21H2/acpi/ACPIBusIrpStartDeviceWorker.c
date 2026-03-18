/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C008F350
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008FED4 (ACPIPepInitializePlatformNotificationSupport.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 */

_UNKNOWN **__fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  __int64 v4; // rdi
  int Status; // esi
  unsigned __int8 MinorFunction; // r15
  __int64 v7; // rbp
  bool v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _UNKNOWN **result; // rax
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = DeviceExtension;
  Status = v3->IoStatus.Status;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 1000) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 1000) & 0x8000) != 0;
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 760)) || v7 )
    {
      LOBYTE(v10) = v8;
      LOBYTE(v9) = 1;
      EnableDisableRegions(*(_QWORD *)(v4 + 760), v9, v10);
    }
    if ( (*(_DWORD *)(v4 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v9) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v4 + 760), v9);
    }
    if ( _bittest64((const signed __int64 *)(v4 + 1000), 0x28u) )
      ACPIPepInitializePlatformNotificationSupport((PVOID)v4);
  }
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x25u) && Status < 0 )
    ACPIInternalEvaluateOST(v4, 0, 163);
  v3->IoStatus.Information = 0LL;
  v3->IoStatus.Status = Status;
  IofCompleteRequest(v3, 0);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0x3Eu,
                          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
                          (char)v3,
                          IrpText,
                          Status,
                          v4,
                          v14,
                          v15);
  }
  return result;
}
