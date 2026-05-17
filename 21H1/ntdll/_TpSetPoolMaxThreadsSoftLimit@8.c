/*
 * XREFs of _TpSetPoolMaxThreadsSoftLimit@8 @ 0x4B2EBEA0
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20 (_TpSetDefaultPoolMaxThreads@4.c)
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpSetPoolMaxThreadsSoftLimit(int a1, int a2)
{
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 14, &a2, 4);
}
