/*
 * XREFs of sub_1800B2D04 @ 0x1800B2D04
 * Callers:
 *     sub_1800B2A3C @ 0x1800B2A3C (sub_1800B2A3C.c)
 * Callees:
 *     sub_18001BA00 @ 0x18001BA00 (sub_18001BA00.c)
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800AFCA4 @ 0x1800AFCA4 (sub_1800AFCA4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B2D04(__int64 a1)
{
  __int64 v2; // r8
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rdx
  signed __int32 v5; // eax
  _OWORD *v6; // rdx
  _OWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v9[4]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v10[4]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v11[4]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v12[4]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v13[4]; // [rsp+170h] [rbp+70h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_1800AFCA4(a1, 1) )
    return 0;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v2 = *(_QWORD *)(a1 + 56);
        v3 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  if ( v2 )
  {
    sub_180086244(v2, v12);
    sub_18001BA00(v12, (__int64)v13);
    v8[0] = v12[0];
    v8[1] = v12[1];
    v8[2] = v12[2];
    v8[3] = v12[3];
    sub_180083CB4((_OWORD *)(a1 + 804), v8);
    v9[0] = v13[0];
    v9[1] = v13[1];
    v9[2] = v13[2];
    v9[3] = v13[3];
    v6 = v9;
  }
  else
  {
    v10[0] = xmmword_180214C90;
    v10[1] = xmmword_180214CA0;
    v10[2] = xmmword_180214CB0;
    v10[3] = xmmword_180214CC0;
    sub_180083CB4((_OWORD *)(a1 + 804), v10);
    v11[0] = xmmword_180214C90;
    v11[1] = xmmword_180214CA0;
    v11[2] = xmmword_180214CB0;
    v11[3] = xmmword_180214CC0;
    v6 = v11;
  }
  sub_180083CB4((_OWORD *)(a1 + 612), v6);
  *(_DWORD *)(a1 + 544) &= ~1u;
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return 1;
}
