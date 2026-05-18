/*
 * XREFs of sub_1800A9CEC @ 0x1800A9CEC
 * Callers:
 *     sub_1800A5A44 @ 0x1800A5A44 (sub_1800A5A44.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_18007ADCC @ 0x18007ADCC (sub_18007ADCC.c)
 *     sub_1800921F0 @ 0x1800921F0 (sub_1800921F0.c)
 *     sub_1800A5C5C @ 0x1800A5C5C (sub_1800A5C5C.c)
 *     sub_1800AA734 @ 0x1800AA734 (sub_1800AA734.c)
 *     sub_1800F5040 @ 0x1800F5040 (sub_1800F5040.c)
 *     sub_1800F7EC8 @ 0x1800F7EC8 (sub_1800F7EC8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_1800A9CEC(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int128 v11; // kr00_16
  __int64 v12; // rsi
  __int64 **v13; // rax
  __int64 i; // rax
  signed __int32 v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 *j; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  _QWORD *v23; // rsi
  _QWORD *k; // rdi
  __int64 **v25; // rax
  __int64 m; // rax
  __int64 *n; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 *v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int32 *v31; // [rsp+38h] [rbp-81h]
  _QWORD v32[4]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int128 v35; // [rsp+C0h] [rbp+7h]
  __int128 v36; // [rsp+D0h] [rbp+17h] BYREF

  v36 = 0LL;
  v4 = (__int64 *)sub_1800AA734(a1, v30);
  v5 = sub_1800A5C5C(*v4);
  sub_18007ADCC(v5, (__int64 *)&v36, a2);
  v7 = v31;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_18006714C(v36 + 24, v6);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000FE28(v33);
    v29 = sub_18000FE28(v32);
    sub_18002D8C4(pExceptionObject, v29, 545, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = *(_QWORD **)(a1 + 480);
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v35 = 0LL;
    v10 = v9[5];
    if ( v10 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v10 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v15 + 1, v15) )
        {
          v16 = v9[4];
          *(_QWORD *)&v35 = v16;
          v17 = v9[5];
          *((_QWORD *)&v35 + 1) = v17;
          v11 = __PAIR128__(v17, v16);
          goto LABEL_9;
        }
      }
    }
    v11 = v35;
LABEL_9:
    if ( (_QWORD)v11 )
      sub_1800921F0(v11, a2);
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v35 + 1);
        (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 8LL))(*((_QWORD *)&v35 + 1));
      }
    }
    v13 = (__int64 **)v9[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = v9[1]; !*(_BYTE *)(i + 25) && v9 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v9 = (_QWORD *)i;
      v9 = (_QWORD *)i;
    }
    else
    {
      v9 = (_QWORD *)v9[2];
      for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v9 = j;
    }
  }
  v19 = (_QWORD *)(a1 + 256);
  v20 = 10LL;
  do
  {
    if ( *v19 )
      sub_1800F5040(*v19, a2);
    v19 += 2;
    --v20;
  }
  while ( v20 );
  v21 = *(_QWORD **)(a1 + 416);
  v22 = (_QWORD *)*v21;
  while ( v22 != v21 )
  {
    v23 = (_QWORD *)v22[5];
    for ( k = (_QWORD *)*v23; k != v23; k = (_QWORD *)*k )
      sub_1800F7EC8(k[2], a2);
    v25 = (__int64 **)v22[2];
    if ( *((_BYTE *)v25 + 25) )
    {
      for ( m = v22[1]; !*(_BYTE *)(m + 25) && v22 == *(_QWORD **)(m + 16); m = *(_QWORD *)(m + 8) )
        v22 = (_QWORD *)m;
      v22 = (_QWORD *)m;
    }
    else
    {
      v22 = (_QWORD *)v22[2];
      for ( n = *v25; !*((_BYTE *)n + 25); n = (__int64 *)*n )
        v22 = n;
    }
  }
  v28 = (volatile signed __int32 *)*((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
    if ( !_InterlockedDecrement(v28 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  }
}
