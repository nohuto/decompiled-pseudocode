/*
 * XREFs of sub_1800A02C8 @ 0x1800A02C8
 * Callers:
 *     sub_18009F380 @ 0x18009F380 (sub_18009F380.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800174E8 @ 0x1800174E8 (sub_1800174E8.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18009F6FC @ 0x18009F6FC (sub_18009F6FC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A02C8(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-28h]
  _QWORD v21[4]; // [rsp+60h] [rbp-20h] BYREF

  v6 = sub_18007040C(a3);
  *(_OWORD *)v17 = 0LL;
  v7 = (__int64 *)a1[14];
  v8 = v7;
  v9 = (__int64 *)v7[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v9 + 8) >= v6 )
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == v7 || v6 < *((_DWORD *)v8 + 8) )
LABEL_8:
    v8 = (__int64 *)a1[14];
  if ( v8 == v7 || !v8[5] )
  {
    v11 = sub_1800174E8(a3, &v19);
    std::shared_ptr<__ExceptionPtr>::operator=(v17, v11);
    v12 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    v18 = 0LL;
    v10 = v17[1];
    if ( v17[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17[1] + 8));
      v10 = v17[1];
    }
    v18 = *(_OWORD *)v17;
    sub_18009F6FC(a1, (__int64 *)&v18);
  }
  else
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v17, v8 + 5);
    v10 = v17[1];
  }
  v13 = sub_180067F58((__int64)a1, v21);
  v14 = v17[0];
  sub_180068194(v17[0], v13);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 40LL))(v14, a1[16], a2);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 8));
    if ( !(_DWORD)result )
    {
      v16 = v17[1];
      (**(void (__fastcall ***)(__int64))v17[1])(v17[1]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17[1] + 8LL))(v17[1]);
    }
  }
  return result;
}
