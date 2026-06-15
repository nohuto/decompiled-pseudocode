/*
 * XREFs of sub_1800495DC @ 0x1800495DC
 * Callers:
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 * Callees:
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800495DC(__int64 a1, unsigned int a2, __int128 *a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = *a3;
  sub_18004978C(a1, (unsigned int)&v10, a2, a4, (__int64)&v11);
  v7 = v11;
  if ( v11 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
  else
    v8 = 0LL;
  v10 = *a3;
  sub_180049670(a1, a2, &v10, v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
