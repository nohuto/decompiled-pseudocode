/*
 * XREFs of KiUmsExit @ 0x140410EC0
 * Callers:
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FC7E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
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
