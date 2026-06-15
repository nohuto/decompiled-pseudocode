/*
 * XREFs of sub_1800D2160 @ 0x1800D2160
 * Callers:
 *     sub_1800DBDC0 @ 0x1800DBDC0 (sub_1800DBDC0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2160(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v9 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v9);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 56LL))(v9, *(_QWORD *)(a1 + 56), a2);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    sub_18004BD84((int)retaddr, 457, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v5);
  sub_18000F708(&v9);
  return v6;
}
