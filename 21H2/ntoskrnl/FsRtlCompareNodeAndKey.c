/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x14021D428
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x1405E7E80 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405E7FF0 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3, char a4)
{
  const UNICODE_STRING *v6; // rsi
  LONG result; // eax

  if ( *(_QWORD *)(a1 + 48) < a2 )
    return -1;
  if ( *(_QWORD *)(a1 + 48) > a2 )
    return 1;
  v6 = (const UNICODE_STRING *)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL));
  result = RtlCompareUnicodeString(v6, a3, 1u);
  if ( !result )
  {
    if ( a4 )
      return RtlCompareUnicodeString(v6, a3, 0);
  }
  return result;
}
