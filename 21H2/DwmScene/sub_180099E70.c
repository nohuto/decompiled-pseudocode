/*
 * XREFs of sub_180099E70 @ 0x180099E70
 * Callers:
 *     sub_18001415C @ 0x18001415C (sub_18001415C.c)
 *     sub_180099B3C @ 0x180099B3C (sub_180099B3C.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_1800997D8 @ 0x1800997D8 (sub_1800997D8.c)
 *     sub_1800F06D4 @ 0x1800F06D4 (sub_1800F06D4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180099E70(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rbx
  _QWORD v8[3]; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  __int64 *v11; // [rsp+50h] [rbp-10h]

  v10 = a1;
  v11 = a2;
  v9 = 15LL;
  v8[2] = 13LL;
  strcpy((char *)v8, "Mesh Instance");
  sub_1800F06D4(a1, v8, a2);
  if ( v9 >= 0x10 )
  {
    v4 = v8[0];
    if ( v9 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v8[0] - 8LL);
      if ( (unsigned __int64)(v8[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v9 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_180214C78;
  v5 = *a2;
  sub_18008933C(*a2);
  *(_QWORD *)(v5 + 448) |= 8uLL;
  sub_1800997D8((_QWORD *)(a1 + 104), 1uLL);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
