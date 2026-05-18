/*
 * XREFs of sub_180036A50 @ 0x180036A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_180031248 @ 0x180031248 (sub_180031248.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180036A50(__int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  __int64 *v7; // rcx
  char v8; // di
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // rcx
  char v13; // si
  __int64 v14; // rbx
  char v15; // si
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rdi
  __int64 *v18; // rdx
  char v19; // di
  __int64 v20; // rcx
  char v21; // di
  __int64 result; // rax
  int v23; // r14d
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-79h]
  volatile signed __int32 *v28; // [rsp+38h] [rbp-71h]
  __int128 v29; // [rsp+40h] [rbp-69h]
  __int64 v30; // [rsp+50h] [rbp-59h] BYREF
  __int64 v31; // [rsp+58h] [rbp-51h] BYREF
  char v32; // [rsp+60h] [rbp-49h] BYREF
  volatile signed __int32 *v33; // [rsp+68h] [rbp-41h]
  char v34; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-31h]
  __int128 v36; // [rsp+80h] [rbp-29h] BYREF
  char v37[8]; // [rsp+98h] [rbp-11h] BYREF
  volatile signed __int32 *v38; // [rsp+A0h] [rbp-9h]
  __int64 v39; // [rsp+A8h] [rbp-1h] BYREF
  volatile signed __int32 *v40; // [rsp+B0h] [rbp+7h]
  __int64 v41; // [rsp+B8h] [rbp+Fh] BYREF

  LODWORD(v41) = 0;
  if ( *a3 )
  {
    v7 = (__int64 *)sub_18009ADA4(*a3, v37, *(unsigned int *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v33 = 0LL;
    v7 = (__int64 *)&v32;
    v8 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)&v29 = v9;
  *((_QWORD *)&v29 + 1) = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v33;
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    v11 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  if ( (_QWORD)v29 )
  {
    if ( *((_QWORD *)&v29 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
    v36 = v29;
    v12 = sub_1800186E0(&v39, (__int64 *)&v36);
    v13 = 4;
    v14 = *v12;
  }
  else
  {
    v35 = 0LL;
    v12 = (__int64 *)&v34;
    v13 = 8;
    v14 = 0LL;
  }
  v15 = v8 | v13;
  v27 = v14;
  v28 = (volatile signed __int32 *)v12[1];
  *v12 = 0LL;
  v12[1] = 0LL;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v35;
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
      v14 = v27;
    }
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    v17 = v40;
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
      v14 = v27;
    }
  }
  v41 = 0LL;
  if ( v14 )
  {
    v18 = sub_180031248((_QWORD *)v14, &v31);
    v19 = 16;
    v20 = v30;
  }
  else
  {
    v20 = 0LL;
    v30 = 0LL;
    v18 = &v30;
    v19 = 32;
  }
  v21 = v15 | v19;
  v41 = 0LL;
  result = (__int64)&v41;
  if ( &v41 != v18 )
  {
    result = *v18;
    v41 = *v18;
    *v18 = 0LL;
    v20 = v30;
  }
  if ( (v21 & 0x20) != 0 )
  {
    v21 &= ~0x20u;
    if ( v20 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( (v21 & 0x10) != 0 )
  {
    v20 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  if ( v14 && *(_BYTE *)(v14 + 208) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v41);
    *(_BYTE *)(v14 + 208) = 0;
  }
  v23 = a2 - 1;
  if ( v23 )
  {
    v24 = v23 - 3;
    if ( v24 )
    {
      if ( v24 == 1 )
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
                   *(_QWORD *)(a1 + 144),
                   a4,
                   1LL,
                   &v41);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
                 *(_QWORD *)(a1 + 144),
                 a4,
                 1LL,
                 &v41);
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
               *(_QWORD *)(a1 + 144),
               a4,
               1LL,
               &v41);
  }
  if ( v41 )
  {
    v25 = sub_1800CBBF8(v20);
    result = sub_1800CBBE0(v25, 11LL, 1LL, 1LL);
  }
  v26 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  if ( *((_QWORD *)&v29 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
    }
  }
  return result;
}
