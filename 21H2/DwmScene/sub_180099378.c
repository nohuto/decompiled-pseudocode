/*
 * XREFs of sub_180099378 @ 0x180099378
 * Callers:
 *     sub_180013950 @ 0x180013950 (sub_180013950.c)
 *     sub_1800980B8 @ 0x1800980B8 (sub_1800980B8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180096C40 @ 0x180096C40 (sub_180096C40.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

__int64 __fastcall sub_180099378(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  unsigned int v4; // eax
  _QWORD v5[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v6[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FE28(v6);
    v4 = (unsigned int)sub_18000FE28(v5);
    sub_1800D1210((unsigned int)pExceptionObject, v4, 681, (unsigned int)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000FE28(v5);
    v3 = sub_18000FE28(v6);
    sub_180096C40(pExceptionObject, v3, 686, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180099440(a1, a2, *(unsigned int *)(a1 + 120));
}
