/*
 * XREFs of sub_18006FB4C @ 0x18006FB4C
 * Callers:
 *     sub_18006F4B0 @ 0x18006F4B0 (sub_18006F4B0.c)
 *     sub_18006FA04 @ 0x18006FA04 (sub_18006FA04.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006FB4C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      unknown_libname_207(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
