/*
 * XREFs of HalpMiscBugCheckCallback @ 0x1403651F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HalpMiscBugCheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        PVOID ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  HalpDoingCrashDump = 1;
}
