/*
 * XREFs of RtlpHpPerHeapStackTraceInitialize @ 0x1801083A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = RtlpHpEnvHandle;
  v4 = (_QWORD *)RtlpHpMetadataAlloc(0x20uLL, 0x20uLL, 0, &v6);
  result = 0LL;
  if ( v4 )
  {
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 20) = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    result = 1LL;
    *a3 = v4;
  }
  return result;
}
