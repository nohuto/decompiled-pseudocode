/*
 * XREFs of ??1hstring_builder@impl@winrt@@QEAA@XZ @ 0x1800BDA38
 * Callers:
 *     _winrt::to_hstring_char_const___void__::_1_::dtor$1 @ 0x1800BD8D4 (_winrt--to_hstring_char_const___void__--_1_--dtor$1.c)
 * Callees:
 *     WindowsDeleteStringBuffer_0 @ 0x18003CEEB (WindowsDeleteStringBuffer_0.c)
 */

void __fastcall winrt::impl::hstring_builder::~hstring_builder(winrt::impl::hstring_builder *this)
{
  HSTRING_BUFFER v1; // rcx

  v1 = (HSTRING_BUFFER)*((_QWORD *)this + 1);
  if ( v1 )
    WindowsDeleteStringBuffer_0(v1);
}
