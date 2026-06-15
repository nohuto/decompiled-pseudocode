/*
 * XREFs of sub_1801049C4 @ 0x1801049C4
 * Callers:
 *     sub_1801024B0 @ 0x1801024B0 (sub_1801024B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801049C4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_1801726D0, 49LL, &v5);
}
