/*
 * XREFs of _IsCortanaApp_::_1_::dtor$0 @ 0x1803E10DE
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801AE508 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall IsCortanaApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    winrt::hstring::~hstring((HSTRING *)(a2 + 80));
  }
}
