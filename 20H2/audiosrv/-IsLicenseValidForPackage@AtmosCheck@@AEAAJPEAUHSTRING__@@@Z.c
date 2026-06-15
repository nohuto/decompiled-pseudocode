/*
 * XREFs of ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x180135BB4
 * Callers:
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1801367BC (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F2D8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::IsLicenseValidForPackage(AtmosCheck *this, HSTRING a2)
{
  HRESULT Instance; // ebx
  IUnknown *v4; // rdi
  struct IUnknownVtbl *lpVtbl; // rbx
  PCWSTR StringRawBuffer; // rax
  AtmosCheck *v7; // rcx
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *pProxy; // [rsp+70h] [rbp+30h] BYREF

  pProxy = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pProxy);
  Instance = CoCreateInstance(
               &GUID_22f5b1df_7d7a_4d21_97f8_c21aefba859c,
               0LL,
               0x100017u,
               &GUID_90e2000c_b946_42fa_892f_94506f30ca4f,
               (LPVOID *)&pProxy);
  if ( Instance >= 0 )
  {
    Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 0, 3u, 0LL, 0x40u);
    if ( Instance >= 0 )
    {
      v4 = pProxy;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
      lpVtbl = v4->lpVtbl;
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      Instance = ((__int64 (__fastcall *)(IUnknown *, PCWSTR, __int64, __int64, __int64 *))lpVtbl[2].QueryInterface)(
                   v4,
                   StringRawBuffer,
                   3LL,
                   0x20000000LL,
                   &v9);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pProxy);
  AtmosCheck::Trace(v7, "Package license validation result", Instance);
  return (unsigned int)Instance;
}
