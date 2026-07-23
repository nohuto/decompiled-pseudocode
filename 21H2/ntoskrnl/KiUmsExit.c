/*
 * XREFs of KiUmsExit @ 0x140413B00
 * Callers:
 *     NtContinueEx @ 0x1403FE810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEC40 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1404073D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408860 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C140 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F300 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 */

__int64 __fastcall KiUmsExit(char a1)
{
  __int64 v1; // rbp
  _BYTE v3[80]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-158h]
  char *v5; // [rsp+58h] [rbp-150h]
  char v6; // [rsp+70h] [rbp-138h] BYREF

  _enable();
  v3[72] = a1;
  v5 = &v6;
  v4 = v1 - 128;
  return KiParkUmsThread(v3);
}
