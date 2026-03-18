/*
 * XREFs of _NtUserSetProp@12 @ 0xB4F74
 * Callers:
 *     <none>
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __stdcall NtUserSetProp(HWND a1, unsigned int a2, int a3)
{
  int v3; // esi
  _BYTE v5[8]; // [esp+8h] [ebp-8h] BYREF

  v3 = 0;
  EnterCrit(0, 1);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v5, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v5) )
  {
    CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v5);
    v3 = InternalSetProp(a3, HIWORD(a2) != 0 ? 2 : 0);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v5);
  UserSessionSwitchLeaveCrit();
  return v3;
}
