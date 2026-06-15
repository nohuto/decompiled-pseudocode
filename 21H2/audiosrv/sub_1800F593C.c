/*
 * XREFs of sub_1800F593C @ 0x1800F593C
 * Callers:
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F593C(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_180171BD8, 23LL, &v5);
}
