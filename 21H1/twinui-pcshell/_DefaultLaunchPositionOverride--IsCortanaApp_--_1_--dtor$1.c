/*
 * XREFs of _DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor$1 @ 0x1800DEA4A
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x18018AA40 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    winrt::hstring::~hstring((winrt::hstring *)(a2 + 120));
  }
}
