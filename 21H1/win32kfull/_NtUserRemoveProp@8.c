/*
 * XREFs of _NtUserRemoveProp@8 @ 0x97A0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserRemoveProp(HWND a1, int a2)
{
  int v2; // esi
  struct tagWND *v3; // eax
  int v4; // edx
  _BYTE v6[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v6, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v6) )
  {
    v3 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v6);
    v4 = *((_DWORD *)v3 + 20);
    if ( (_WORD)a2 == word_273898 )
      *(_DWORD *)(*((_DWORD *)v3 + 5) + 200) = 0;
    v2 = RealInternalRemoveProp(v4, a2, 0);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
