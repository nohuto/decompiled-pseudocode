/*
 * XREFs of _SetCaretBlinkTime @ 0x1C003DB40
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C005FED0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006015C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v3 + 344) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 296), *(struct tagQ **)(gptiCurrent + 424LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 296), (struct tagQ *)v3);
  }
  return 1LL;
}
