/*
 * XREFs of _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1803E9B2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::CDesktopPositioner_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 184LL));
}
