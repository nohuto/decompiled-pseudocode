/*
 * XREFs of sub_1800ABF34 @ 0x1800ABF34
 * Callers:
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 * Callees:
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_1800A1330 @ 0x1800A1330 (sub_1800A1330.c)
 *     sub_1800A1348 @ 0x1800A1348 (sub_1800A1348.c)
 *     sub_1800A138C @ 0x1800A138C (sub_1800A138C.c)
 *     sub_1800AA10C @ 0x1800AA10C (sub_1800AA10C.c)
 *     sub_1800ACC8C @ 0x1800ACC8C (sub_1800ACC8C.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800ABF34(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r14
  char v6; // r13
  char v7; // al
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  volatile signed __int32 *v16; // rdi
  _BYTE v18[64]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v23[4]; // [rsp+F0h] [rbp-10h] BYREF

  if ( *(_DWORD *)(a1 + 172) )
  {
    v4 = *(volatile signed __int32 **)(a1 + 160);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(a1 + 160);
    }
    v5 = *(_QWORD *)(a1 + 152);
    v22 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 48LL))(v5, &v22);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 72LL))(
           v5,
           a2,
           *(unsigned int *)(a1 + 172));
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2, 3LL);
    v8 = v7;
    if ( v6 || v7 )
    {
      v9 = sub_1800EB244(a1);
      v10 = sub_1800759E4(v9);
      if ( *(_QWORD *)(a1 + 200) && v6 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v5 + 56LL))(
          v5,
          &v20,
          *(unsigned int *)(a1 + 172));
        v19 = 0LL;
        (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v5 + 64LL))(
          v5,
          &v19,
          *(unsigned int *)(a1 + 172));
        sub_1800A1348(v10, a1 + 184, &v20);
        sub_1800A138C(v10, a1 + 184, &v19);
        v11 = (volatile signed __int32 *)*((_QWORD *)&v19 + 1);
        if ( *((_QWORD *)&v19 + 1) )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL)) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( !_InterlockedDecrement(v11 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        v12 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
        if ( *((_QWORD *)&v20 + 1) )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL)) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
            if ( !_InterlockedDecrement(v12 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          }
        }
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        if ( v8 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v5 + 56LL))(v5, &v21, 3LL);
          sub_1800A1348(v10, a1 + 216, &v21);
          v13 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
          if ( *((_QWORD *)&v21 + 1) )
          {
            if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL)) )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
              if ( !_InterlockedDecrement(v13 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            }
          }
        }
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        v14 = (_OWORD *)sub_1800AA10C(a1, 2, 0);
        v23[0] = *v14;
        v23[1] = v14[1];
        v23[2] = v14[2];
        v23[3] = v14[3];
        v15 = (_OWORD *)sub_1800ACC8C(v23, v18);
        sub_18007E3E4(v23, v15);
        sub_1800A1330(v10);
      }
    }
    v16 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    if ( v4 )
    {
      if ( !_InterlockedDecrement(v4 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  return 1;
}
