/*
 * XREFs of MmLoadSystemImage @ 0x140744480
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1404FCC50 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
