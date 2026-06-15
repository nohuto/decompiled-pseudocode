/*
 * XREFs of sub_1800D2790 @ 0x1800D2790
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2790(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 80LL))(v1, &v6);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    sub_18004BD84((int)retaddr, 425, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v2);
  sub_18000F708(&v6);
  return v3;
}
