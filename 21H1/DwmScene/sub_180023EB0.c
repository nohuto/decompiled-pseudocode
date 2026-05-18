/*
 * XREFs of sub_180023EB0 @ 0x180023EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001E08C @ 0x18001E08C (sub_18001E08C.c)
 *     sub_18001E2D4 @ 0x18001E2D4 (sub_18001E2D4.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_18001E764 @ 0x18001E764 (sub_18001E764.c)
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall sub_180023EB0(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int128 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v38; // [rsp+A0h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v42; // [rsp+C0h] [rbp-48h]
  __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v44; // [rsp+D0h] [rbp-38h]
  __int64 v45; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v46; // [rsp+E0h] [rbp-28h]
  _OWORD v47[2]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v48[2]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v49[2]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v50[2]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v51[2]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v53[24]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v54[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v55[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v56[32]; // [rsp+1E8h] [rbp+E0h] BYREF

  v31 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v35 = 0LL;
      v20 = *(_QWORD *)(a1 + 16);
      if ( !v20 )
      {
LABEL_77:
        std::bad_function_call::bad_function_call((std::bad_function_call *)v55);
        throw (std::bad_weak_ptr *)v55;
      }
      do
      {
        v21 = *(_DWORD *)(v20 + 8);
        if ( !v21 )
          goto LABEL_77;
      }
      while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
      v35 = *(_OWORD *)(a1 + 8);
      v50[0] = *a3;
      v50[1] = a3[1];
      v22 = sub_18001E9AC((_QWORD *)a1, &v43, (__int64)v50, (__int64)&v35, a1 + 592);
      std::shared_ptr<__ExceptionPtr>::operator=(&v31, v22);
      v23 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      if ( *((_QWORD *)&v35 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v24 = *((_QWORD *)&v35 + 1);
          (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
          {
            v9 = *((_QWORD *)&v35 + 1);
            goto LABEL_72;
          }
        }
      }
    }
    else if ( *(int *)a3 > 1 )
    {
      if ( *(int *)a3 <= 3 )
      {
        v34 = 0LL;
        v15 = *(_QWORD *)(a1 + 16);
        if ( !v15 )
        {
LABEL_76:
          std::bad_function_call::bad_function_call((std::bad_function_call *)v54);
          throw (std::bad_weak_ptr *)v54;
        }
        do
        {
          v16 = *(_DWORD *)(v15 + 8);
          if ( !v16 )
            goto LABEL_76;
        }
        while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) );
        v34 = *(_OWORD *)(a1 + 8);
        v49[0] = *a3;
        v49[1] = a3[1];
        v17 = sub_18001E2D4((_QWORD *)a1, &v41, (__int64)v49, (__int64)&v34, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v17);
        v18 = v42;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
        if ( *((_QWORD *)&v34 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v19 = *((_QWORD *)&v34 + 1);
            (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v34 + 1);
              goto LABEL_72;
            }
          }
        }
      }
      else if ( *(_DWORD *)a3 == 5 )
      {
        v33 = 0LL;
        v10 = *(_QWORD *)(a1 + 16);
        if ( !v10 )
        {
LABEL_75:
          std::bad_function_call::bad_function_call((std::bad_function_call *)v53);
          throw (std::bad_weak_ptr *)v53;
        }
        do
        {
          v11 = *(_DWORD *)(v10 + 8);
          if ( !v11 )
            goto LABEL_75;
        }
        while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
        v33 = *(_OWORD *)(a1 + 8);
        v48[0] = *a3;
        v48[1] = a3[1];
        v12 = sub_18001E51C((_QWORD *)a1, &v39, (__int64)v48, (__int64)&v33, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v12);
        v13 = v40;
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
        if ( *((_QWORD *)&v33 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v14 = *((_QWORD *)&v33 + 1);
            (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v33 + 1);
              goto LABEL_72;
            }
          }
        }
      }
      else if ( *(_DWORD *)a3 == 6 )
      {
        v32 = 0LL;
        v4 = *(_QWORD *)(a1 + 16);
        if ( !v4 )
        {
LABEL_74:
          std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
          throw (std::bad_weak_ptr *)pExceptionObject;
        }
        do
        {
          v5 = *(_DWORD *)(v4 + 8);
          if ( !v5 )
            goto LABEL_74;
        }
        while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
        v32 = *(_OWORD *)(a1 + 8);
        v47[0] = *a3;
        v47[1] = a3[1];
        v6 = sub_18001E08C((_QWORD *)a1, &v37, (__int64)v47, (__int64)&v32, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v6);
        v7 = v38;
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
          }
        }
        if ( *((_QWORD *)&v32 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v8 = *((_QWORD *)&v32 + 1);
            (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v32 + 1);
LABEL_72:
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
        }
      }
    }
  }
  else
  {
    v36 = 0LL;
    v25 = *(_QWORD *)(a1 + 16);
    if ( !v25 )
    {
LABEL_78:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v56);
      throw (std::bad_weak_ptr *)v56;
    }
    do
    {
      v26 = *(_DWORD *)(v25 + 8);
      if ( !v26 )
        goto LABEL_78;
    }
    while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) );
    v36 = *(_OWORD *)(a1 + 8);
    v51[0] = *a3;
    v51[1] = a3[1];
    v27 = sub_18001E764((_QWORD *)a1, &v45, (__int64)v51, (__int64)&v36, a1 + 592);
    std::shared_ptr<__ExceptionPtr>::operator=(&v31, v27);
    v28 = v46;
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    if ( *((_QWORD *)&v36 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v29 = *((_QWORD *)&v36 + 1);
        (***((void (__fastcall ****)(_QWORD))&v36 + 1))(*((_QWORD *)&v36 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        {
          v9 = *((_QWORD *)&v36 + 1);
          goto LABEL_72;
        }
      }
    }
  }
  *a2 = v31;
  return a2;
}
