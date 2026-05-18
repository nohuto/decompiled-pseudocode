/*
 * XREFs of sub_180070500 @ 0x180070500
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006E3F0 @ 0x18006E3F0 (sub_18006E3F0.c)
 *     sub_18006EEE0 @ 0x18006EEE0 (sub_18006EEE0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180070500(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v15 = a3;
  v5 = a1 + 8;
  v13 = a1 + 8;
  sub_180067278(a1 + 8);
  sub_18006EEE0((__int64 **)(a1 + 24), (__int64)&v14, &v15);
  v6 = v14;
  v7 = *(_QWORD *)(v14 + 48);
  if ( *(_QWORD *)(v14 + 40) == v7 )
  {
    v16 = 0LL;
    sub_18006E3F0(*(_QWORD *)(a1 + 16), (__int64 *)&v16);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(
           v16,
           *(_QWORD *)(a1 + 16),
           v15) )
    {
      *(_OWORD *)a2 = v16;
      v16 = 0uLL;
      sub_180067304(v5);
    }
    else
    {
      v8 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
      if ( *((_QWORD *)&v16 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
        v5 = v13;
      }
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      sub_180067304(v5);
    }
  }
  else
  {
    v9 = (__int64 *)(v7 - 16);
    v10 = *(_QWORD *)(v7 - 16 + 8);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = v9[1];
      v7 = *(_QWORD *)(v6 + 48);
      v5 = v13;
    }
    v11 = *v9;
    unknown_libname_102(v7 - 16, 0);
    *(_QWORD *)(v6 + 48) -= 16LL;
    *(_QWORD *)a2 = v11;
    *(_QWORD *)(a2 + 8) = v10;
    sub_180067304(v5);
  }
  return a2;
}
