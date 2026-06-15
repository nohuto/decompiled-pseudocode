/*
 * XREFs of sub_18005E9D0 @ 0x18005E9D0
 * Callers:
 *     sub_18005E940 @ 0x18005E940 (sub_18005E940.c)
 *     sub_1800BDC70 @ 0x1800BDC70 (sub_1800BDC70.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005E9D0(void **a1, __int64 a2)
{
  _QWORD *v2; // rsi
  int v5; // ebx
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 4;
  sub_18002A504(a1 + 4, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, v2);
  if ( v5 < 0 )
  {
    v7 = 161;
  }
  else
  {
    sub_18002A504(a1 + 5, 0LL);
    MMDevAPI_29(*v2, a1 + 5);
    v5 = (*((__int64 (__fastcall **)(void **))*a1 + 14))(a1);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 166;
  }
  sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp", v5);
  return (unsigned int)v5;
}
