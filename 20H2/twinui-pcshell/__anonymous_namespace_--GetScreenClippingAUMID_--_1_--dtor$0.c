/*
 * XREFs of __anonymous_namespace_::GetScreenClippingAUMID_::_1_::dtor$0 @ 0x1801E8157
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801AE508 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::GetScreenClippingAUMID_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    winrt::hstring::~hstring(*(HSTRING **)(a2 + 80));
  }
}
