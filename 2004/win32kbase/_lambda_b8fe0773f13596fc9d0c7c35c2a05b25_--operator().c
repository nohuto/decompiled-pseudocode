/*
 * XREFs of _lambda_b8fe0773f13596fc9d0c7c35c2a05b25_::operator() @ 0x1C00C4210
 * Callers:
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A6FEC (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall lambda_b8fe0773f13596fc9d0c7c35c2a05b25_::operator()(unsigned int **a1, _DWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+0h] [rbp-18h]

  *a2 = 19;
  a2[1] = (*a1)[6];
  a2[2] = *(_DWORD *)(*a1[1] * *((_QWORD *)*a1 + 11) + *((_QWORD *)*a1 + 7) + 8LL);
  a2[3] = *(_QWORD *)(*a1[1] * *((_QWORD *)*a1 + 11) + *((_QWORD *)*a1 + 7));
  v3 = *(_QWORD *)(*a1[1] * *((_QWORD *)*a1 + 11) + *((_QWORD *)*a1 + 7));
  result = HIDWORD(v3);
  a2[4] = HIDWORD(v3);
  return result;
}
