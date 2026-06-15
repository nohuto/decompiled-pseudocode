/*
 * XREFs of sub_1800CB144 @ 0x1800CB144
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 *     sub_180035750 @ 0x180035750 (sub_180035750.c)
 *     sub_180046A30 @ 0x180046A30 (sub_180046A30.c)
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_180051FA0 @ 0x180051FA0 (sub_180051FA0.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18006EBE4 @ 0x18006EBE4 (sub_18006EBE4.c)
 *     sub_180071600 @ 0x180071600 (sub_180071600.c)
 *     sub_1800716A0 @ 0x1800716A0 (sub_1800716A0.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 *     sub_1800C65D8 @ 0x1800C65D8 (sub_1800C65D8.c)
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 *     sub_1800D1BD0 @ 0x1800D1BD0 (sub_1800D1BD0.c)
 *     sub_1800D1C6C @ 0x1800D1C6C (sub_1800D1C6C.c)
 *     sub_1800D1F10 @ 0x1800D1F10 (sub_1800D1F10.c)
 *     sub_1800D2240 @ 0x1800D2240 (sub_1800D2240.c)
 *     sub_1800DAC60 @ 0x1800DAC60 (sub_1800DAC60.c)
 *     sub_1800DC980 @ 0x1800DC980 (sub_1800DC980.c)
 *     sub_1800DEC00 @ 0x1800DEC00 (sub_1800DEC00.c)
 *     sub_1800DF480 @ 0x1800DF480 (sub_1800DF480.c)
 *     sub_1800E5350 @ 0x1800E5350 (sub_1800E5350.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 *     sub_1800F1BE0 @ 0x1800F1BE0 (sub_1800F1BE0.c)
 *     sub_1800F1CE0 @ 0x1800F1CE0 (sub_1800F1CE0.c)
 *     sub_1800F1DF0 @ 0x1800F1DF0 (sub_1800F1DF0.c)
 *     sub_1800F717C @ 0x1800F717C (sub_1800F717C.c)
 *     sub_180107BC8 @ 0x180107BC8 (sub_180107BC8.c)
 *     sub_180108FA0 @ 0x180108FA0 (sub_180108FA0.c)
 *     sub_18010B268 @ 0x18010B268 (sub_18010B268.c)
 *     sub_18010B4E4 @ 0x18010B4E4 (sub_18010B4E4.c)
 *     sub_18010CD40 @ 0x18010CD40 (sub_18010CD40.c)
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 *     sub_18010E874 @ 0x18010E874 (sub_18010E874.c)
 *     sub_18010EF40 @ 0x18010EF40 (sub_18010EF40.c)
 *     sub_18010F85C @ 0x18010F85C (sub_18010F85C.c)
 *     sub_180110050 @ 0x180110050 (sub_180110050.c)
 *     sub_1801118BC @ 0x1801118BC (sub_1801118BC.c)
 *     sub_180111AF8 @ 0x180111AF8 (sub_180111AF8.c)
 *     sub_180111DC0 @ 0x180111DC0 (sub_180111DC0.c)
 *     sub_180111F34 @ 0x180111F34 (sub_180111F34.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180113124 @ 0x180113124 (sub_180113124.c)
 *     sub_180113730 @ 0x180113730 (sub_180113730.c)
 *     sub_180114650 @ 0x180114650 (sub_180114650.c)
 *     sub_1801149D0 @ 0x1801149D0 (sub_1801149D0.c)
 *     sub_180114C50 @ 0x180114C50 (sub_180114C50.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CB144(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
