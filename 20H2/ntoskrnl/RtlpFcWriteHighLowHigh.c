/*
 * XREFs of RtlpFcWriteHighLowHigh @ 0x1403CDA84
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x1408806C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartBootPhase @ 0x140A3B70C (CmFcManagerStartBootPhase.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcWriteHighLowHigh(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-8h]

  _disable();
  *(_DWORD *)(a1 + 8) = HIDWORD(a2);
  result = v3 >> 9;
  *(_QWORD *)a1 = a2;
  if ( (v3 & 0x200) != 0 )
    _enable();
  return result;
}
