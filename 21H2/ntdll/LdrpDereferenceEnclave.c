/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800CD430
 * Callers:
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CCD50 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCDE0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCEE0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CCF80 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CD3AC (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD870 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall LdrpDereferenceEnclave(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 15, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 14));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
