/*
 * XREFs of sub_1800343E0 @ 0x1800343E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800312B8 @ 0x1800312B8 (sub_1800312B8.c)
 *     sub_1800329F4 @ 0x1800329F4 (sub_1800329F4.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800343E0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // rcx
  char v6; // si
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 *v10; // rcx
  char v11; // di
  __int64 v12; // rax
  char v13; // di
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  char v46; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v47; // [rsp+B8h] [rbp-48h]
  char v48; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v49; // [rsp+C8h] [rbp-38h]
  _BYTE v50[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v51; // [rsp+D8h] [rbp-28h]
  _BYTE v52[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v53; // [rsp+E8h] [rbp-18h]
  _BYTE v54[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v55; // [rsp+100h] [rbp+0h]
  unsigned int v56; // [rsp+104h] [rbp+4h]
  _BYTE v57[16]; // [rsp+120h] [rbp+20h] BYREF
  int v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+134h] [rbp+34h]

  LODWORD(v36) = 0;
  v39 = 0LL;
  if ( *a2 )
  {
    v5 = (__int64 *)sub_18009ADA4(*a2, v50, *(unsigned int *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v47 = 0LL;
    v5 = (__int64 *)&v46;
    v6 = 2;
    v7 = 0LL;
  }
  *(_QWORD *)&v39 = v7;
  *((_QWORD *)&v39 + 1) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        v8 = v47;
        (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    v9 = v51;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v38 = 0LL;
  if ( *a3 )
  {
    v10 = (__int64 *)sub_18009ADA4(*a3, v52, *(unsigned int *)(a1 + 88));
    v11 = 4;
    v12 = *v10;
  }
  else
  {
    v49 = 0LL;
    v10 = (__int64 *)&v48;
    v11 = 8;
    v12 = 0LL;
  }
  v13 = v6 | v11;
  *(_QWORD *)&v38 = v12;
  *((_QWORD *)&v38 + 1) = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v49;
        (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      }
    }
  }
  if ( (v13 & 4) != 0 )
  {
    v15 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v37 = 0LL;
  sub_1800329F4((__int64 *)&v37, &v39);
  v45 = 0LL;
  sub_1800329F4((__int64 *)&v45, &v38);
  v16 = v45;
  v17 = sub_1800312B8(v45, &v36);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 80LL))(*v17, v54);
  v18 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = sub_1800312B8(v37, &v40);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v19 + 80LL))(*v19, v57);
  v20 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v59 == 1 && v56 > 1 )
  {
    v21 = v55;
    if ( v55 == 39 )
      v21 = v58;
    v22 = *(_QWORD *)(a1 + 144);
    v23 = sub_1800312B8(v16, &v42);
    v24 = sub_1800312B8(v37, &v41);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int))(*(_QWORD *)v22 + 456LL))(
               v22,
               *v24,
               0LL,
               *v23,
               0,
               v21);
    v26 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v42;
    if ( v42 )
    {
      v42 = 0LL;
LABEL_43:
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 144);
    v29 = sub_1800312B8(v16, &v44);
    v30 = sub_1800312B8(v37, &v43);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 376LL))(v28, *v30, *v29);
    v31 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v27 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      goto LABEL_43;
    }
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( *((_QWORD *)&v37 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v33 = *((_QWORD *)&v37 + 1);
      (***((void (__fastcall ****)(_QWORD))&v37 + 1))(*((_QWORD *)&v37 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 8LL))(*((_QWORD *)&v37 + 1));
    }
  }
  if ( *((_QWORD *)&v38 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v34 = *((_QWORD *)&v38 + 1);
      (***((void (__fastcall ****)(_QWORD))&v38 + 1))(*((_QWORD *)&v38 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v38 + 1) + 8LL))(*((_QWORD *)&v38 + 1));
    }
  }
  if ( *((_QWORD *)&v39 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v35 = *((_QWORD *)&v39 + 1);
      (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
    }
  }
  return result;
}
