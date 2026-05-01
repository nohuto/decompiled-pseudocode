/*
 * XREFs of sub_18002A414 @ 0x18002A414
 * Callers:
 *     sub_18002A3C4 @ 0x18002A3C4 (sub_18002A3C4.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007A340 @ 0x18007A340 (sub_18007A340.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002A414(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  return RtlAcquireSRWLockShared(a1 + 304);
}
