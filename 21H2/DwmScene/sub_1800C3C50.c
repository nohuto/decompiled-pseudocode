/*
 * XREFs of sub_1800C3C50 @ 0x1800C3C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180076DF8 @ 0x180076DF8 (sub_180076DF8.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_180083328 @ 0x180083328 (sub_180083328.c)
 *     sub_1800A6C18 @ 0x1800A6C18 (sub_1800A6C18.c)
 *     sub_1800A6C5C @ 0x1800A6C5C (sub_1800A6C5C.c)
 *     sub_1800BB768 @ 0x1800BB768 (sub_1800BB768.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1800BCC28 @ 0x1800BCC28 (sub_1800BCC28.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800C3C50(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-79h] BYREF
  __int128 v18; // [rsp+48h] [rbp-69h] BYREF
  __int128 v19; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v20; // [rsp+68h] [rbp-49h]
  __int128 v21; // [rsp+70h] [rbp-41h] BYREF
  __int64 v22; // [rsp+80h] [rbp-31h]
  __int128 v23; // [rsp+88h] [rbp-29h] BYREF
  __int64 v24; // [rsp+98h] [rbp-19h]
  __int128 v25; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-1h]

  result = a3[1];
  if ( *a3 != result )
  {
    v25 = 0LL;
    v26 = 0LL;
    sub_180076DF8(&v25, a3);
    sub_180083328(
      (__int64 *)v25,
      *((__int64 **)&v25 + 1),
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800C0060);
    v21 = 0LL;
    v22 = 0LL;
    sub_1800BB768(*a2, (__int64 *)&v21);
    sub_180083328(
      (__int64 *)v21,
      *((__int64 **)&v21 + 1),
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800C0060);
    v19 = 0LL;
    v20 = 0LL;
    v10 = (_QWORD *)*((_QWORD *)&v21 + 1);
    v11 = (_QWORD *)v21;
    if ( (_QWORD)v21 != *((_QWORD *)&v21 + 1) )
    {
      v9 = (_QWORD *)*((_QWORD *)&v19 + 1);
      do
      {
        if ( (*(_DWORD *)(*v11 + 440LL) & 0x200) != 0 )
        {
          if ( v20 == v9 )
          {
            sub_18001101C(&v19, v9, v11);
            v9 = (_QWORD *)*((_QWORD *)&v19 + 1);
          }
          else
          {
            *v9 = 0LL;
            v9[1] = 0LL;
            v12 = v11[1];
            if ( v12 )
              _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
            *v9 = *v11;
            v9[1] = v11[1];
            v9 = (_QWORD *)(*((_QWORD *)&v19 + 1) + 16LL);
            *((_QWORD *)&v19 + 1) += 16LL;
          }
        }
        v11 += 2;
      }
      while ( v11 != v10 );
    }
    v13 = sub_1800BB82C(*a2, (__int64)v9);
    v23 = 0LL;
    v24 = 0LL;
    sub_1800BCC28(&v23, (char *)(v13 + 136), (char *)(v13 + 184));
    v14 = sub_18007B2B4(a1);
    v17 = 0LL;
    sub_1800A6C18(v14, (__int64)&qword_1802130B8, &v17);
    v15 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v18 = 0LL;
    sub_1800A6C5C(v14, (__int64)&qword_1802130B8, &v18);
    v16 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
    if ( *((_QWORD *)&v18 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v23, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v19, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v25, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, a4, a5);
    sub_180012A18((__int64 *)&v23);
    sub_180012A18((__int64 *)&v19);
    sub_180012A18((__int64 *)&v21);
    return sub_180012A18((__int64 *)&v25);
  }
  return result;
}
