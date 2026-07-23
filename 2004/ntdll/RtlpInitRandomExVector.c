/*
 * XREFs of RtlpInitRandomExVector @ 0x180102370
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpInitRandomExVector(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int v3; // eax
  int *v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v3 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = RtlpRandomExConstantVector;
  LODWORD(v5) = LdrSystemDllInitBlock.RngData ^ ProcessInformation;
  v6 = 128LL;
  do
  {
    v5 = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
    *v4++ = v5;
    --v6;
  }
  while ( v6 );
  result = 1LL;
  RtlpRandomExAuxVarY = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
  return result;
}
