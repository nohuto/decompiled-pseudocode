/*
 * XREFs of _NtUserGetProp@8 @ 0x83CF0
 * Callers:
 *     <none>
 * Callees:
 *     _GetSharedPropForFilteredProcesses@8 @ 0x83DD4 (_GetSharedPropForFilteredProcesses@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall NtUserGetProp(HWND a1, unsigned __int16 a2)
{
  int Prop; // esi
  struct tagWND *v3; // ebx
  _BYTE v5[8]; // [esp+Ch] [ebp-2Ch] BYREF
  int v6; // [esp+14h] [ebp-24h]
  int v7; // [esp+18h] [ebp-20h]
  struct _KAPC_STATE ApcState; // [esp+1Ch] [ebp-1Ch] BYREF

  Prop = 0;
  v7 = a2;
  EnterSharedCrit(0, 1);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v5, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v5) )
  {
    v6 = a2;
    v3 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v5);
    Prop = RealGetProp(*((_DWORD *)v3 + 20), a2, 0);
    if ( !Prop && (*((_BYTE *)v3 + 200) & 0x40) != 0 )
    {
      if ( (_WORD)v7 == 0xA914 )
      {
        Prop = 0;
      }
      else
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**(PRKPROCESS **)(*((_DWORD *)v3 + 2) + 232), &ApcState);
        Prop = GetSharedPropForFilteredProcesses(v3, v6);
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v5);
  UserSessionSwitchLeaveCrit();
  return Prop;
}
