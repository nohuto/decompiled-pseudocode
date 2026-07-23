/*
 * XREFs of RtlWow64PopCrossProcessWorkFromFreeList @ 0x1801033D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlWow64PopCrossProcessWorkFromFreeList(volatile signed __int64 *a1)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax
  _DWORD *result; // rax
  bool v4; // zf
  signed __int64 v5; // rax
  _DWORD *v6; // [rsp+0h] [rbp-28h]
  signed __int64 v7; // [rsp+48h] [rbp+20h]

  v1 = *a1;
  do
  {
    v2 = v1 & 0x7FFFFFFF;
    if ( (v1 & 0x7FFFFFFF) == 0 )
      return 0LL;
    v6 = (_DWORD *)((char *)a1 + v2);
    HIDWORD(v7) = HIDWORD(v1) + 1;
    LODWORD(v7) = (v1 ^ *(_DWORD *)((char *)a1 + v2)) & 0x7FFFFFFF ^ v1;
    v5 = _InterlockedCompareExchange64(a1, v7, v1);
    v4 = v1 == v5;
    v1 = v5;
  }
  while ( !v4 );
  result = v6;
  *v6 = 0;
  return result;
}
