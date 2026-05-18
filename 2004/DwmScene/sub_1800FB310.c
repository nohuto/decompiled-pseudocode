/*
 * XREFs of sub_1800FB310 @ 0x1800FB310
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001119C @ 0x18001119C (sub_18001119C.c)
 *     sub_180011200 @ 0x180011200 (sub_180011200.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800A1348 @ 0x1800A1348 (sub_1800A1348.c)
 *     sub_1800A138C @ 0x1800A138C (sub_1800A138C.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800AC5F0 @ 0x1800AC5F0 (sub_1800AC5F0.c)
 *     sub_1800AC6CC @ 0x1800AC6CC (sub_1800AC6CC.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     sub_1800F9D6C @ 0x1800F9D6C (sub_1800F9D6C.c)
 *     sub_1800FA514 @ 0x1800FA514 (sub_1800FA514.c)
 *     sub_1800FA548 @ 0x1800FA548 (sub_1800FA548.c)
 *     sub_1800FA6D8 @ 0x1800FA6D8 (sub_1800FA6D8.c)
 *     sub_1800FA70C @ 0x1800FA70C (sub_1800FA70C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800FB310(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  unsigned __int128 v10; // kr00_16
  signed __int32 v11; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rax
  volatile signed __int32 *v17; // rbx
  _QWORD *v18; // rax
  volatile signed __int32 *v19; // rbx
  _QWORD *v20; // rax
  volatile signed __int32 *v21; // rbx
  _QWORD *v22; // rax
  __int64 result; // rax
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rbx
  __int128 v26; // [rsp+20h] [rbp-79h]
  __int128 v27; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+40h] [rbp-59h] BYREF
  __int128 v29; // [rsp+50h] [rbp-49h] BYREF
  __int128 v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-29h]
  __int64 v32; // [rsp+78h] [rbp-21h] BYREF
  volatile signed __int32 *v33; // [rsp+80h] [rbp-19h]
  __int64 v34; // [rsp+88h] [rbp-11h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp-9h]
  __int64 v36; // [rsp+98h] [rbp-1h] BYREF
  volatile signed __int32 *v37; // [rsp+A0h] [rbp+7h]
  __int64 v38; // [rsp+A8h] [rbp+Fh] BYREF
  volatile signed __int32 *v39; // [rsp+B0h] [rbp+17h]
  __int64 *v40; // [rsp+100h] [rbp+67h] BYREF
  _QWORD *v41; // [rsp+110h] [rbp+77h]
  __int64 *v42; // [rsp+118h] [rbp+7Fh]

  v41 = a3;
  v5 = sub_1800EB244(a1);
  v6 = sub_1800759E4(v5);
  v29 = 0LL;
  sub_1800A1348(v6, a1 + 1768, &v29);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
  if ( *((_QWORD *)&v29 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v30 = 0LL;
  sub_1800A1348(v6, a1 + 1848, &v30);
  v8 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v27 = 0LL;
  v26 = 0LL;
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v11 + 1, v11) )
      {
        v12 = *(_QWORD *)(a1 + 64);
        *((_QWORD *)&v26 + 1) = v12;
        v10 = __PAIR128__(v12, *(_QWORD *)(a1 + 56));
        goto LABEL_11;
      }
    }
  }
  v10 = 0LL;
LABEL_11:
  sub_1800839A4(v10);
  v40 = 0LL;
  v42 = *(__int64 **)(v10 + 384);
  v31 = *(__int64 **)(v10 + 376);
  sub_180011200(&v40, v31, v42, 0);
  if ( v40 == *(__int64 **)(v10 + 384) )
    v27 = 0LL;
  else
    sub_18001119C((__int64 *)&v27, v40);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  v13 = v27;
  if ( *(_BYTE *)(v27 + 124) && *(float *)(v27 + 104) > 0.0 )
  {
    sub_1800F9D6C(a1);
    v14 = *(_DWORD *)(a1 + 316);
    if ( *(_DWORD *)(a1 + 1960) || !*(_DWORD *)(a1 + 1944) )
    {
      if ( *(_DWORD *)(v13 + 120) == 2 )
      {
        if ( v14 != 3 )
        {
          *(_DWORD *)(a1 + 316) = 3;
LABEL_38:
          sub_1800AC5F0(a1, 2);
        }
      }
      else if ( v14 != 1 )
      {
        *(_DWORD *)(a1 + 316) = 1;
        goto LABEL_38;
      }
      *(_DWORD *)(a1 + 412) = 3;
      *(_DWORD *)(a1 + 312) = 1065353216;
LABEL_40:
      v15 = *(_DWORD *)(a1 + 1940) - 1;
      *(_QWORD *)&v28 = 0x100000001LL;
      DWORD2(v28) = v15;
      HIDWORD(v28) = v15;
      sub_1800AC6CC(a1, &v28);
      sub_1800AAAB0(a1, a2, v41);
      v16 = sub_1800FA70C(a1, &v32);
      sub_1800A1348(v6, a1 + 1768, v16);
      v17 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
      v18 = sub_1800FA548(a1, &v34);
      sub_1800A1348(v6, a1 + 1848, v18);
      v19 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v13 + 120) == 2 )
    {
      if ( v14 != 4 )
      {
        *(_DWORD *)(a1 + 316) = 4;
LABEL_34:
        sub_1800AC5F0(a1, 2);
      }
    }
    else if ( v14 != 2 )
    {
      *(_DWORD *)(a1 + 316) = 2;
      goto LABEL_34;
    }
    *(_DWORD *)(a1 + 412) = 6;
    *(_DWORD *)(a1 + 312) = 0;
    goto LABEL_40;
  }
LABEL_48:
  v20 = sub_1800FA6D8(a1, &v36);
  sub_1800A138C(v6, a1 + 1768, v20);
  v21 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  v22 = sub_1800FA514(a1, &v38);
  result = sub_1800A138C(v6, a1 + 1848, v22);
  v24 = v39;
  if ( v39 )
  {
    result = (unsigned int)_InterlockedDecrement(v39 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      result = (unsigned int)_InterlockedDecrement(v24 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  if ( *((_QWORD *)&v27 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v25 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  return result;
}
