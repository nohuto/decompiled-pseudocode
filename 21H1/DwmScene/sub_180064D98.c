/*
 * XREFs of sub_180064D98 @ 0x180064D98
 * Callers:
 *     sub_1800642C4 @ 0x1800642C4 (sub_1800642C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180064D98(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 56) = 0LL;
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(i + 56);
    if ( v6 )
      *(_QWORD *)(a3 + 56) = (**v6)(v6, a3);
    a3 += 64LL;
  }
  return a3;
}
