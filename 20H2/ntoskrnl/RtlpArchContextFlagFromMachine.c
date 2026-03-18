/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x1406957F0
 * Callers:
 *     RtlWow64GetCpuAreaInfo @ 0x140695740 (RtlWow64GetCpuAreaInfo.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140695B90 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x1406D6F64 (PspWow64SetupCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpArchContextFlagFromMachine(unsigned __int16 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000;
    case 0x1C4u:
      return 0x200000;
    case 0x8664u:
      return 0x100000;
    case 0xAA64u:
      return 0x400000;
  }
  return v1;
}
