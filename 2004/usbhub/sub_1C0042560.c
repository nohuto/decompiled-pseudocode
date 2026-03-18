/*
 * XREFs of sub_1C0042560 @ 0x1C0042560
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C004172C @ 0x1C004172C (sub_1C004172C.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0073008 @ 0x1C0073008 (sub_1C0073008.c)
 */

__int64 __fastcall sub_1C0042560(__int64 a1, int a2)
{
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0062F40);
  sub_1C00438A0(0, a2, 0, 4, 0LL, 0LL);
  sub_1C004172C((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)qword_1C006B760);
  sub_1C004172C((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)qword_1C006B750);
  return sub_1C0073008(a1);
}
