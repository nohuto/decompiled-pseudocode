/*
 * XREFs of sub_180098DA0 @ 0x180098DA0
 * Callers:
 *     sub_180013950 @ 0x180013950 (sub_180013950.c)
 *     sub_1800980B8 @ 0x1800980B8 (sub_1800980B8.c)
 *     sub_180099530 @ 0x180099530 (sub_180099530.c)
 *     sub_180099570 @ 0x180099570 (sub_180099570.c)
 *     sub_1800FB73C @ 0x1800FB73C (sub_1800FB73C.c)
 *     sub_1800FB8EC @ 0x1800FB8EC (sub_1800FB8EC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180096C40 @ 0x180096C40 (sub_180096C40.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180098DA0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 *v5; // rax
  unsigned int v6; // eax
  _QWORD v7[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FE28(v8);
    v6 = (unsigned int)sub_18000FE28(v7);
    sub_1800D1210((unsigned int)pExceptionObject, v6, 577, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000FE28(v7);
    v5 = sub_18000FE28(v8);
    sub_180096C40(pExceptionObject, v5, 582, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_180098E6C(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
