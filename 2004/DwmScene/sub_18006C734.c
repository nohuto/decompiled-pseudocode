/*
 * XREFs of sub_18006C734 @ 0x18006C734
 * Callers:
 *     sub_180075A7C @ 0x180075A7C (sub_180075A7C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_180071E44 @ 0x180071E44 (sub_180071E44.c)
 *     sub_18007BEAC @ 0x18007BEAC (sub_18007BEAC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C734(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-78h] BYREF
  void *v5; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+50h] [rbp-48h] BYREF

  sub_18006187C(a1 + 16, a2);
  v5 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v4 = 0LL;
  sub_18007BEAC(a1 + 200, &v4, &v5);
  if ( v4 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000FD48(v6);
    sub_180071E44(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v4 + 40);
}
