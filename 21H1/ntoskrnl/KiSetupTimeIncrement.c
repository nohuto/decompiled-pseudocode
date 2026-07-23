/*
 * XREFs of KiSetupTimeIncrement @ 0x1403C634C
 * Callers:
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     RtlGenerateQpcToIncrementConstants @ 0x140394ACC (RtlGenerateQpcToIncrementConstants.c)
 *     RtlpComputeFraction @ 0x140394B08 (RtlpComputeFraction.c)
 */

__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // rdi
  unsigned __int64 v10; // rax
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v12 = 0;
  v3 = 156250;
  v4 = a2;
  if ( a2 <= 0x1388 )
    v4 = 5000;
  v5 = KiMinDynamicTickDuration;
  KeMinimumIncrement = v4;
  if ( a1 < 0x2625A )
    v3 = a1;
  KeMaximumIncrement = v3;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v5 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v6 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v6 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v6 < v5 )
    KiMaxDynamicTickDuration = v5;
  KiTickOffset = v3;
  v13 = 0;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1u, v3, &v13);
  KeNumberProcessorsGroup0[1] = -v13;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = PerformanceFrequency;
  KeTimeAdjustmentFrequency = PerformanceFrequency.QuadPart;
  v9 = v7;
  v10 = RtlGenerateQpcToIncrementConstants(PerformanceFrequency.LowPart, &v12);
  MEMORY[0xFFFFF78000000300] = v8.QuadPart;
  MEMORY[0xFFFFF78000000360] = v10;
  MEMORY[0xFFFFF78000000369] = v12;
  MEMORY[0xFFFFF78000000358] = v10;
  MEMORY[0xFFFFF78000000368] = v12;
  MEMORY[0xFFFFF78000000348] = v9.QuadPart;
  MEMORY[0xFFFFF78000000350] = v9.QuadPart;
  result = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680 / KeMaximumIncrement;
  return result;
}
