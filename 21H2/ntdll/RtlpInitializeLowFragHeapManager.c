/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x18010B9D4
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800F2654 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000A068 (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009DCC0 (NtQuerySystemInformation.c)
 */

int __fastcall RtlpInitializeLowFragHeapManager(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int result; // eax
  char v5; // cl
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+58h] [rbp-20h]

  v3 = 1;
  RtlpLFHKey = RtlpHeapGenerateRandomValue64(a1, a2, a3);
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v5 = 0;
    if ( (unsigned int)v7 > 1 )
    {
      do
        ++v5;
      while ( (unsigned int)v7 >> v5 > 1 );
    }
    result = -(1 << v5) & ((1LL << v5) + v7 - 1);
    if ( (unsigned int)result > 0x40 )
      result = 64;
    v3 = result;
  }
  RtlpDefaultHeapDebuggingOptions = 0LL;
  RtlpAffinityState[0] = v3;
  xmmword_18016ADD0 = 0LL;
  xmmword_18016ADE0 = 0LL;
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
    dword_18016ADCC = result;
  }
  return result;
}
