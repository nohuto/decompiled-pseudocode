/*
 * XREFs of _setlocale_set_cat_0 @ 0x1800AFE94
 * Callers:
 *     sub_1800AFDFC @ 0x1800AFDFC (sub_1800AFDFC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_1800DBE40 @ 0x1800DBE40 (sub_1800DBE40.c)
 *     sub_1800DDA3C @ 0x1800DDA3C (sub_1800DDA3C.c)
 *     sub_1800F921C @ 0x1800F921C (sub_1800F921C.c)
 *     sub_1800F9398 @ 0x1800F9398 (sub_1800F9398.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall setlocale_set_cat_0(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rsi
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rbx
  const void *v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+58h] [rbp-A8h]
  __int128 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  _BYTE v31[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  volatile signed __int32 *v34; // [rsp+98h] [rbp-68h]
  _QWORD v35[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v37[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v38[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v39[8]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v41; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v43; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v44; // [rsp+1D0h] [rbp+D0h]
  __int128 v45; // [rsp+1D8h] [rbp+D8h] BYREF
  const void *Src[3]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v47; // [rsp+200h] [rbp+100h]

  v6 = a1 + 212;
  result = _std_type_info_compare(a1[212] + 8LL, &unk_18021B510);
  if ( (_DWORD)result )
  {
    sub_180031B44(Src, a1 + 3, " effect");
    v41 = 0LL;
    v9 = sub_180070328(*a2, v8);
    v41 = 0LL;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v41 = *(_OWORD *)v9;
    v45 = 0LL;
    sub_1800F921C(&v45, &v41, Src);
    v29 = 0LL;
    v30 = 0LL;
    v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v31);
    sub_180076E98(&v29, v11, (__int64)Src);
    v12 = v32;
    if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v28 = 0LL;
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    v14 = (volatile signed __int32 *)v13[1];
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      v14 = (volatile signed __int32 *)v13[1];
    }
    *(_QWORD *)&v28 = *v13;
    *((_QWORD *)&v28 + 1) = v14;
    v43 = 0LL;
    v44 = 0LL;
    sub_1800DDA3C(v28, &v43, v6);
    v15 = (_QWORD *)v43;
    if ( (_QWORD)v43 != *((_QWORD *)&v43 + 1) )
    {
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v43 + 1) - v43) >> 4) > 1 )
      {
        sub_18000FE28(v36);
        v25 = sub_18000FE28(v35);
        sub_18002D8C4(v39, v25, 858, (__int64)v36, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v39;
      }
      if ( *(_DWORD *)(*(_QWORD *)v43 + 176LL) != 1 )
      {
        sub_18000FE28(v38);
        v24 = sub_18000FE28(v37);
        sub_18002D8C4(pExceptionObject, v24, 865, (__int64)v38, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v43 + 136LL) )
      {
        v42 = 0LL;
        v16 = (volatile signed __int32 *)a1[18];
        if ( v16 )
        {
          _InterlockedIncrement(v16 + 2);
          v16 = (volatile signed __int32 *)a1[18];
        }
        v17 = a1[17];
        v33 = v17;
        v34 = v16;
        v26 = 0LL;
        v18 = *(_QWORD *)(v17 + 144);
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v26 = *(_OWORD *)(v17 + 136);
        v27 = 0LL;
        v19 = v15[1];
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v19 = v15[1];
        }
        *(_QWORD *)&v27 = *v15;
        *((_QWORD *)&v27 + 1) = v19;
        sub_1800DBE40(v28, (unsigned int)&v42, (_DWORD)a3, (unsigned int)&v27, (__int64)&v26);
        if ( v16 )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        v20 = a1[220];
        if ( v20 )
          (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v20 + 16LL))(v20, *v15, &v42);
        v21 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
        if ( *((_QWORD *)&v42 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          }
        }
      }
    }
    sub_180012A18((__int64 *)&v43);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    sub_180077C2C((__int64 *)&v29);
    result = sub_1800F9398(&v45);
    v22 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
    if ( *((_QWORD *)&v41 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        result = (unsigned int)_InterlockedDecrement(v22 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    if ( v47 >= 0x10 )
    {
      v23 = Src[0];
      if ( v47 + 1 >= 0x1000 )
      {
        v23 = (const void *)*((_QWORD *)Src[0] - 1);
        if ( (unsigned __int64)((char *)Src[0] - (char *)v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v47 + 40);
          __debugbreak();
        }
      }
      return j_j__o_free(v23);
    }
  }
  return result;
}
