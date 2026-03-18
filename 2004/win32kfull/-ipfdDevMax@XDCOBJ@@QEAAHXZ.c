/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BC7E0
 * Callers:
 *     GreDescribePixelFormat @ 0x1C02BC938 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02BCAE0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BC808 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  if ( *(__int16 *)(*(_QWORD *)this + 2072LL) < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)*(__int16 *)(*(_QWORD *)this + 2072LL);
}
