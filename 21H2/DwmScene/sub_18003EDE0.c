/*
 * XREFs of sub_18003EDE0 @ 0x18003EDE0
 * Callers:
 *     _setlocale_set_cat @ 0x18003FAC0 (_setlocale_set_cat.c)
 *     sub_180044EE0 @ 0x180044EE0 (sub_180044EE0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800174E8 @ 0x1800174E8 (sub_1800174E8.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180034350 @ 0x180034350 (sub_180034350.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18009F96C @ 0x18009F96C (sub_18009F96C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003EDE0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  volatile signed __int32 *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v28; // [rsp+30h] [rbp-99h] BYREF
  __int64 v29[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v30; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-71h]
  __int128 v32; // [rsp+60h] [rbp-69h] BYREF
  __int128 v33; // [rsp+70h] [rbp-59h]
  _QWORD *v34; // [rsp+80h] [rbp-49h]
  __int64 *v35; // [rsp+88h] [rbp-41h]
  __int64 v36; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v37; // [rsp+98h] [rbp-31h]
  _QWORD v38[3]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-11h]
  __int128 v40; // [rsp+C0h] [rbp-9h]

  v34 = a2;
  v35 = a3;
  v40 = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v40 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v10 = sub_1800174E8(v40, &v36);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v10);
  v11 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v28 = 0LL;
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 104);
  }
  v29[0] = *(_QWORD *)(a1 + 96);
  v29[1] = v12;
  sub_180018B88(&v28, v29);
  v13 = *a3;
  v27 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_180034350(v28, &v27, a4);
  v14 = (_QWORD *)sub_1800703D4(v40);
  sub_180017984(v14, &v30, 1u);
  v15 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v30);
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
  v17 = (_QWORD *)sub_180067F58(a1, v38);
  v18 = std::string::append(v17, "Shared Texture", 0xEuLL);
  v33 = 0uLL;
  v32 = *(_OWORD *)v18;
  v33 = *((_OWORD *)v18 + 1);
  v18[2] = 0LL;
  v18[3] = 15LL;
  *(_BYTE *)v18 = 0;
  sub_180068194(*v15, &v32);
  if ( v39 >= 0x10 )
  {
    v19 = v38[0];
    if ( v39 + 1 >= 0x1000 )
    {
      v19 = *(_QWORD *)(v38[0] - 8LL);
      if ( (unsigned __int64)(v38[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v39 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  result = sub_18009F96C(*v15);
  v21 = *(_QWORD *)(a1 + 112);
  v22 = *a2;
  if ( v21 != *a2 )
  {
    if ( v22 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*a2);
      v21 = *(_QWORD *)(a1 + 112);
    }
    *(_QWORD *)(a1 + 112) = v22;
    if ( v21 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( *((_QWORD *)&v28 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v23 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  if ( *((_QWORD *)&v40 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v24 = *((_QWORD *)&v40 + 1);
      (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v40 + 1) + 8LL))(*((_QWORD *)&v40 + 1));
    }
  }
  v25 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return result;
}
