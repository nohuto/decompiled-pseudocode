/*
 * XREFs of HalpHvWatchdogDiscover @ 0x1403AD110
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpHvWatchdogDiscover(__int64 a1)
{
  _QWORD v7[18]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v8; // [rsp+B0h] [rbp+37h]

  if ( !HalpTimerWatchdogPhysicalOnly && HalpIsMicrosoftCompatibleHvLoaded(a1) && (HalpEnlightenment & 0x20) == 0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v8 = __PAIR64__(_RBX, _RAX);
    if ( (_RDX & 0x400000) != 0 && (v8 & 0x100000000008LL) == 0x100000000008LL )
    {
      memset(v7, 0, sizeof(v7));
      v7[11] = 0LL;
      v7[12] = 0x4000000000LL;
      v7[1] = HalpHvWatchdogInitialize;
      v7[0] = 0x9000000001LL;
      v7[4] = HalpHvWatchdogArm;
      v7[5] = HalpHvWatchdogStop;
      v7[13] = 10000000LL;
      LODWORD(v7[17]) = 8;
      HIDWORD(v7[14]) = 163872;
      HalpTimerRegister((__int64)v7, 0LL);
    }
  }
  return 0LL;
}
