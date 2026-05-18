/*
 * XREFs of sub_1800CF0BC @ 0x1800CF0BC
 * Callers:
 *     sub_1800CF2E0 @ 0x1800CF2E0 (sub_1800CF2E0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800CF0BC(_QWORD *a1, int *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // r10
  int v11; // edx
  int v12; // ecx
  int v13; // r9d
  int v14; // r8d
  int v15; // eax
  _QWORD *result; // rax

  v10 = operator new(0x20uLL);
  if ( v10 )
  {
    v11 = *a4;
    v12 = *a3;
    v13 = *a6;
    v14 = *a5;
    v15 = *a2;
    *(_QWORD *)v10 = &Spectre::Engine::ArrayBufferDesc::`vftable';
    v10[2] = v15;
    v10[3] = v12;
    v10[4] = v11;
    v10[5] = v14;
    v10[6] = v13;
  }
  else
  {
    v10 = 0LL;
  }
  result = a1;
  *a1 = v10;
  return result;
}
