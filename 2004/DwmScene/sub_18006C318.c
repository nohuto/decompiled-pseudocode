/*
 * XREFs of sub_18006C318 @ 0x18006C318
 * Callers:
 *     sub_180073ED4 @ 0x180073ED4 (sub_180073ED4.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     sub_180070BA0 @ 0x180070BA0 (sub_180070BA0.c)
 *     sub_180071E44 @ 0x180071E44 (sub_180071E44.c)
 *     sub_18007BB2C @ 0x18007BB2C (sub_18007BB2C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006C318(__int64 a1)
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
  if ( sub_18007BB2C(a1 + 200, &v8) )
  {
    sub_18000FD48(v5);
    sub_180071E44(pExceptionObject, v5, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v7 = 0LL;
  sub_180070BA0(&v7);
  sub_180070500(v1, &v4, &v8);
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
