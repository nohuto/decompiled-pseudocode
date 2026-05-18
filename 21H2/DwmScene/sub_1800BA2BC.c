/*
 * XREFs of sub_1800BA2BC @ 0x1800BA2BC
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180075DD0 @ 0x180075DD0 (sub_180075DD0.c)
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     sub_1800813FC @ 0x1800813FC (sub_1800813FC.c)
 *     sub_1800BD110 @ 0x1800BD110 (sub_1800BD110.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BA2BC(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbx
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v8; // [rsp+90h] [rbp+37h] BYREF
  void *v9; // [rsp+A0h] [rbp+47h] BYREF

  v9 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (_QWORD *)(a1 + 200);
  if ( sub_1800813FC((__int64 *)(a1 + 200), &v9) )
  {
    sub_18000FE28(v6);
    sub_180077714(pExceptionObject, (__int64)v6, 0, v4);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v8 = 0LL;
  sub_1800BD110(&v8);
  sub_180075DD0(v1, (__int64)&v5, &v9);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 40), &v8);
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v2 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  return v8;
}
