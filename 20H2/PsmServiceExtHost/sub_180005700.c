/*
 * XREFs of sub_180005700 @ 0x180005700
 * Callers:
 *     sub_1800054FC @ 0x1800054FC (sub_1800054FC.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180026FA4 @ 0x180026FA4 (sub_180026FA4.c)
 *     sub_1800298A0 @ 0x1800298A0 (sub_1800298A0.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 *     sub_180070928 @ 0x180070928 (sub_180070928.c)
 *     sub_18007D960 @ 0x18007D960 (sub_18007D960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180005700(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  *(_DWORD *)(a1 + 8) = 0;
  v4 = RtlSleepConditionVariableSRW(a2, a1, a3, 0LL);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  return v4;
}
