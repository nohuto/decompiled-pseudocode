/*
 * XREFs of sub_1800A07A4 @ 0x1800A07A4
 * Callers:
 *     sub_1800F26D0 @ 0x1800F26D0 (sub_1800F26D0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18009BD94 @ 0x18009BD94 (sub_18009BD94.c)
 *     sub_18009BEA4 @ 0x18009BEA4 (sub_18009BEA4.c)
 *     sub_18009BFB4 @ 0x18009BFB4 (sub_18009BFB4.c)
 *     sub_18009C0C4 @ 0x18009C0C4 (sub_18009C0C4.c)
 *     sub_18009C1D4 @ 0x18009C1D4 (sub_18009C1D4.c)
 *     sub_18009E270 @ 0x18009E270 (sub_18009E270.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     sub_1800C945C @ 0x1800C945C (sub_1800C945C.c)
 *     sub_1800C97B8 @ 0x1800C97B8 (sub_1800C97B8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800A07A4(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // r12
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r8
  __int64 **v11; // r13
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 *v14; // rdx
  __int64 *v15; // rax
  unsigned __int64 *v16; // rcx
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *result; // rax
  __int128 v29; // [rsp+20h] [rbp-69h] BYREF
  __int64 v30; // [rsp+30h] [rbp-59h] BYREF
  __int64 v31; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v32[2]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v33; // [rsp+58h] [rbp-31h] BYREF
  __int128 v34; // [rsp+68h] [rbp-21h] BYREF
  __int128 v35; // [rsp+78h] [rbp-11h] BYREF
  __int128 v36; // [rsp+88h] [rbp-1h] BYREF
  __int128 v37; // [rsp+98h] [rbp+Fh] BYREF

  v32[0] = (unsigned __int64)a2;
  v32[1] = (unsigned __int64)a3;
  v30 = 0LL;
  v6 = (_QWORD *)(a1 + 18576);
  sub_1800A1C7C(a1 + 18576, &v30, a3);
  if ( v30 == *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_58;
  }
  v7 = v30 + 64;
  v29 = 0LL;
  v8 = (_QWORD *)(v30 + 88);
  if ( *(_QWORD *)(v30 + 88) )
    std::shared_ptr<__ExceptionPtr>::operator=(&v29, (_QWORD *)(v30 + 88));
  v9 = *(unsigned __int64 **)v7;
  if ( *(_QWORD *)v7 )
  {
    v10 = *v9;
    if ( *v9 == v9[1] )
      v10 = v9[3];
  }
  else
  {
    v10 = 0LL;
  }
  v32[0] = v10;
  v11 = (__int64 **)(a1 + 18608);
  if ( (_QWORD)v29 )
    goto LABEL_55;
  if ( !*(_BYTE *)(a1 + 18624) )
    goto LABEL_26;
  v12 = *(unsigned __int64 **)v7;
  if ( *(_QWORD *)v7 )
  {
    v13 = v12[1];
    if ( *v12 != v13 || *((_DWORD *)v12 + 8) == *((_DWORD *)v12 + 6) || *v12 != v13 || !v12[3] )
      goto LABEL_26;
    v14 = *v11;
    v15 = (__int64 *)(*v11)[1];
    if ( *((_BYTE *)v15 + 25) )
      goto LABEL_23;
    do
    {
      if ( v15[4] >= v10 )
      {
        v14 = v15;
        v15 = (__int64 *)*v15;
      }
      else
      {
        v15 = (__int64 *)v15[2];
      }
    }
    while ( !*((_BYTE *)v15 + 25) );
    if ( v14 == *v11 || v10 < v14[4] )
LABEL_23:
      v14 = *v11;
    if ( v14 == *v11 || (std::shared_ptr<__ExceptionPtr>::operator=(&v29, v14 + 5), !(_QWORD)v29) )
    {
LABEL_26:
      v16 = *(unsigned __int64 **)v7;
      if ( !*(_QWORD *)v7 || *v16 == v16[1] && *((_DWORD *)v16 + 8) == *((_DWORD *)v16 + 6) )
        goto LABEL_57;
      if ( *(_DWORD *)(v7 + 16) == 1 )
      {
        v33 = 0LL;
        sub_18009C1D4(*(_QWORD **)(a1 + 18688), (__int64 *)&v33, 1);
        sub_1800C97B8(v33, a3);
        sub_1800C945C(v33, v7);
        std::shared_ptr<__ExceptionPtr>::operator=(&v29, &v33);
        v17 = (volatile signed __int32 *)*((_QWORD *)&v33 + 1);
        if ( *((_QWORD *)&v33 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
      }
      if ( *(_DWORD *)(v7 + 16) == 5 )
      {
        v34 = 0LL;
        sub_18009C0C4(*(_QWORD **)(a1 + 18688), (__int64 *)&v34, 1);
        sub_1800C97B8(v34, a3);
        sub_1800C945C(v34, v7);
        std::shared_ptr<__ExceptionPtr>::operator=(&v29, &v34);
        v18 = (volatile signed __int32 *)*((_QWORD *)&v34 + 1);
        if ( *((_QWORD *)&v34 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
      }
      if ( *(_DWORD *)(v7 + 16) == 4 )
      {
        v35 = 0LL;
        sub_18009BEA4(*(_QWORD **)(a1 + 18688), (__int64 *)&v35, 1);
        sub_1800C97B8(v35, a3);
        sub_1800C945C(v35, v7);
        std::shared_ptr<__ExceptionPtr>::operator=(&v29, &v35);
        v19 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
        if ( *((_QWORD *)&v35 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
      }
      if ( *(_DWORD *)(v7 + 16) == 3 )
      {
        v36 = 0LL;
        sub_18009BD94(*(_QWORD **)(a1 + 18688), (__int64 *)&v36, 1);
        sub_1800C97B8(v36, a3);
        sub_1800C945C(v36, v7);
        std::shared_ptr<__ExceptionPtr>::operator=(&v29, &v36);
        v20 = (volatile signed __int32 *)*((_QWORD *)&v36 + 1);
        if ( *((_QWORD *)&v36 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          }
        }
      }
      if ( *(_DWORD *)(v7 + 16) == 2 )
      {
        v37 = 0LL;
        sub_18009BFB4(*(_QWORD **)(a1 + 18688), (__int64 *)&v37, 1);
        sub_1800C97B8(v37, a3);
        sub_1800C945C(v37, v7);
        std::shared_ptr<__ExceptionPtr>::operator=(&v29, &v37);
        v21 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
        if ( *((_QWORD *)&v37 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          }
        }
      }
      if ( !(_QWORD)v29 )
        goto LABEL_57;
    }
LABEL_55:
    std::shared_ptr<__ExceptionPtr>::operator=(v8, &v29);
    if ( *(_BYTE *)(a1 + 18624) )
    {
      sub_18009E270((__int64 **)(a1 + 18608), (__int64)&v31, v32);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v31 + 40), &v29);
    }
  }
LABEL_57:
  *(_OWORD *)a2 = v29;
LABEL_58:
  v22 = a3[3];
  if ( v22 >= 0x10 )
  {
    v23 = v22 + 1;
    v24 = *a3;
    if ( v23 >= 0x1000 )
    {
      v25 = v23 + 39;
      v26 = *(_QWORD *)(v24 - 8);
      v27 = v24 - v26;
      if ( (unsigned __int64)(v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, v25);
        JUMPOUT(0x1800A0C99LL);
      }
      v24 = v26;
    }
    j_j__o_free(v24);
  }
  result = a2;
  *(_BYTE *)a3 = 0;
  a3[3] = 15LL;
  a3[2] = 0LL;
  return result;
}
