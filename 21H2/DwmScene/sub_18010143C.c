/*
 * XREFs of sub_18010143C @ 0x18010143C
 * Callers:
 *     sub_1800BD198 @ 0x1800BD198 (sub_1800BD198.c)
 *     sub_180101388 @ 0x180101388 (sub_180101388.c)
 * Callees:
 *     sub_1800F06D4 @ 0x1800F06D4 (sub_1800F06D4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010143C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD *v9; // [rsp+40h] [rbp-18h]

  v9 = a2;
  v8 = 15LL;
  v7[2] = 5LL;
  strcpy((char *)v7, "Aimer");
  sub_1800F06D4(a1, (__int64)v7, a2);
  if ( v8 >= 0x10 )
  {
    v4 = v7[0];
    if ( v8 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v7[0] - 8LL);
      if ( (unsigned __int64)(v7[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180214600;
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
