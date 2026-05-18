/*
 * XREFs of sub_1800934D0 @ 0x1800934D0
 * Callers:
 *     sub_180013870 @ 0x180013870 (sub_180013870.c)
 *     sub_1800927E8 @ 0x1800927E8 (sub_1800927E8.c)
 *     sub_180093C60 @ 0x180093C60 (sub_180093C60.c)
 *     sub_180093CA0 @ 0x180093CA0 (sub_180093CA0.c)
 *     sub_1800F5E6C @ 0x1800F5E6C (sub_1800F5E6C.c)
 *     sub_1800F601C @ 0x1800F601C (sub_1800F601C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180091370 @ 0x180091370 (sub_180091370.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800934D0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 *v5; // rax
  unsigned int v6; // eax
  _QWORD v7[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FD48(v8);
    v6 = (unsigned int)sub_18000FD48(v7);
    sub_1800CB940((unsigned int)pExceptionObject, v6, 577, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000FD48(v7);
    v5 = sub_18000FD48(v8);
    sub_180091370(pExceptionObject, v5, 582, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_18009359C(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
