/*
 * XREFs of sub_1800CB1A4 @ 0x1800CB1A4
 * Callers:
 *     sub_1800CB4FC @ 0x1800CB4FC (sub_1800CB4FC.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 *     sub_1800D8238 @ 0x1800D8238 (sub_1800D8238.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800389E8 @ 0x1800389E8 (sub_1800389E8.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 *     sub_1800CB68C @ 0x1800CB68C (sub_1800CB68C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CB1A4(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // r14
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  bool v16; // zf
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rdi
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rdi
  _BYTE v26[8]; // [rsp+60h] [rbp-89h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-81h]
  _QWORD v28[4]; // [rsp+70h] [rbp-79h] BYREF
  _QWORD v29[4]; // [rsp+90h] [rbp-59h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-39h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-9h]

  if ( a6 )
    sub_18006294C((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v11 = (__int64 *)sub_1800CB68C(v26, v10, a2, a3, a4, 0, a5);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 14, v11);
  v12 = v27;
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  LOBYTE(v13) = sub_1800626B8((__int64)a1, 1);
  if ( (_BYTE)v13 )
  {
    if ( a6 )
    {
      v30 = 0LL;
      sub_1800389E8(a6, &v30);
      v14 = sub_180062688((__int64)a1, v28);
      sub_1800628C4(v30, v14);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v30 + 40LL))(v30, a2, a3, a4, a5);
      sub_1800CAC58(a1, &v30);
      sub_18006294C((__int64)a1, 2, 0);
      LOBYTE(v13) = sub_18006294C((__int64)a1, 4, 0);
      v15 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
      if ( *((_QWORD *)&v30 + 1) )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF);
        v16 = v13 == 1;
        LOBYTE(v13) = v13 - 1;
        if ( v16 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          v13 = _InterlockedDecrement(v15 + 3);
          if ( !v13 )
            LOBYTE(v13) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    else
    {
      v32 = 0LL;
      v33 = 0LL;
      sub_180078958(v10, &v32);
      v17 = 0;
      v18 = v32;
      if ( (__int64)(*((_QWORD *)&v32 + 1) - v32) >> 4 )
      {
        v19 = 0LL;
        do
        {
          v20 = 2 * v19;
          v21 = *(volatile signed __int32 **)(v18 + 8 * v20 + 8);
          if ( v21 )
          {
            _InterlockedIncrement(v21 + 2);
            v21 = *(volatile signed __int32 **)(v18 + 8 * v20 + 8);
          }
          v22 = *(_QWORD *)(v18 + 8 * v20);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22) )
          {
            v31 = 0LL;
            sub_1800389E8(v22, &v31);
            v23 = sub_180062688((__int64)a1, v29);
            sub_1800628C4(v31, v23);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v31 + 40LL))(v31, a2, a3, a4, a5);
            sub_1800CAC58(a1, &v31);
            v24 = (volatile signed __int32 *)*((_QWORD *)&v31 + 1);
            if ( *((_QWORD *)&v31 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
                if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              }
            }
          }
          if ( v21 )
          {
            if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
              if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            }
          }
          ++v17;
          v18 = v32;
          v19 = v17;
        }
        while ( v17 < (unsigned __int64)((__int64)(*((_QWORD *)&v32 + 1) - v32) >> 4) );
      }
      LOBYTE(v13) = sub_180012938((__int64 *)&v32);
    }
  }
  return v13;
}
