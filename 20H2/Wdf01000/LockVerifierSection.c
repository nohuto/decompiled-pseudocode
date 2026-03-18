/*
 * XREFs of LockVerifierSection @ 0x1C0057EC4
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0041194 (FxLibraryCommonRegisterClient.c)
 *     FxInitialize @ 0x1C0056768 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_dZq @ 0x1C005816C (WPP_IFR_SF_dZq.c)
 */

void __fastcall LockVerifierSection(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath,
        unsigned int a3)
{
  int globals; // ebx
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  const _GUID *v8; // [rsp+20h] [rbp-28h]

  globals = _InterlockedIncrement(dword_1C00A9F98);
  if ( ImageSectionHandle )
  {
    MmLockPagableSectionByHandle(ImageSectionHandle);
    WPP_IFR_SF_dZq(FxDriverGlobals, v6, v7, 0xBu, v8, globals, RegistryPath, FxDriverGlobals);
  }
  else
  {
    WPP_IFR_SF_dZq(FxDriverGlobals, (unsigned __int8)RegistryPath, a3, 0xAu, v8, globals, RegistryPath, FxDriverGlobals);
    ImageSectionHandle = MmLockPagableDataSection(VerifierPageLockHandle);
  }
}
