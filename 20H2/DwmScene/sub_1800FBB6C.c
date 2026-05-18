/*
 * XREFs of sub_1800FBB6C @ 0x1800FBB6C
 * Callers:
 *     sub_1800B78C8 @ 0x1800B78C8 (sub_1800B78C8.c)
 *     sub_1800FBAB8 @ 0x1800FBAB8 (sub_1800FBAB8.c)
 * Callees:
 *     sub_1800EAE04 @ 0x1800EAE04 (sub_1800EAE04.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FBB6C(__int64 a1, _QWORD *a2)
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
  sub_1800EAE04(a1, (__int64)v7, a2);
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
  *(_OWORD *)(a1 + 152) = xmmword_18020D590;
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
