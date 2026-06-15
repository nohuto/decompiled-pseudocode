/*
 * XREFs of ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013779C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800B6914 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x180136B94 (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::PerformLicenseCheckHelperLegacy(__int64 a1, HSTRING a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  AtmosCheck *v10; // rcx
  int IsLicenseValidForPackage; // eax
  __int64 v13; // rcx

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 112);
  if ( !v9 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  v10 = (AtmosCheck *)(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  LOBYTE(IsLicenseValidForPackage) = *(_BYTE *)(a1 + 99);
  if ( !(_BYTE)IsLicenseValidForPackage
    || ((IsLicenseValidForPackage = *(_DWORD *)(a1 + 184), IsLicenseValidForPackage != 2) || (int)v10 < 0)
    && (IsLicenseValidForPackage != 4 || (int)v10 < 0)
    && (IsLicenseValidForPackage != 3 || (int)v10 >= 0) )
  {
    IsLicenseValidForPackage = AtmosCheck::IsLicenseValidForPackage(v10, a2);
    LODWORD(v10) = IsLicenseValidForPackage;
  }
  *(_DWORD *)(a5 + 24 * v6 + 4) = (_DWORD)v10;
  v13 = *(_QWORD *)(a4 + 112);
  if ( v13 )
    LOBYTE(IsLicenseValidForPackage) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  return IsLicenseValidForPackage;
}
