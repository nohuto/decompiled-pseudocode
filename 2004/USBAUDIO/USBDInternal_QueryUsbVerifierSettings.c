/*
 * XREFs of USBDInternal_QueryUsbVerifierSettings @ 0x1C0011514
 * Callers:
 *     USBD_CreateHandle @ 0x1C00119C4 (USBD_CreateHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014140 (memset.c)
 */

void __fastcall USBDInternal_QueryUsbVerifierSettings(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  LOGICAL *v4; // r14
  LOGICAL IsDriverVerifying; // eax
  POOL_TYPE v9; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, _QWORD *); // rax
  int v13; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v4 = (LOGICAL *)(a3 + 72);
  IsDriverVerifying = MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(a1 + 8));
  v9 = PoolType;
  *v4 = IsDriverVerifying;
  PoolWithTag = ExAllocatePoolWithTag(v9, 0x1C0uLL, a4);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1C0uLL);
    v11[3] = v4;
    *v11 = USBD_VerifierSettingsCallback;
    v11[2] = L"UsbVerifierEnabled";
    *((_DWORD *)v11 + 8) = 4;
    *((_DWORD *)v11 + 12) = 4;
    v11[5] = v4;
    v11[9] = L"UsbVerifierFailRegistration";
    v11[10] = a3 + 76;
    v11[12] = a3 + 76;
    v11[7] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 22) = 4;
    *((_DWORD *)v11 + 26) = 4;
    v11[16] = L"UsbVerifierFailChainedMdlSupport";
    v11[17] = a3 + 80;
    v11[19] = a3 + 80;
    v11[14] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 36) = 4;
    *((_DWORD *)v11 + 40) = 4;
    v11[23] = L"UsbVerifierFailStaticStreamSupport";
    v11[24] = a3 + 84;
    v11[26] = a3 + 84;
    v11[21] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 50) = 4;
    *((_DWORD *)v11 + 54) = 4;
    v11[30] = L"UsbVerifierStaticStreamCountOverride";
    v11[31] = a3 + 88;
    v11[33] = a3 + 88;
    v11[28] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 64) = 4;
    *((_DWORD *)v11 + 68) = 4;
    v11[37] = L"UsbVerifierFailEnableStaticStreams";
    v11[38] = a3 + 92;
    v11[40] = a3 + 92;
    v11[35] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 78) = 4;
    *((_DWORD *)v11 + 82) = 4;
    v11[44] = L"UsbVerifierFailSecureTransferSupport";
    v11[42] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 92) = 4;
    *((_DWORD *)v11 + 96) = 4;
    v11[45] = a3 + 160;
    v11[47] = a3 + 160;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))RtlQueryRegistryValues;
    v13 = SystemRoutineAddress(1LL, a2, v11);
    if ( v13 < 0 && g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v13);
    ExFreePoolWithTag(v11, a4);
  }
  else if ( g_EnableDbgPrints )
  {
    DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
  }
}
