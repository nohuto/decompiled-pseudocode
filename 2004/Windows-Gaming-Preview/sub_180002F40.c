/*
 * XREFs of sub_180002F40 @ 0x180002F40
 * Callers:
 *     sub_18000307C @ 0x18000307C (sub_18000307C.c)
 *     sub_1800030CC @ 0x1800030CC (sub_1800030CC.c)
 *     sub_180003198 @ 0x180003198 (sub_180003198.c)
 *     sub_18001211C @ 0x18001211C (sub_18001211C.c)
 *     sub_18003D438 @ 0x18003D438 (sub_18003D438.c)
 *     sub_18003E7E0 @ 0x18003E7E0 (sub_18003E7E0.c)
 * Callees:
 *     __castguard_check_failure_user_handled_wrapper @ 0x18000293C (__castguard_check_failure_user_handled_wrapper.c)
 *     __castguard_check_failure_user_handled_wrapper_0 @ 0x180002960 (__castguard_check_failure_user_handled_wrapper_0.c)
 *     sub_180002BE8 @ 0x180002BE8 (sub_180002BE8.c)
 *     sub_180002EA4 @ 0x180002EA4 (sub_180002EA4.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180002F40(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9,
        char a10)
{
  bool v10; // di
  int v11; // [rsp+48h] [rbp-14F0h]
  int v12; // [rsp+58h] [rbp-14E0h]
  int v13; // [rsp+68h] [rbp-14D0h]
  __int64 v14[18]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v15[128]; // [rsp+110h] [rbp-1428h] BYREF
  char OutputString[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && qword_18005ABF0;
  sub_180002BE8(a1, a2, a3, a4, a5, a6, a7, a8, a9, v11, OutputString, v12, v15, v13, (__int64)v14);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      sub_180002EA4((__int64)v14);
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(__int64 *, char *))qword_18005ABF0)(v14, OutputString);
      if ( (a10 & 4) != 0 )
        _castguard_check_failure_user_handled_wrapper();
      _castguard_check_failure_user_handled_wrapper_0();
      sub_180002EA4((__int64)v14);
    }
  }
}
