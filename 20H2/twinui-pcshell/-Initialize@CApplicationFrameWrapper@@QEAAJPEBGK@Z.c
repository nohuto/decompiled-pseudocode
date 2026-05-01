/*
 * XREFs of ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x180175750
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x180173D58 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_180173D58.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Initialize(LPVOID *this, const unsigned __int16 *a2, unsigned int a3)
{
  int v5; // esi
  HWND v6; // rcx

  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         this + 18,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v5 >= 0 )
  {
    v6 = (HWND)this[10];
    *((_DWORD *)this + 42) = a3;
    SetPropW(v6, L"LastSetGlomIdForReconstitution", (HANDLE)a3);
  }
  return (unsigned int)v5;
}
