/*
 * XREFs of sub_1800692A8 @ 0x1800692A8
 * Callers:
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800A073C @ 0x1800A073C (sub_1800A073C.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800692A8(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  _QWORD v8[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000FE28(v9);
    v7 = (unsigned int)sub_18000FE28(v8);
    sub_1800D1210((unsigned int)pExceptionObject, v7, 30, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_1800A073C(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_1800A073C(v6, a2);
  return result;
}
