/*
 * XREFs of sub_180103A84 @ 0x180103A84
 * Callers:
 *     sub_180103F4C @ 0x180103F4C (sub_180103F4C.c)
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_180099C14 @ 0x180099C14 (sub_180099C14.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180103A84(__int64 a1)
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

  v2 = sub_1800F0B14(a1);
  v22 = 0LL;
  v23 = 0LL;
  sub_18007E228(v2, &v22);
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
    if ( (unsigned int)sub_18007040C(v6)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 1LL) )
    {
      v7 = *(_QWORD *)(a1 + 144);
      if ( !v7 || ((v7 - 1) & v7) != 0 )
      {
        sub_18000FE28(v20);
        v13 = sub_18000FE28(v19);
        sub_180099C14(pExceptionObject, v13, 478, (__int64)v20, 0);
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
  v9 = (_QWORD *)sub_1800F0B14(a1);
  sub_180017984(v9, &v15, 1u);
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
  sub_180068194(*v10, v17);
  LODWORD(Size) = (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC;
  sub_18009FAA4(
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
  return sub_180012A18((__int64 *)&v22);
}
