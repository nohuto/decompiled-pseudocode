/*
 * XREFs of _NtUserSetCoreWindow@8 @ 0xA22FE
 * Callers:
 *     <none>
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40 (-ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetWindowSubtreeCoreWindowStatus@8 @ 0xA2352 (_SetWindowSubtreeCoreWindowStatus@8.c)
 */

int __thiscall NtUserSetCoreWindow(struct tagWND **this, int a2, int a3)
{
  int v3; // esi
  int v5; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  EnterCrit(0, 1);
  v5 = 0;
  if ( ValidateHWNDND(a2, &v5) )
  {
    SetOrClrWF(a3, v5, 0x8B01u, 1);
    SetWindowSubtreeCoreWindowStatus(v5, a3);
    v3 = 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
