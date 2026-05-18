/*
 * XREFs of sub_1800158E0 @ 0x1800158E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800158E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v9 = 0LL;
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( !v5 )
          break;
        if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
        {
          v9 = *(_OWORD *)(v3 + 72);
          break;
        }
      }
    }
    v10 = 0LL;
    sub_180066E84(v9 + 16, &v10);
    v8 = 0LL;
    v6 = *(_QWORD *)(a2 + 40);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)&v8 = *(_QWORD *)(a2 + 32);
    *((_QWORD *)&v8 + 1) = v6;
    sub_18008DF3C(v9, &v8);
    if ( BYTE8(v10) )
      sub_180067304(v10);
    if ( *((_QWORD *)&v9 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v7 = *((_QWORD *)&v9 + 1);
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
}
