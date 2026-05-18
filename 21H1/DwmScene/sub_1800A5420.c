/*
 * XREFs of sub_1800A5420 @ 0x1800A5420
 * Callers:
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800BF42C @ 0x1800BF42C (sub_1800BF42C.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_1800A495C @ 0x1800A495C (sub_1800A495C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A5420(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  const void **v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  _QWORD v12[4]; // [rsp+38h] [rbp-B0h] BYREF
  const void *Src; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v14[40]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = sub_1800A495C(a1, (__int64)a2);
  if ( v6 == -1 )
  {
    v9 = sub_18009BCB8(&Src, "ShaderFamily::SetOption() -- The option '", a2);
    v10 = sub_18002C218((__int64)v14, v9, "' cannot be set.");
    v11 = sub_18000FD48(v12);
    sub_180027FF4(pExceptionObject, v11, 696, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_1800A54D8(a1, v6, v7);
}
