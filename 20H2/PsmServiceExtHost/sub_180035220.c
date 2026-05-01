/*
 * XREFs of sub_180035220 @ 0x180035220
 * Callers:
 *     sub_180035188 @ 0x180035188 (sub_180035188.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035220(__int64 a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *Value |= 0x80uLL;
    ++Value[8];
  }
  return RtlAcquireSRWLockShared(a1 + 168);
}
