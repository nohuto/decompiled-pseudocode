/*
 * XREFs of NtUserEndMenu @ 0x1C0129230
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C02373F8 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 MenuStateWindow; // rax

  EnterCrit(0LL, 1LL);
  v1 = gptiCurrent;
  v2 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v2 )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 600LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499, 0, 0);
    else
      *(_DWORD *)(v2 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v1, v2, v0);
  return 1LL;
}
