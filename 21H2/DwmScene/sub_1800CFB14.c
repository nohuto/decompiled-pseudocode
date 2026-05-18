/*
 * XREFs of sub_1800CFB14 @ 0x1800CFB14
 * Callers:
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800CFD28 @ 0x1800CFD28 (sub_1800CFD28.c)
 *     sub_1800CFEC0 @ 0x1800CFEC0 (sub_1800CFEC0.c)
 *     sub_1800CFFF4 @ 0x1800CFFF4 (sub_1800CFFF4.c)
 * Callees:
 *     sub_1800CF150 @ 0x1800CF150 (sub_1800CF150.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CFB14(_QWORD *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rdi
  int v12; // ebx

  v11 = operator new(0x28uLL);
  if ( v11 )
  {
    v12 = *a7;
    sub_1800CF150((__int64)v11, *a2, *a3, *a4, *a5, *a6);
    *(_QWORD *)v11 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    v11[8] = v12;
  }
  else
  {
    v11 = 0LL;
  }
  *a1 = v11;
  return a1;
}
