/*
 * XREFs of sub_1801203F8 @ 0x1801203F8
 * Callers:
 *     sub_1801202B0 @ 0x1801202B0 (sub_1801202B0.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006D234 @ 0x18006D234 (sub_18006D234.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180120068 @ 0x180120068 (sub_180120068.c)
 *     sub_1801206BC @ 0x1801206BC (sub_1801206BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801203F8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  LPVOID v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v12; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = sub_180055F40(0x70uLL);
  try
  {
    if ( v7 )
      v8 = sub_180120068((__int64)v7);
    else
      v8 = 0LL;
    v12 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v8 = v12;
  }
  if ( v8 )
  {
    sub_18006D234((volatile signed __int32 *)(v8 + 32));
    v9 = sub_180010FD8((struct _RTL_CRITICAL_SECTION *)(v8 + 40));
    if ( v9 >= 0 )
    {
      *(_BYTE *)(v8 + 80) = 1;
      v9 = 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9;
    sub_1801206BC(v8);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 1LL);
  }
  return v6;
}
