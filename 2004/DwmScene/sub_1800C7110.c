/*
 * XREFs of sub_1800C7110 @ 0x1800C7110
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18008CFC4 @ 0x18008CFC4 (sub_18008CFC4.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 *     sub_1800F3738 @ 0x1800F3738 (sub_1800F3738.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_18003D61C @ 0x18003D61C (sub_18003D61C.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_18008BF00 @ 0x18008BF00 (sub_18008BF00.c)
 *     sub_18009B9E0 @ 0x18009B9E0 (sub_18009B9E0.c)
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800C7110(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r12
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // rcx
  int v14; // eax
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  signed __int32 v20; // eax
  volatile signed __int32 *v21; // rbx
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  volatile signed __int32 *v27; // rbx
  __int128 v28; // [rsp+20h] [rbp-69h] BYREF
  __int128 v29; // [rsp+30h] [rbp-59h]
  _BYTE v30[8]; // [rsp+40h] [rbp-49h] BYREF
  volatile signed __int32 *v31; // [rsp+48h] [rbp-41h]
  _BYTE pExceptionObject[24]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v33; // [rsp+68h] [rbp-21h] BYREF
  __int128 v34; // [rsp+78h] [rbp-11h] BYREF
  __int64 v35; // [rsp+88h] [rbp-1h]
  __int128 v36; // [rsp+90h] [rbp+7h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+17h]

  v6 = a1 + 14;
  v7 = a1[14];
  if ( v7 )
  {
    result = sub_18008BF00(v7, a2);
    if ( result )
      return result;
    v9 = sub_180062680((__int64)a1);
    v34 = 0LL;
    v35 = 0LL;
    sub_180078958(v9, &v34);
    v10 = 0;
    v11 = v34;
    if ( (__int64)(*((_QWORD *)&v34 + 1) - v34) >> 4 )
    {
      v12 = 0LL;
      do
      {
        v29 = 0LL;
        *(_QWORD *)&v13 = 2 * v12;
        *((_QWORD *)&v13 + 1) = *(_QWORD *)(v11 + 8 * v13 + 8);
        if ( *((_QWORD *)&v13 + 1) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
          *((_QWORD *)&v13 + 1) = *(_QWORD *)(v11 + 8 * v13 + 8);
        }
        *(_QWORD *)&v13 = *(_QWORD *)(v11 + 8 * v13);
        v29 = v13;
        v14 = sub_18006AB3C(v13);
        sub_18009B9E0((__int64)a1, v14);
        if ( *((_QWORD *)&v13 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
          }
        }
        ++v10;
        v11 = v34;
        v12 = v10;
      }
      while ( v10 < (unsigned __int64)((__int64)(*((_QWORD *)&v34 + 1) - v34) >> 4) );
    }
    sub_180012938((__int64 *)&v34);
  }
  else
  {
    v15 = (__int64 *)sub_18003D61C((__int64)v30);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, v15);
    v16 = v31;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v17 = *v6;
  *(_OWORD *)v17 = *(_OWORD *)a2;
  *(_OWORD *)(v17 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v17 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v17 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(v17 + 64) = *(_QWORD *)(a2 + 64);
  if ( a3 )
    sub_18006294C((__int64)a1, 1, 1);
  result = sub_1800626B8((__int64)a1, 1);
  if ( result )
  {
    v18 = sub_180062680((__int64)a1);
    if ( a3 )
    {
      v28 = 0LL;
      v19 = *(_QWORD *)(a3 + 16);
      if ( !v19 )
      {
LABEL_42:
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      do
      {
        v20 = *(_DWORD *)(v19 + 8);
        if ( !v20 )
          goto LABEL_42;
      }
      while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20) );
      v28 = *(_OWORD *)(a3 + 8);
      sub_1800C6F90(a1, (__int64 *)&v28);
      v21 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
      if ( *((_QWORD *)&v28 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
      sub_18006294C((__int64)a1, 2, 0);
      return sub_18006294C((__int64)a1, 4, 0);
    }
    else
    {
      v36 = 0LL;
      v37 = 0LL;
      sub_180078958(v18, &v36);
      v22 = 0;
      v23 = v36;
      if ( (__int64)(*((_QWORD *)&v36 + 1) - v36) >> 4 )
      {
        v24 = 0LL;
        do
        {
          v25 = 2 * v24;
          v33 = 0LL;
          v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
          if ( v26 )
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v33 = *(_OWORD *)(v23 + 8 * v25);
          sub_1800C6F90(a1, (__int64 *)&v33);
          v27 = (volatile signed __int32 *)*((_QWORD *)&v33 + 1);
          if ( *((_QWORD *)&v33 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            }
          }
          ++v22;
          v23 = v36;
          v24 = v22;
        }
        while ( v22 < (unsigned __int64)((__int64)(*((_QWORD *)&v36 + 1) - v36) >> 4) );
      }
      return sub_180012938((__int64 *)&v36);
    }
  }
  return result;
}
