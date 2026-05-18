/*
 * XREFs of sub_180060FF4 @ 0x180060FF4
 * Callers:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180060EB4 @ 0x180060EB4 (sub_180060EB4.c)
 *     sub_180061358 @ 0x180061358 (sub_180061358.c)
 *     sub_1800616BC @ 0x1800616BC (sub_1800616BC.c)
 *     sub_1800619B8 @ 0x1800619B8 (sub_1800619B8.c)
 *     sub_18011690C @ 0x18011690C (sub_18011690C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180060FF4(__int64 a1, char a2)
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
  if ( (unsigned __int8)sub_1800619B8() )
  {
    sub_18000FD48(v9);
    v6 = (unsigned int)sub_18000FD48(v8);
    sub_180061358((unsigned int)pExceptionObject, v6, 33, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_18011690C(a1);
  v7 = a1;
  result = (__int64 *)sub_1800616BC();
  v5 = (char *)result[1];
  if ( (char *)result[2] == v5 )
    return (__int64 *)sub_180060EB4(result, v5, &v7, &v11);
  *(_QWORD *)v5 = a1;
  v5[8] = a2;
  result[1] += 16LL;
  return result;
}
