/*
 * XREFs of sub_180093360 @ 0x180093360
 * Callers:
 *     sub_1800927E8 @ 0x1800927E8 (sub_1800927E8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180091370 @ 0x180091370 (sub_180091370.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180093360(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FD48(v7);
    v4 = (unsigned int)sub_18000FD48(v6);
    sub_1800CB940((unsigned int)pExceptionObject, v4, 634, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    sub_18000FD48(v6);
    v5 = sub_18000FD48(v7);
    sub_180091370(pExceptionObject, v5, 639, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18009342C(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
