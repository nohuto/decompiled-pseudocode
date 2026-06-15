/*
 * XREFs of sub_18006CFE4 @ 0x18006CFE4
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180063D94 @ 0x180063D94 (sub_180063D94.c)
 *     sub_18006CF50 @ 0x18006CF50 (sub_18006CF50.c)
 *     sub_18006EB44 @ 0x18006EB44 (sub_18006EB44.c)
 *     sub_180136F2C @ 0x180136F2C (sub_180136F2C.c)
 * Callees:
 *     sub_18006D078 @ 0x18006D078 (sub_18006D078.c)
 *     sub_18006D6CC @ 0x18006D6CC (sub_18006D6CC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18006CFE4(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  _UNKNOWN **result; // rax
  int v9; // eax
  int v10; // r11d
  char v11; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    v9 = sub_18006D6CC(a7, a6);
    result = (_UNKNOWN **)sub_18006D078(v10, a2, v9, 0);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)qword_18019FA58;
      if ( qword_18019FA58 )
      {
        v11 = 0;
        return (_UNKNOWN **)qword_18019FA58(a2, a5, 0LL, a6, &a7, 0LL, v11, 1LL);
      }
    }
  }
  return result;
}
