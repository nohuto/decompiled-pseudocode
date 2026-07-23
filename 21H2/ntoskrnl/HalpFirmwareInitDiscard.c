/*
 * XREFs of HalpFirmwareInitDiscard @ 0x140A6FB60
 * Callers:
 *     HalpFirmwareInitSystem @ 0x1409A25B0 (HalpFirmwareInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14039E7B0 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpFirmwareInitDiscard(__int64 a1)
{
  int v2; // edi
  __int128 v4; // xmm0
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax

  off_140C00840[0] = (__int64 (__fastcall *)())HalpQueryCapsuleCapabilities;
  off_140C00848[0] = HalpUpdateCapsule;
  off_140C00940[0] = (__int64 (__fastcall *)())HalpIsEFIRuntimeActive;
  off_140C00980[0] = (__int64 (__fastcall *)())HalpEnumerateEnvironmentVariablesWithFilter;
  if ( (*(_DWORD *)(a1 + 264) & 1) != 0 )
  {
    v4 = *(_OWORD *)(a1 + 264);
    HalFirmwareTypeEfi = 1;
    HalFirmwareInformationBlock = v4;
    xmmword_140C49F70 = *(_OWORD *)(a1 + 280);
    xmmword_140C49F80 = *(_OWORD *)(a1 + 296);
    xmmword_140C49F90 = *(_OWORD *)(a1 + 312);
    HalpEfiTimeCalls = 0;
    HalpEfiTimeWrites = 0;
    HalpEfiVariableCalls = 0;
    HalpEfiVariableWrites = 0;
    v5 = *(_DWORD *)(a1 + 292);
    v2 = *(_DWORD *)(a1 + 288);
    HalEfiSetVirtualAddressMapStatus = v2;
    HalEfiMissedMappingsCount = v5;
    if ( v5 || !*(_QWORD *)(a1 + 280) )
      v2 = -1073741823;
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x5000uLL, v2, 0LL, 0LL);
    v6 = *(__int64 **)(a1 + 280);
    HalEfiRuntimeServicesBlock[0] = *v6;
    qword_140E01878 = v6[1];
    qword_140E01880 = v6[10];
    qword_140E01888 = v6[6];
    qword_140E01890 = v6[7];
    qword_140E01898 = v6[8];
    qword_140E018A0 = v6[11];
    qword_140E018A8 = v6[12];
    v7 = v6[13];
    HalpEfiRuntimeCallbackRecord.State = 0;
    qword_140E018B0 = v7;
    KeRegisterBugCheckReasonCallback(
      &HalpEfiRuntimeCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpEfiBugCheckAddPagesCallback,
      KbCallbackAddPages,
      (PUCHAR)"HalEfiRuntime");
    if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
      HalEfiRuntimeServicesTable = (__int64 *)HalpIumEfiWrapperTable;
  }
  else
  {
    HalFirmwareTypeEfi = 0;
    return 0;
  }
  return (unsigned int)v2;
}
