/*
 * XREFs of sub_180037F80 @ 0x180037F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD5CC @ 0x1800CD5CC (sub_1800CD5CC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_180037F80(__int64 a1, _QWORD *a2, unsigned int a3, int a4, ...)
{
  __int64 *v6; // rcx
  char v7; // di
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-31h]
  volatile signed __int32 *v15; // [rsp+48h] [rbp-29h]
  __int64 v16; // [rsp+50h] [rbp-21h]
  char v17; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-11h]
  _BYTE v19[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h] BYREF
  int v22; // [rsp+80h] [rbp+Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v22 = a4;
  LODWORD(v16) = 0;
  if ( *a2 )
  {
    v6 = (__int64 *)sub_1800CD5CC(*a2, v19, *(unsigned int *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v18 = 0LL;
    v6 = (__int64 *)&v17;
    v7 = 2;
    v8 = 0LL;
  }
  v14 = v8;
  v15 = (volatile signed __int32 *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v9 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    v10 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( v14 )
  {
    v11 = *(_QWORD *)(v14 + 104);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v7 |= 0xCu;
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
    v11 = v16;
  }
  v21 = v12;
  if ( (v7 & 4) != 0 && v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, char *, int *))(**(_QWORD **)(a1 + 144) + 144LL))(
             *(_QWORD *)(a1 + 144),
             a3,
             1LL,
             &v21,
             va,
             &v22);
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
