/*
 * XREFs of sub_180092FB8 @ 0x180092FB8
 * Callers:
 *     sub_180013870 @ 0x180013870 (sub_180013870.c)
 *     sub_1800927E8 @ 0x1800927E8 (sub_1800927E8.c)
 *     sub_1800F5E6C @ 0x1800F5E6C (sub_1800F5E6C.c)
 *     sub_1800F601C @ 0x1800F601C (sub_1800F601C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180091370 @ 0x180091370 (sub_180091370.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

__int64 __fastcall sub_180092FB8(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  unsigned int v4; // eax
  _QWORD v5[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v6[5]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FD48(v6);
    v4 = (unsigned int)sub_18000FD48(v5);
    sub_1800CB940((unsigned int)pExceptionObject, v4, 727, (unsigned int)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000FD48(v5);
    v3 = sub_18000FD48(v6);
    sub_180091370(pExceptionObject, v3, 732, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180093148(a1, a2, *(unsigned int *)(a1 + 112));
}
