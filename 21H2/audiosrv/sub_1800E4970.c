/*
 * XREFs of sub_1800E4970 @ 0x1800E4970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E60FC @ 0x1800E60FC (sub_1800E60FC.c)
 */

__int64 __fastcall sub_1800E4970(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v4 + 56LL))(v4, &v14) >= 0 )
    {
      v5 = v14;
      v6 = *v14;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 80))(v5, v7);
    }
    sub_18000F708((__int64 *)&v14);
  }
  v8 = *(__int64 **)(a1 + 80);
  v9 = *v8;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 32))(v8, v10);
  if ( v11 < 0 )
    sub_18006D26C((int)retaddr, 1444, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v11);
  sub_1800E60FC(a1, a2);
  return 0LL;
}
