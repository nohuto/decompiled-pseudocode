/*
 * XREFs of sub_1800A5D20 @ 0x1800A5D20
 * Callers:
 *     sub_1800A9380 @ 0x1800A9380 (sub_1800A9380.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A5B70 @ 0x1800A5B70 (sub_1800A5B70.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A5D20(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 **v8; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  const void **v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  _QWORD v15[4]; // [rsp+38h] [rbp-E0h] BYREF
  const void *Src; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v17[40]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-78h] BYREF

  pExceptionObject[8] = a2;
  v4 = 0LL;
  v5 = (_QWORD **)*a2;
  v6 = *(_QWORD **)*a2;
  while ( v6 != v5 )
  {
    v7 = sub_1800A5B70(a1, (__int64)(v6 + 4));
    if ( v7 == -1 )
    {
      v12 = sub_1800A1588(
              &Src,
              "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
              v6 + 4);
      v13 = sub_180031AE8((__int64)v17, v12, "'. ShaderManager::AddOption() must be called first.");
      v14 = sub_18000FE28(v15);
      sub_18002D8C4(pExceptionObject, v14, 641, v13, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v4 |= 1LL << v7;
    v8 = (__int64 **)v6[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  sub_1800A1F98(a2, (__int64)a2);
  return v4;
}
