/*
 * XREFs of sub_18001AF60 @ 0x18001AF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_1800183D4 @ 0x1800183D4 (sub_1800183D4.c)
 *     sub_180018414 @ 0x180018414 (sub_180018414.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180079834 @ 0x180079834 (sub_180079834.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001AF60(__int64 a1, __int64 *a2)
{
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+18h]

  v13 = 0LL;
  sub_180079834(*(_QWORD *)(a1 + 56), &v13);
  v14 = 0LL;
  sub_180066E84(v13 + 16, &v14);
  v12 = 0LL;
  v4 = sub_1800183D4(&v12, (__int64)&v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = v12;
    v7 = *(_BYTE **)(a1 + 120);
    if ( *(_BYTE **)(a1 + 128) == v7 )
    {
      sub_180018414((const void **)(a1 + 112), v7, &v11);
    }
    else
    {
      *(_QWORD *)v7 = v12;
      *(_QWORD *)(a1 + 120) += 8LL;
    }
    v8 = v12;
    v6 = 0LL;
    v12 = 0LL;
    *a2 = v8;
    v5 = 0;
  }
  else
  {
    sub_18000DD78(retaddr, 301, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v12;
  }
  if ( v6 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( BYTE8(v14) )
    sub_180067304(v14);
  v9 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v5;
}
