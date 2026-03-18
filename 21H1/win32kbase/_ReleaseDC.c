/*
 * XREFs of _ReleaseDC @ 0x1C006A3B0
 * Callers:
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}
