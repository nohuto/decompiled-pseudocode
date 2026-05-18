/*
 * XREFs of sub_18006156C @ 0x18006156C
 * Callers:
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_18006B940 @ 0x18006B940 (sub_18006B940.c)
 *     sub_180072F30 @ 0x180072F30 (sub_180072F30.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180074B7C @ 0x180074B7C (sub_180074B7C.c)
 *     sub_180075B70 @ 0x180075B70 (sub_180075B70.c)
 *     sub_180079718 @ 0x180079718 (sub_180079718.c)
 *     sub_180086610 @ 0x180086610 (sub_180086610.c)
 *     sub_1800866F0 @ 0x1800866F0 (sub_1800866F0.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 * Callees:
 *     sub_180060FF4 @ 0x180060FF4 (sub_180060FF4.c)
 *     _Thrd_id @ 0x18011FA5C (_Thrd_id.c)
 */

__int64 __fastcall sub_18006156C(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 0;
  sub_180060FF4(a1, 1);
  *(_BYTE *)(a2 + 8) = 1;
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
