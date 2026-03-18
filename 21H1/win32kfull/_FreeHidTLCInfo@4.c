/*
 * XREFs of _FreeHidTLCInfo@4 @ 0xD2BB8
 * Callers:
 *     ?CleanupFreedTLCInfo@@YGXXZ @ 0xC977A (-CleanupFreedTLCInfo@@YGXXZ.c)
 *     ?DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z @ 0xD2B5E (-DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x143B43 (-DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91 (-SetHidPOCountToTLCInfo@@YGXGKH@Z.c)
 *     _CleanupHidRequestList@0 @ 0x1441FF (_CleanupHidRequestList@0.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 */

int __thiscall FreeHidTLCInfo(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5, (PKTHREAD *)_gTLCInfoLock);
  v2 = *this;
  if ( *(_DWORD **)(*this + 4) != this || (v3 = (_DWORD *)this[1], (_DWORD *)*v3 != this) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  result = Win32FreePool(this);
  if ( v5 )
    return RIMUnlockExclusive(v5);
  return result;
}
