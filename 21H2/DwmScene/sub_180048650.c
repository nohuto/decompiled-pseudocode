/*
 * XREFs of sub_180048650 @ 0x180048650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180048F10 @ 0x180048F10 (sub_180048F10.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180048650(__int64 a1, __int64 a2, int a3)
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
  v6 = *sub_180029F64(a2, &v11);
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
  sub_18002BE74(a2, v8);
  if ( v8 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_180048F10(a1);
  return 1;
}
