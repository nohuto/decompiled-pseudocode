/*
 * XREFs of sub_18009EBA0 @ 0x18009EBA0
 * Callers:
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18009EBA0(_QWORD *a1, _DWORD *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // r10
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  int v15; // r8d
  _QWORD *result; // rax

  v10 = operator new(0x1CuLL);
  v11 = v10;
  if ( v10 )
  {
    v12 = *a4;
    v13 = *a3;
    v14 = *a6;
    v15 = *a5;
    *v10 = *a2;
    v10[2] = 1;
    v10[3] = 1;
    v10[1] = v13;
    v10[4] = v12;
    v10[5] = v15;
    v10[6] = v14;
  }
  else
  {
    v11 = 0LL;
  }
  result = a1;
  *a1 = v11;
  return result;
}
