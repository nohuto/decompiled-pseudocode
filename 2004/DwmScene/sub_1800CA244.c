/*
 * XREFs of sub_1800CA244 @ 0x1800CA244
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     sub_1800CA458 @ 0x1800CA458 (sub_1800CA458.c)
 *     sub_1800CA5F0 @ 0x1800CA5F0 (sub_1800CA5F0.c)
 *     sub_1800CA724 @ 0x1800CA724 (sub_1800CA724.c)
 * Callees:
 *     sub_1800C9880 @ 0x1800C9880 (sub_1800C9880.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CA244(_QWORD *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rdi
  int v12; // ebx

  v11 = operator new(0x28uLL);
  if ( v11 )
  {
    v12 = *a7;
    sub_1800C9880((__int64)v11, *a2, *a3, *a4, *a5, *a6);
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
