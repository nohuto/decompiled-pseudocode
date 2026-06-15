/*
 * XREFs of sub_1800E1384 @ 0x1800E1384
 * Callers:
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E1384(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_18015E3E8, 29LL, &v5);
}
