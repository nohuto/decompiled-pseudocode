/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x18005CCEC
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005CC2C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 * Callees:
 *     RtlBackoff @ 0x18005CD68 (RtlBackoff.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r11
  __int64 *v5; // r10
  unsigned __int64 v6; // r9
  __int64 v7; // rtt
  unsigned __int64 v8; // r9
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v3 = a3;
  v5 = a1;
  while ( 1 )
  {
    _m_prefetchw(v5);
    v6 = *v5 & 1 | ((*v5 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v6 < 2 )
      __fastfail(0xEu);
    v7 = *v5;
    if ( v7 == _InterlockedCompareExchange64(v5, v6, *v5) )
      break;
    RtlBackoff(&v10);
  }
  v8 = v6 & 1;
  result = v5[v8 + 21];
  *a2 = result;
  *v3 = &v5[8 * v8 + 3 + v8];
  return result;
}
