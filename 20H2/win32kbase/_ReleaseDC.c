/*
 * XREFs of _ReleaseDC @ 0x1C005EC50
 * Callers:
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, int a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL, a3) != 2;
}
