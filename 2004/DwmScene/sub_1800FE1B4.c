/*
 * XREFs of sub_1800FE1B4 @ 0x1800FE1B4
 * Callers:
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_180094344 @ 0x180094344 (sub_180094344.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FE1B4(__int64 a1)
{
  __int64 v2; // rax
  __int64 *i; // rdi
  __int64 *v4; // r15
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  size_t Size; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-A8h]
  __int64 v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h]
  _QWORD v19[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v20[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v22; // [rsp+110h] [rbp+10h] BYREF
  __int64 v23; // [rsp+120h] [rbp+20h]

  v2 = sub_1800EB244(a1);
  v22 = 0LL;
  v23 = 0LL;
  sub_180078958(v2, &v22);
  v4 = (__int64 *)*((_QWORD *)&v22 + 1);
  for ( i = (__int64 *)v22; i != v4; i += 2 )
  {
    v18 = 0LL;
    v5 = (volatile signed __int32 *)i[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)i[1];
    }
    v6 = *i;
    *(_QWORD *)&v18 = v6;
    *((_QWORD *)&v18 + 1) = v5;
    if ( (unsigned int)sub_18006AB3C(v6)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 1LL) )
    {
      v7 = *(_QWORD *)(a1 + 144);
      if ( !v7 || ((v7 - 1) & v7) != 0 )
      {
        sub_18000FD48(v20);
        v13 = sub_18000FD48(v19);
        sub_180094344(pExceptionObject, v13, 478, (__int64)v20, 0);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v9 = (_QWORD *)sub_1800EB244(a1);
  sub_180017744(v9, &v15, 1u);
  v10 = (__int64 *)(a1 + 96);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), &v15);
  v11 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v17[3] = 15LL;
  v17[2] = 14LL;
  strcpy((char *)v17, "ColorTransform");
  sub_1800628C4(*v10, v17);
  LODWORD(Size) = (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC;
  sub_18009A1D4(
    *v10,
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    16,
    0,
    1,
    *(const void **)(a1 + 112),
    Size,
    0LL);
  return sub_180012938((__int64 *)&v22);
}
