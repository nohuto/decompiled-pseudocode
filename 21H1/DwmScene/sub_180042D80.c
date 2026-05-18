/*
 * XREFs of sub_180042D80 @ 0x180042D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180043640 @ 0x180043640 (sub_180043640.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180042D80(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF

  v12 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      LODWORD(v12) = 2;
    }
    else if ( a3 == 2 )
    {
      LODWORD(v12) = 4;
    }
  }
  else
  {
    LODWORD(v12) = 3;
  }
  v6 = *sub_180024694(a2, &v11);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 192LL))(v6, &v12, a1 + 96);
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_1800265A4(a2, v8);
  if ( v8 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_180043640(a1);
  return 1;
}
