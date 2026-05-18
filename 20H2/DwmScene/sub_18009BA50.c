/*
 * XREFs of sub_18009BA50 @ 0x18009BA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_18009B040 @ 0x18009B040 (sub_18009B040.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009BA50(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]

  v4 = sub_180062680(a1);
  v17 = 0LL;
  v18 = 0LL;
  sub_180078958(v4, &v17);
  v5 = 0;
  v6 = v17;
  if ( (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 4 )
  {
    v7 = 0LL;
    v8 = (__int64 *)(a1 + 128);
    do
    {
      v9 = 2 * v7;
      v10 = *(volatile signed __int32 **)(v6 + 8 * v9 + 8);
      if ( v10 )
      {
        _InterlockedIncrement(v10 + 2);
        v10 = *(volatile signed __int32 **)(v6 + 8 * v9 + 8);
      }
      v16 = sub_18006AB3C(*(_QWORD *)(v6 + 8 * v9));
      sub_18009B040(v8, (__int64)&v15, &v16);
      v11 = v15;
      v12 = *(volatile signed __int32 **)(v15 + 48);
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = *(volatile signed __int32 **)(v11 + 48);
      }
      v13 = *(_QWORD *)(v11 + 40);
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 40LL))(v13, a2);
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      ++v5;
      v6 = v17;
      v7 = v5;
    }
    while ( v5 < (unsigned __int64)((__int64)(*((_QWORD *)&v17 + 1) - v17) >> 4) );
  }
  return sub_180012938((__int64 *)&v17);
}
