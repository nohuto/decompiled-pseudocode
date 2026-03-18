/*
 * XREFs of GetDesktopView @ 0x1C003E860
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C003BB60 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C003C300 (_MapDesktopObject.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C003E054 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     NtUserPostThreadMessage @ 0x1C00BE490 (NtUserPostThreadMessage.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     IsHotKey @ 0x1C0102730 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C01164E0 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  unsigned int DLT; // eax
  _QWORD *result; // rax

  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  for ( result = *(_QWORD **)(a1 + 704); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
