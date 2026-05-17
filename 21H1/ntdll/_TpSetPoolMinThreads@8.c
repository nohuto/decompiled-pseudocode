/*
 * XREFs of _TpSetPoolMinThreads@8 @ 0x4B2ED0C0
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _TppETWPoolThreadMin@8 @ 0x4B384CB2 (_TppETWPoolThreadMin@8.c)
 */

int __stdcall TpSetPoolMinThreads(int a1, int a2)
{
  int v2; // edi
  int v3; // ecx

  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  v2 = ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 4, &a2, 4);
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478;
  if ( *(_BYTE *)v3 && v2 >= 0 )
    TppETWPoolThreadMin(a1, a2);
  return v2;
}
