/*
 * XREFs of KiUmsExit @ 0x140409E40
 * Callers:
 *     NtContinueEx @ 0x1403F7810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403F7AD0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1403FEA10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FFD40 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404033C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140406280 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404096C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
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
