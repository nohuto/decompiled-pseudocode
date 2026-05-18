/*
 * XREFs of sub_1800CC9E0 @ 0x1800CC9E0
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_180092894 @ 0x180092894 (sub_180092894.c)
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 *     sub_1800F9008 @ 0x1800F9008 (sub_1800F9008.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180042EEC @ 0x180042EEC (sub_180042EEC.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800917D0 @ 0x1800917D0 (sub_1800917D0.c)
 *     sub_1800A12B0 @ 0x1800A12B0 (sub_1800A12B0.c)
 *     sub_1800CC860 @ 0x1800CC860 (sub_1800CC860.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800CC9E0(_QWORD *a1, __int64 a2, __int64 a3)
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
    result = sub_1800917D0(v7, a2);
    if ( result )
      return result;
    v9 = sub_180067F50((__int64)a1);
    v34 = 0LL;
    v35 = 0LL;
    sub_18007E228(v9, &v34);
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
        v14 = sub_18007040C(v13);
        sub_1800A12B0((__int64)a1, v14);
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
    sub_180012A18((__int64 *)&v34);
  }
  else
  {
    v15 = (__int64 *)sub_180042EEC((__int64)v30);
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
    sub_18006821C((__int64)a1, 1, 1);
  result = sub_180067F88((__int64)a1, 1);
  if ( result )
  {
    v18 = sub_180067F50((__int64)a1);
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
      sub_1800CC860(a1, (__int64 *)&v28);
      v21 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
      if ( *((_QWORD *)&v28 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
      sub_18006821C((__int64)a1, 2, 0);
      return sub_18006821C((__int64)a1, 4, 0);
    }
    else
    {
      v36 = 0LL;
      v37 = 0LL;
      sub_18007E228(v18, &v36);
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
          sub_1800CC860(a1, (__int64 *)&v33);
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
      return sub_180012A18((__int64 *)&v36);
    }
  }
  return result;
}
