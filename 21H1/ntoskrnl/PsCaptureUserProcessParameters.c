/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1406B65B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x1406B6660 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(int a1, int a2)
{
  struct _LIST_ENTRY *CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0, 3, (__int64)CurrentServerSilo);
}
