/*
 * XREFs of ACPIFilterIrpQueryIdCompletion @ 0x1C00AE970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C0061760 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00B57F8 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIdCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  char v5; // r14
  unsigned __int8 v6; // r13
  __int64 v7; // rcx
  __int64 DeviceExtension; // rdi
  _WORD *v9; // rsi
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // eax
  int FailDeviceResetOnOpenHandles; // eax
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h] BYREF
  int v20; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v20 = 0;
  v19 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v6 = *(_BYTE *)(v2 + 1);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !DeviceExtension )
    goto LABEL_20;
  v9 = *(_WORD **)(a2 + 56);
  v10 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v10 == 5 )
  {
    v11 = ACPIBusAndFilterIrpQueryContainerId(&v18, &v19, DeviceExtension);
    v5 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)(a2 + 56) = v18;
      *(_DWORD *)(a2 + 48) = v11;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_21;
    }
  }
  if ( (AcpiOverrideAttributes & 0x100000) != 0 && (*(_DWORD *)(DeviceExtension + 1000) & 0x800000) == 0 && v10 - 1 <= 1 )
  {
    if ( v9 )
    {
      v12 = ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(v10, v9, &v20);
      v5 = v12;
      if ( v12 >= 0 && v20 == 2 )
        ACPIInternalSetFlags((void *)(DeviceExtension + 1000), 0x800000uLL);
    }
  }
  if ( (AcpiOverrideAttributes & 0x200000) == 0
    || (*(_DWORD *)(DeviceExtension + 1000) & 0x40000000) != 0
    || v10 - 1 > 1
    || !v9
    || (FailDeviceResetOnOpenHandles = ACPIEmQueryFailDeviceResetOnOpenHandles(v10, v9),
        v5 = FailDeviceResetOnOpenHandles,
        FailDeviceResetOnOpenHandles < 0)
    || v20 != 2 )
  {
LABEL_20:
    if ( !DeviceExtension )
      goto LABEL_22;
    goto LABEL_21;
  }
  ACPIInternalSetFlags((void *)(DeviceExtension + 1000), 0x40000000uLL);
LABEL_21:
  v3 = DeviceExtension;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      a2,
      IrpText,
      v5,
      v3,
      v16,
      v15);
  }
  return 0LL;
}
