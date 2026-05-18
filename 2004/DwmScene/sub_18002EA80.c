/*
 * XREFs of sub_18002EA80 @ 0x18002EA80
 * Callers:
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 * Callees:
 *     sub_18002EAE0 @ 0x18002EAE0 (sub_18002EAE0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002EA80(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6[0] = 0LL;
  v7 = 0LL;
  if ( &v7 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
  }
  result = sub_18002EAE0(a1, &v7, v6, a3);
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
