/*
 * XREFs of ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18047B268
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x18047B930 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItem @ 0x18047BF50 (s_OnDrawItem.c)
 * Callees:
 *     ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18047B4B0 (-InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC(Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
