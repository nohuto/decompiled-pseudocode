/*
 * XREFs of sub_18008DF3C @ 0x18008DF3C
 * Callers:
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 *     sub_1800158E0 @ 0x1800158E0 (sub_1800158E0.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 *     sub_18008CF70 @ 0x18008CF70 (sub_18008CF70.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008DF3C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r12
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *i; // rax
  __int64 result; // rax
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int128 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-88h]
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v25[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v28[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v29[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v30[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v31[8]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1C0h] [rbp+C0h] BYREF

  v21 = a2;
  if ( !*a2 )
  {
    sub_18000FE28(v25);
    v16 = sub_18000FE28(v24);
    sub_18002D8C4(v30, v16, 391, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v30;
  }
  v18 = 0LL;
  v19 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v19 = *a2;
  *((_QWORD *)&v19 + 1) = v4;
  sub_18008CF70(a1, &v18, (__int64 *)&v19);
  v5 = v18;
  if ( !(_QWORD)v18 )
  {
    sub_18000FE28(v27);
    v17 = sub_18000FE28(v26);
    sub_18002D8C4(v31, v17, 397, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v31;
  }
  v6 = sub_18008D440(v18, &v22);
  v8 = *a2;
  v9 = *v6;
  v10 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v5 = v18;
  }
  if ( v8 == v9 )
  {
    sub_18000FE28(v29);
    v15 = sub_18000FE28(v28);
    sub_18002D8C4(pExceptionObject, v15, 402, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18006714C(a1 + 16, v7);
  for ( i = (volatile signed __int32 *)(v5 + 76); _interlockedbittestandset(i, 0); i = (volatile signed __int32 *)(v5 + 76) )
    ;
  v20 = 0LL;
  sub_180087AC4(*a2, (__int64 *)&v20);
  result = v5 + 76;
  *(_DWORD *)(v5 + 76) = 0;
  if ( *((_QWORD *)&v18 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v13 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
