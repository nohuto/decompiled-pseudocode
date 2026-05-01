/*
 * XREFs of ?Show@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1803713D0
 * Callers:
 *     ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180370930 (-OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AccessibilityExperienceManager::Show(AccessibilityExperienceManager *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  int pvParam; // [rsp+30h] [rbp+8h] BYREF

  pvParam = 0;
  if ( !SystemParametersInfoW(0xAAu, 0, &pvParam, 0) || pvParam )
    a2 = 0;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, a2 ^ 1u);
}
