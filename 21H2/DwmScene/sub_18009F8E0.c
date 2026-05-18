/*
 * XREFs of sub_18009F8E0 @ 0x18009F8E0
 * Callers:
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 * Callees:
 *     sub_1800A027C @ 0x1800A027C (sub_1800A027C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F8E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  v4 = sub_1800A027C(v9, a2, 0LL, 0LL);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, v4);
  v6 = v10;
  if ( v10 )
  {
    v7 = (v11 - v10) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v7 >= 0x1000 )
    {
      v8 = v7 + 39;
      v6 = *(_QWORD *)(v10 - 8);
      if ( (unsigned __int64)(v10 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v8);
        __debugbreak();
      }
    }
    return j_j__o_free(v6);
  }
  return result;
}
