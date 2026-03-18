/*
 * XREFs of PfLogForegroundProcess @ 0x14026C13C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x14026C1B8 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  int v1; // eax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v1 = *(_DWORD *)(a1 - 140);
  v5 = 0;
  v4 = v1;
  v3 = a1 - 1664;
  return PfLogEvent(
           7LL,
           dword_140C500DC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v3);
}
