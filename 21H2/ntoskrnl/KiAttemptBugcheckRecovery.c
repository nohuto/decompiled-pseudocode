/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x1405788B0
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     IoRevertFromDemotedDumpType @ 0x140552B10 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckDebugBreak @ 0x1405672C0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405674E0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140567F5C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiCaptureDumpPreRecovery @ 0x140579060 (KiCaptureDumpPreRecovery.c)
 *     KiGetRecoveryInformation @ 0x1405792C0 (KiGetRecoveryInformation.c)
 *     KiIsRecoveryPossibleOnCurrentStack @ 0x140579444 (KiIsRecoveryPossibleOnCurrentStack.c)
 *     KiRecordRecoveryFailure @ 0x14057958C (KiRecordRecoveryFailure.c)
 *     KiSaveBugCheckRecoveryStatusPhase0 @ 0x140579620 (KiSaveBugCheckRecoveryStatusPhase0.c)
 *     KiSaveBugCheckRecoveryStatusPhase1 @ 0x1405796A4 (KiSaveBugCheckRecoveryStatusPhase1.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x140579750 (KiSaveBugcheckRecoveryProgress.c)
 *     KiScheduleBugcheckRecovery @ 0x140579780 (KiScheduleBugcheckRecovery.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x140579878 (KiSetBugCheckRecoveryProgressFlag.c)
 */

void KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  char *v2; // rdx
  __int64 v3; // rcx
  char v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v4 = 0;
  if ( !KiBugcheckRecoveryActive && KiRecoveryCallbackCount > 0 )
  {
    if ( KiBugcheckOwnerKeepsOthersFrozen )
      __fastfail(5u);
    if ( !(unsigned __int8)KiIsRecoveryPossibleOnCurrentStack() )
    {
      v0 = 1LL;
LABEL_26:
      KiRecordRecoveryFailure(v0);
      goto LABEL_27;
    }
    if ( (int)KiSetBugCheckRecoveryProgressFlag(0x8000LL) < 0
      || (KiGetRecoveryInformation(&KiBugcheckRecoveryInformation),
          (int)KiSaveBugCheckRecoveryStatusPhase0(KeGetCurrentIrql(), (unsigned int)dword_140C2AA24, qword_140C2AA28) < 0)
      || (KiInvokeBugCheckEntryCallbacks(0x3FFu, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu),
          LOBYTE(v1) = byte_140C2AA07,
          (int)KiSaveBugCheckRecoveryStatusPhase1(v1, (unsigned int)dword_140C2AA48) < 0) )
    {
      v0 = 5LL;
      goto LABEL_26;
    }
    if ( !byte_140C2AA07 )
    {
      v0 = 2LL;
      goto LABEL_26;
    }
    v2 = &v5;
    KiBugcheckRecoveryActive = 1;
    word_140C021C6 |= 2u;
    if ( !byte_140C2AA15 )
      v2 = 0LL;
    KiBugcheckRecoveryActiveEvaluated = 1;
    KiBugcheckRecoveryDumpPolicy = dword_140C2AA48;
    if ( KiBugCheckShouldEnterPostBugCheckDebugger(dword_140C2AA24, (__int64)v2) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "*******************************************************************************\n"
        "                           Bugcheck Recovery\n"
        "*******************************************************************************\n");
      DbgPrintEx(
        0x65u,
        0,
        " You are seeing this message because the system has bugchecked and\n is attempting a bugcheck recovery.\n");
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " System Error Info:\n"
        "     Bugcheck Code: 0x%08lx\n"
        "     Parameter 1: 0x%p\n"
        "     Parameter 2: 0x%p\n"
        "     Parameter 3: 0x%p\n"
        "     Parameter 4: 0x%p\n",
        dword_140C2AA24,
        (const void *)qword_140C2AA28,
        (const void *)qword_140C2AA30,
        (const void *)qword_140C2AA38,
        (const void *)qword_140C2AA40);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " Bugcheck Recovery Info Location: 0x%p\n"
        "*******************************************************************************\n"
        "\n",
        &KiBugcheckRecoveryInformation);
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( !(_BYTE)KdDebuggerNotPresent )
          KiBugCheckDebugBreak(3u);
      }
    }
    if ( (int)KiCaptureDumpPreRecovery(v3, &v4) < 0 )
      KiBugcheckRecoveryDumpPolicy = 0;
    if ( (int)KiSaveBugcheckRecoveryProgress(194LL) < 0
      || (KiScheduleBugcheckRecovery(), (int)KiSaveBugcheckRecoveryProgress(195LL) < 0) )
    {
      KiRecordRecoveryFailure(5LL);
    }
    if ( v4 )
      IoRevertFromDemotedDumpType();
  }
LABEL_27:
  KiBugcheckRecoveryActiveEvaluated = 1;
}
