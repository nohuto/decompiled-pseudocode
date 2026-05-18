/*
 * XREFs of sub_18007ABF8 @ 0x18007ABF8
 * Callers:
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_18001A700 @ 0x18001A700 (sub_18001A700.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007A9C0 @ 0x18007A9C0 (sub_18007A9C0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007ABF8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 704);
  if ( v2 == *(_QWORD **)(a1 + 712) )
  {
    sub_18000FE28(v7);
    v5 = (unsigned int)sub_18000FE28(v6);
    sub_1800D1210((unsigned int)pExceptionObject, v5, 979, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = v2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *v2;
  a2[1] = v2[1];
  return a2;
}
