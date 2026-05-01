/*
 * XREFs of sub_18000DC14 @ 0x18000DC14
 * Callers:
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     sub_180035A10 @ 0x180035A10 (sub_180035A10.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_18000DC14(__int64 a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx

  sub_18001E380(a1);
  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared(a1 + 576);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = 0LL;
  if ( v5 && (unsigned int)sub_18000EE4C(v5) )
    v6 = *(_QWORD *)(a1 + 568);
  sub_18001E830(v5, v4, 5LL);
  RtlReleaseSRWLockShared(a1 + 576);
  sub_18000F390();
  return v6;
}
