/*
 * XREFs of ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180457258
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x180457910 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItem @ 0x180457F18 (s_OnDrawItem.c)
 * Callees:
 *     ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1804574A0 (-InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC(Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
