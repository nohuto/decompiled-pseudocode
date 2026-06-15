/*
 * XREFs of sub_1800F580C @ 0x1800F580C
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_1800F24F0 @ 0x1800F24F0 (sub_1800F24F0.c)
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F580C(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_180171BD8, a2, &v5);
}
