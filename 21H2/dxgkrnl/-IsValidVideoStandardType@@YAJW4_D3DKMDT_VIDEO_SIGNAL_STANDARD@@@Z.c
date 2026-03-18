/*
 * XREFs of ?IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z @ 0x1C006BA90
 * Callers:
 *     _pReadDetailTimingFromReg @ 0x1C03B4C68 (_pReadDetailTimingFromReg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidVideoStandardType(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD a1)
{
  if ( (unsigned int)(a1 - 1) <= 0x1A || a1 == D3DKMDT_VSS_OTHER )
    return 0LL;
  else
    return 3223192354LL;
}
