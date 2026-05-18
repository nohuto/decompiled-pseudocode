/*
 * XREFs of sub_1800BB82C @ 0x1800BB82C
 * Callers:
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C29F0 @ 0x1800C29F0 (sub_1800C29F0.c)
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 *     sub_1800C3F40 @ 0x1800C3F40 (sub_1800C3F40.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     sub_18008177C @ 0x18008177C (sub_18008177C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

__int64 __fastcall sub_1800BB82C(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-78h] BYREF
  void *v6; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+50h] [rbp-48h] BYREF

  sub_18006714C(a1 + 16, a2);
  v6 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v5 = 0LL;
  sub_18008177C((__int64 *)(a1 + 200), &v5, &v6);
  if ( v5 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000FE28(v7);
    sub_180077714(pExceptionObject, (__int64)v7, 0, v4);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v5 + 40);
}
