/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x180068B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x180068C9C (RtlpPopulateContext.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(a1, v5, 0LL);
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[4] = 0LL;
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
