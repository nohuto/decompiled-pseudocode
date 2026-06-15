/*
 * XREFs of sub_1800F5864 @ 0x1800F5864
 * Callers:
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5864(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_180171BD8, 19LL, &v5);
}
