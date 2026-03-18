/*
 * XREFs of GetDesktopView @ 0x1C0026530
 * Callers:
 *     _MapDesktopObject @ 0x1C0025C50 (_MapDesktopObject.c)
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0026A48 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C0027D00 (NtUserDwmValidateWindow.c)
 *     IsHotKey @ 0x1C0055160 (IsHotKey.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     NtUserPostThreadMessage @ 0x1C00BE7A0 (NtUserPostThreadMessage.c)
 *     UserCommitDesktopMemory @ 0x1C0114F50 (UserCommitDesktopMemory.c)
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
