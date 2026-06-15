/*
 * XREFs of sub_18005B694 @ 0x18005B694
 * Callers:
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005B694(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx

  v4 = sub_180055F40(0x50uLL);
  v6 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = off_180146940;
    sub_18005B754(v4 + 4, a2);
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v6 + 4;
  v7 = *(std::_Ref_count_base **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v6;
  if ( v7 )
    sub_180052600(v7);
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 1;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    LOBYTE(v5) = v8 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
