/*
 * XREFs of sub_18002384C @ 0x18002384C
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 * Callees:
 *     ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x18002C704 (-data@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002384C(__int64 **a1, __int64 a2, int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _BYTE v22[8]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-60h]

  v23 = a6;
  result = (*(__int64 (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( (_BYTE)result )
  {
    v11 = std::string::data(a6);
    v12 = a1[2];
    v13 = *a1;
    v14 = *v13;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v12 + 8))(v12, v22);
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64, __int64, int))(v14 + 40))(
               v13,
               a5,
               *v15,
               v11,
               a4,
               a2,
               a3);
  }
  v16 = a6[3];
  if ( v16 >= 0x10 )
  {
    v17 = v16 + 1;
    v18 = *a6;
    if ( v17 >= 0x1000 )
    {
      v19 = v17 + 39;
      v20 = *(_QWORD *)(v18 - 8);
      v21 = v18 - v20;
      if ( (unsigned __int64)(v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v19);
        JUMPOUT(0x180023959LL);
      }
      v18 = v20;
    }
    result = j_j__o_free(v18);
  }
  a6[2] = 0LL;
  a6[3] = 15LL;
  *(_BYTE *)a6 = 0;
  return result;
}
