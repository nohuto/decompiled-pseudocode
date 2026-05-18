/*
 * XREFs of sub_1800AACF0 @ 0x1800AACF0
 * Callers:
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     sub_1800C4CFC @ 0x1800C4CFC (sub_1800C4CFC.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800AA22C @ 0x1800AA22C (sub_1800AA22C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800AACF0(__int64 a1, _QWORD *a2, char a3)
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

  v6 = sub_1800AA22C(a1, (__int64)a2);
  if ( v6 == -1 )
  {
    v9 = sub_1800A1588(&Src, "ShaderFamily::SetOption() -- The option '", a2);
    v10 = sub_180031AE8((__int64)v14, v9, "' cannot be set.");
    v11 = sub_18000FE28(v12);
    sub_18002D8C4(pExceptionObject, v11, 696, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_1800AADA8(a1, v6, v7);
}
