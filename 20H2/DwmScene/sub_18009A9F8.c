/*
 * XREFs of sub_18009A9F8 @ 0x18009A9F8
 * Callers:
 *     sub_180099AB0 @ 0x180099AB0 (sub_180099AB0.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009A9F8(_QWORD *a1, __int64 a2, __int64 a3)
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

  v6 = sub_18006AB3C(a3);
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
    v11 = sub_1800172A8(a3, &v19);
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
    sub_180099E2C(a1, (__int64 *)&v18);
  }
  else
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v17, v8 + 5);
    v10 = v17[1];
  }
  v13 = sub_180062688((__int64)a1, v21);
  v14 = v17[0];
  sub_1800628C4(v17[0], v13);
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
