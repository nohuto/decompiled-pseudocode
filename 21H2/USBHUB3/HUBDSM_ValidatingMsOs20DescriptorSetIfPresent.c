/*
 * XREFs of HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0020B40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003BE50 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMsOs20DescriptorSetIfPresent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // ecx
  char v4; // al
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  char v8; // al
  __int64 v9; // rcx
  char v10; // si
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+38h] [rbp-28h]
  void *v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  WORD1(v12) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  LODWORD(v12) = *(unsigned __int16 *)(v1 + 1990);
  HIDWORD(v12) = *(_DWORD *)(v1 + 172);
  v13 = 0LL;
  v15 = 0;
  v19 = 0LL;
  v3 = *(_DWORD *)(v2 + 4);
  if ( (v3 & 0x20) != 0 )
  {
    BYTE5(v13) = 1;
    v3 = *(_DWORD *)(v2 + 4);
  }
  if ( (v3 & 0x2000) != 0 )
  {
    HIBYTE(v13) = 1;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4 = BYTE4(v13);
  v5 = (v3 & 0x4000) != 0;
  v6 = *(_QWORD *)(v1 + 8);
  if ( v5 )
    v4 = 1;
  v7 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v13) = v4;
  v8 = v19;
  if ( !v7 )
    v8 = 1;
  LOBYTE(v19) = v8;
  v14 = *(_DWORD *)(v6 + 220);
  v16 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  *(_DWORD *)(v1 + 2476) = *(_DWORD *)(v1 + 256);
  v18 = v1;
  *(_QWORD *)(v1 + 2560) = *(_QWORD *)(v6 + 1432);
  v10 = HUBDESC_ValidateMsOs20DescriptorSet(&v12, v1 + 2464);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v1 + 2464) & 0x200) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 4u);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807389;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_INVALID_MSOS20_DESCRIPTOR_SET,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24),
        v12,
        v13);
  }
  result = 4065LL;
  if ( v10 == 1 )
    return 4077LL;
  return result;
}
