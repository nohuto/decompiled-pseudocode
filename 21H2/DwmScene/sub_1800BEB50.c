/*
 * XREFs of sub_1800BEB50 @ 0x1800BEB50
 * Callers:
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_1800BB8BC @ 0x1800BB8BC (sub_1800BB8BC.c)
 *     sub_1800BD330 @ 0x1800BD330 (sub_1800BD330.c)
 *     sub_1800DBD40 @ 0x1800DBD40 (sub_1800DBD40.c)
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 *     sub_1800DE6F0 @ 0x1800DE6F0 (sub_1800DE6F0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BEB50(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // r14
  char v7; // r12
  char v8; // r15
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 result; // rax
  __int64 v21; // rbx
  __int128 v22; // [rsp+20h] [rbp-50h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-10h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-8h]

  v6 = sub_18007AB84(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 96LL))(*a3, 7LL) )
    v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1802110A8, 0LL);
  else
    v7 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1802110E8, 0LL);
  if ( v8 && (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_180210048, 0LL) )
    v8 = 0;
  v23 = 0LL;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 152LL))(*a4);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v10 = (volatile signed __int32 *)v9[1];
  }
  *(_QWORD *)&v23 = *v9;
  *((_QWORD *)&v23 + 1) = v10;
  v22 = 0LL;
  sub_1800BB8BC(v23, &v22);
  if ( v8 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_180211128, 0LL);
    v13 = v12;
    v14 = 2;
    if ( (unsigned int)v12 > 2 )
    {
      if ( v12 < 0 )
        v14 = 0;
      v13 = v14;
    }
    v15 = v22;
    if ( !(_QWORD)v22 )
      goto LABEL_24;
    if ( *(_DWORD *)(v22 + 144) != v13 )
    {
      v24 = 0LL;
      v16 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
      if ( *((_QWORD *)&v22 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL));
        v16 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
      }
      v24 = v22;
      sub_1800DE6F0(v23, &v24);
      v22 = 0uLL;
      if ( !v16 )
        goto LABEL_24;
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_24;
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) != 1 )
        goto LABEL_24;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      v15 = v22;
    }
    if ( v15 )
    {
      v17 = *((_QWORD *)&v22 + 1);
LABEL_31:
      *(float *)(v15 + 280) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211108);
      goto LABEL_33;
    }
LABEL_24:
    v18 = (__int64 *)sub_1800BD330((__int64)v26);
    std::shared_ptr<__ExceptionPtr>::operator=(&v22, v18);
    v19 = v27;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    v15 = v22;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 40LL))(v22, *a3, v13);
    v25 = 0LL;
    v17 = *((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL));
      v17 = *((_QWORD *)&v22 + 1);
      v15 = v22;
    }
    v25 = v22;
    sub_1800DBD40(v23, &v25);
    goto LABEL_31;
  }
  v17 = *((_QWORD *)&v22 + 1);
  v15 = v22;
LABEL_33:
  if ( v15 )
    *(_BYTE *)(v15 + 136) = v8;
  LOBYTE(v11) = v7;
  result = sub_1800DDF78(v23, a4, v11);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 8));
    if ( !(_DWORD)result )
    {
      v21 = *((_QWORD *)&v22 + 1);
      (***((void (__fastcall ****)(_QWORD))&v22 + 1))(*((_QWORD *)&v22 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
    }
  }
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return result;
}
