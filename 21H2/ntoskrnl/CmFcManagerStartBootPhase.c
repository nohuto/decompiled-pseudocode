/*
 * XREFs of CmFcManagerStartBootPhase @ 0x140A396D8
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A39340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     RtlpFcWriteHighLowHigh @ 0x1403CE5D4 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CADB4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpIncrementChangeStamp @ 0x1407D576C (CmFcpIncrementChangeStamp.c)
 */

__int64 __fastcall CmFcManagerStartBootPhase(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF

  v6 = CmFcpIncrementChangeStamp(qword_140C48158);
  v11[8] = a5;
  v11[1] = v7;
  v11[2] = v8;
  v11[4] = v7;
  v11[5] = v8;
  v11[0] = v6;
  v11[3] = v6;
  v11[6] = v6;
  v11[7] = v9;
  RtlpFcBufferManagerUpdateBuffers(qword_140C481B0, v6, (__int64)v11);
  result = RtlpFcWriteHighLowHigh((__int64)&qword_140C48158, v6);
  qword_140C48298[0] = a6;
  return result;
}
