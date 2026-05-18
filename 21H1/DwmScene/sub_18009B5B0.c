/*
 * XREFs of sub_18009B5B0 @ 0x18009B5B0
 * Callers:
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18009B364 @ 0x18009B364 (sub_18009B364.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009B5B0(__int64 a1, __int64 a2)
{
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( !sub_18009B364(*(_QWORD *)(a1 + 112), *(_QWORD *)(*(_QWORD *)a2 + 96LL)) )
  {
    sub_18000FD48(v7);
    v5 = (unsigned int)sub_18000FD48(v6);
    sub_1800CB940((unsigned int)pExceptionObject, v5, 147, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_18009B64C(a1, a2);
}
