/*
 * XREFs of sub_180034350 @ 0x180034350
 * Callers:
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 * Callees:
 *     sub_1800343B0 @ 0x1800343B0 (sub_1800343B0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034350(__int64 a1, __int64 *a2, unsigned int a3)
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
  result = sub_1800343B0(a1, &v7, v6, a3);
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
