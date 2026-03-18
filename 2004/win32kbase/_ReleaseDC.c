/*
 * XREFs of _ReleaseDC @ 0x1C00A53A0
 * Callers:
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, int a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL, a3) != 2;
}
