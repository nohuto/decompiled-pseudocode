/*
 * XREFs of __anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog_::_1_::dtor$1 @ 0x1801EB706
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801AE930 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    winrt::hstring::~hstring(*(HSTRING **)(a2 + 80));
  }
}
