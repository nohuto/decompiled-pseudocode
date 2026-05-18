/*
 * XREFs of sub_180098C30 @ 0x180098C30
 * Callers:
 *     sub_1800980B8 @ 0x1800980B8 (sub_1800980B8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180096C40 @ 0x180096C40 (sub_180096C40.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180098C30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FE28(v7);
    v4 = (unsigned int)sub_18000FE28(v6);
    sub_1800D1210((unsigned int)pExceptionObject, v4, 634, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    sub_18000FE28(v6);
    v5 = sub_18000FE28(v7);
    sub_180096C40(pExceptionObject, v5, 639, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180098CFC(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
