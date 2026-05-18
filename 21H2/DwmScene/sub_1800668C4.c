/*
 * XREFs of sub_1800668C4 @ 0x1800668C4
 * Callers:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180066784 @ 0x180066784 (sub_180066784.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_180066F8C @ 0x180066F8C (sub_180066F8C.c)
 *     sub_180067288 @ 0x180067288 (sub_180067288.c)
 *     sub_18011C1DC @ 0x18011C1DC (sub_18011C1DC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800668C4(__int64 a1, char a2)
{
  __int64 *result; // rax
  char *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF
  char v11; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a2;
  if ( (unsigned __int8)sub_180067288() )
  {
    sub_18000FE28(v9);
    v6 = (unsigned int)sub_18000FE28(v8);
    sub_180066C28((unsigned int)pExceptionObject, v6, 33, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_18011C1DC(a1);
  v7 = a1;
  result = (__int64 *)sub_180066F8C();
  v5 = (char *)result[1];
  if ( (char *)result[2] == v5 )
    return (__int64 *)sub_180066784(result, v5, &v7, &v11);
  *(_QWORD *)v5 = a1;
  v5[8] = a2;
  result[1] += 16LL;
  return result;
}
