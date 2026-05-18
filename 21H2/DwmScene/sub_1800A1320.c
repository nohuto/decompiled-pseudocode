/*
 * XREFs of sub_1800A1320 @ 0x1800A1320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A1320(__int64 a1, __int64 a2)
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

  v4 = sub_180067F50(a1);
  v17 = 0LL;
  v18 = 0LL;
  sub_18007E228(v4, &v17);
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
      v16 = sub_18007040C(*(_QWORD *)(v6 + 8 * v9));
      sub_1800A0910(v8, (__int64)&v15, &v16);
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
  return sub_180012A18((__int64 *)&v17);
}
