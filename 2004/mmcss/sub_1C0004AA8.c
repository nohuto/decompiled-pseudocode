/*
 * XREFs of sub_1C0004AA8 @ 0x1C0004AA8
 * Callers:
 *     sub_1C000DD00 @ 0x1C000DD00 (sub_1C000DD00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0004AA8(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C0005230,
           11LL,
           &v5,
           4LL,
           0LL);
}
