/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800CD4B0
 * Callers:
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CCDD0 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCE60 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCF60 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CD000 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CD42C (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD8F0 (LdrpIssueEnclaveCall.c)
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
