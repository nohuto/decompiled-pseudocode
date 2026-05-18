/*
 * XREFs of sub_1800A0450 @ 0x1800A0450
 * Callers:
 *     sub_1800A3AB0 @ 0x1800A3AB0 (sub_1800A3AB0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_18010A610 @ 0x18010A610 (sub_18010A610.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_1800A02A0 @ 0x1800A02A0 (sub_1800A02A0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A0450(__int64 a1, __int64 *a2)
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
    v7 = sub_1800A02A0(a1, (__int64)(v6 + 4));
    if ( v7 == -1 )
    {
      v12 = sub_18009BCB8(
              &Src,
              "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
              v6 + 4);
      v13 = sub_18002C218((__int64)v17, v12, "'. ShaderManager::AddOption() must be called first.");
      v14 = sub_18000FD48(v15);
      sub_180027FF4(pExceptionObject, v14, 641, v13, 0);
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
  sub_18009C6C8(a2, (__int64)a2);
  return v4;
}
