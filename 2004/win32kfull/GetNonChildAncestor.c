/*
 * XREFs of GetNonChildAncestor @ 0x1C003366C
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008640 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C00333D4 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     _SelectPalette @ 0x1C00FCEA4 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0241E10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  __int64 v1; // r8

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    do
      v1 = *(_QWORD *)(v1 + 104);
    while ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 31LL) & 0xC0) == 0x40 );
  }
  return v1;
}
