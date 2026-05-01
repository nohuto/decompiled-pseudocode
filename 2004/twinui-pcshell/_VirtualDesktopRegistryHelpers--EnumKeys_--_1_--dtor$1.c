/*
 * XREFs of _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$1 @ 0x180434EFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(a2 + 40);
}
