/*
 * XREFs of sub_1C0004604 @ 0x1C0004604
 * Callers:
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     WorkerRoutine @ 0x1C000A0D0 (WorkerRoutine.c)
 *     sub_1C000AE00 @ 0x1C000AE00 (sub_1C000AE00.c)
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 *     sub_1C000BC00 @ 0x1C000BC00 (sub_1C000BC00.c)
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 *     sub_1C000D310 @ 0x1C000D310 (sub_1C000D310.c)
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 *     sub_1C000DAA0 @ 0x1C000DAA0 (sub_1C000DAA0.c)
 *     sub_1C000DB50 @ 0x1C000DB50 (sub_1C000DB50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0004604(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
