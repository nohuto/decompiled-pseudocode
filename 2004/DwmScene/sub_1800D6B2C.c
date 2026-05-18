/*
 * XREFs of sub_1800D6B2C @ 0x1800D6B2C
 * Callers:
 *     sub_1800D6CAC @ 0x1800D6CAC (sub_1800D6CAC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800D52B4 @ 0x1800D52B4 (sub_1800D52B4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800D6B2C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  _QWORD *v9; // r15
  _QWORD *i; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  _BYTE v15[8]; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-21h]
  __int128 v17; // [rsp+58h] [rbp-19h] BYREF
  __int64 v18; // [rsp+68h] [rbp-9h]

  v17 = 0LL;
  v18 = 0LL;
  sub_1800D52B4(&v17, a1 + 40, 1);
  *(_OWORD *)a2 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = a5[1];
  if ( v8 )
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  *a2 = *a5;
  a2[1] = a5[1];
  v9 = (_QWORD *)*((_QWORD *)&v17 + 1);
  for ( i = (_QWORD *)v17; i != v9; i += 2 )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*i + 16LL))(
                       *i,
                       v15,
                       a3,
                       a4,
                       a2);
    std::shared_ptr<__ExceptionPtr>::operator=(a2, v11);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  sub_180012938((__int64 *)&v17);
  v13 = (volatile signed __int32 *)a5[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return a2;
}
