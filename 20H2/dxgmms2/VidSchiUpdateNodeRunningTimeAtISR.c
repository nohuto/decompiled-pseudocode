/*
 * XREFs of VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000D3A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D420 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

__int64 __fastcall VidSchiUpdateNodeRunningTimeAtISR(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v5 = *a1;
  v6 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1548) + 1560);
  result = 0LL;
  if ( v6 )
  {
    v9[0] = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v9[1] = v6;
    result = VidSchiUpdateContextRunningTimeAtISR(v9, a2, a3, a4);
    a1[3] = v11;
    v8 = v10;
    a1[1] = v6;
  }
  else
  {
    a1[1] = 0LL;
    a1[3] = 0LL;
    v8 = *(_QWORD *)(v5 + 2640);
  }
  a1[2] = v8;
  return result;
}
