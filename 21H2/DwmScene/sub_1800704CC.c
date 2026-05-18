/*
 * XREFs of sub_1800704CC @ 0x1800704CC
 * Callers:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_18006DB10 @ 0x18006DB10 (sub_18006DB10.c)
 *     sub_180071210 @ 0x180071210 (sub_180071210.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 * Callees:
 *     sub_1800670D8 @ 0x1800670D8 (sub_1800670D8.c)
 */

__int64 __fastcall sub_1800704CC(__int64 a1)
{
  sub_1800670D8(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
