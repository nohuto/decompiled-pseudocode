/*
 * XREFs of sub_1800639D8 @ 0x1800639D8
 * Callers:
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18009AE6C @ 0x18009AE6C (sub_18009AE6C.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800639D8(__int64 a1, __int64 a2)
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
    sub_18000FD48(v9);
    v7 = (unsigned int)sub_18000FD48(v8);
    sub_1800CB940((unsigned int)pExceptionObject, v7, 30, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_18009AE6C(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_18009AE6C(v6, a2);
  return result;
}
