/*
 * XREFs of ?HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z @ 0xC97D4
 * Callers:
 *     ?CleanupFreedTLCInfo@@YGXXZ @ 0xC977A (-CleanupFreedTLCInfo@@YGXXZ.c)
 *     ?DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z @ 0xD2B5E (-DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x143B43 (-DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91 (-SetHidPOCountToTLCInfo@@YGXGKH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall HidTLCInfoNoReference(_DWORD *this)
{
  return (this[3] | this[4] | this[6] | this[7]) == 0;
}
