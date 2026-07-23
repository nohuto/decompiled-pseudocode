/*
 * XREFs of MmLoadSystemImage @ 0x14075BC80
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x140502670 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
