/*
 * XREFs of sub_1800B5F5C @ 0x1800B5F5C
 * Callers:
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800BD120 @ 0x1800BD120 (sub_1800BD120.c)
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 *     sub_1800BE670 @ 0x1800BE670 (sub_1800BE670.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C2154 @ 0x1800C2154 (sub_1800C2154.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800C5744 @ 0x1800C5744 (sub_1800C5744.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_180071E44 @ 0x180071E44 (sub_180071E44.c)
 *     sub_18007BEAC @ 0x18007BEAC (sub_18007BEAC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

__int64 __fastcall sub_1800B5F5C(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-78h] BYREF
  void *v6; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+50h] [rbp-48h] BYREF

  sub_18006187C(a1 + 16, a2);
  v6 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v5 = 0LL;
  sub_18007BEAC((__int64 *)(a1 + 200), &v5, &v6);
  if ( v5 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000FD48(v7);
    sub_180071E44(pExceptionObject, (__int64)v7, 0, v4);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v5 + 40);
}
