/*
 * XREFs of sub_180072004 @ 0x180072004
 * Callers:
 *     sub_18007B34C @ 0x18007B34C (sub_18007B34C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     sub_18008177C @ 0x18008177C (sub_18008177C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072004(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-78h] BYREF
  void *v5; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+50h] [rbp-48h] BYREF

  sub_18006714C(a1 + 16, a2);
  v5 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v4 = 0LL;
  sub_18008177C(a1 + 200, &v4, &v5);
  if ( v4 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000FE28(v6);
    sub_180077714(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v4 + 40);
}
