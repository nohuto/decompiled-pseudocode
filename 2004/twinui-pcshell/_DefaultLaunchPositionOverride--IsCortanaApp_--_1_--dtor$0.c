/*
 * XREFs of _DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor$0 @ 0x18010390D
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801AE930 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall DefaultLaunchPositionOverride::IsCortanaApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    winrt::hstring::~hstring((winrt::hstring *)(a2 + 32));
  }
}
