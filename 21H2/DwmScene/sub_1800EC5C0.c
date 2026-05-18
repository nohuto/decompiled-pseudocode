/*
 * XREFs of sub_1800EC5C0 @ 0x1800EC5C0
 * Callers:
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A8998 @ 0x1800A8998 (sub_1800A8998.c)
 */

__int64 __fastcall sub_1800EC5C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_180020B7C(v3, (__int64)&qword_180214038);
  sub_1800A8998(a1, v3);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
