/*
 * XREFs of sub_1800F1A40 @ 0x1800F1A40
 * Callers:
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 *     sub_1800F3438 @ 0x1800F3438 (sub_1800F3438.c)
 *     sub_1800F3468 @ 0x1800F3468 (sub_1800F3468.c)
 *     sub_1800F34A8 @ 0x1800F34A8 (sub_1800F34A8.c)
 *     sub_1800F34D4 @ 0x1800F34D4 (sub_1800F34D4.c)
 *     sub_1800F3504 @ 0x1800F3504 (sub_1800F3504.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F1A40(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v10[5]; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v11[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FE28(v9);
    v8 = sub_18000FE28(v10);
    sub_18002D8C4(v11, v8, 404, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v11;
  }
  v3 = *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
  if ( (_WORD)v3 == 0xFFFF )
  {
    v5 = sub_18002C814(v10, a2);
    v6 = sub_1800494AC(
           (__int64)v11,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           (__int64)v5);
    v7 = sub_18000FE28(v9);
    sub_18002D8C4(pExceptionObject, v7, 407, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(56 * v3 + *(_QWORD *)(a1 + 56) + 40);
}
