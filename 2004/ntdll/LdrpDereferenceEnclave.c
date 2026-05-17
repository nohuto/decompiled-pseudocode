/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800CD2D0
 * Callers:
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CCBF0 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCC80 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCD80 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CCE20 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CD24C (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD710 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDereferenceEnclave(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 112));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
