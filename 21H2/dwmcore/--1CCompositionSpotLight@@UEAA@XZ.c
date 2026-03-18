/*
 * XREFs of ??1CCompositionSpotLight@@UEAA@XZ @ 0x18020F32C
 * Callers:
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x18020F370 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CCompositionSpotLight::~CCompositionSpotLight(CCompositionSpotLight *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 32);
  CCompositionLight::~CCompositionLight(this);
}
