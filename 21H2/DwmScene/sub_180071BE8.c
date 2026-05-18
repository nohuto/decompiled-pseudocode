/*
 * XREFs of sub_180071BE8 @ 0x180071BE8
 * Callers:
 *     sub_1800797A4 @ 0x1800797A4 (sub_1800797A4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180075DD0 @ 0x180075DD0 (sub_180075DD0.c)
 *     sub_180076470 @ 0x180076470 (sub_180076470.c)
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     sub_1800813FC @ 0x1800813FC (sub_1800813FC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180071BE8(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v7; // [rsp+90h] [rbp+37h] BYREF
  void *v8; // [rsp+A0h] [rbp+47h] BYREF

  v8 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v1 = a1 + 200;
  if ( sub_1800813FC(a1 + 200, &v8) )
  {
    sub_18000FE28(v5);
    sub_180077714(pExceptionObject, v5, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v7 = 0LL;
  sub_180076470(&v7);
  sub_180075DD0(v1, &v4, &v8);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v4 + 40), &v7);
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v2 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  return v7;
}
