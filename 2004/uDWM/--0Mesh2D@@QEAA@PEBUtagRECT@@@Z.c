/*
 * XREFs of ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x1800A3EE8
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800A4A40 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A55C4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A790 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

Mesh2D *__fastcall Mesh2D::Mesh2D(Mesh2D *this, const struct tagRECT *a2)
{
  Mesh2D *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0xCu);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 0x10u);
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 4u);
  *((_DWORD *)this + 30) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 96, 4u);
  result = this;
  *((_DWORD *)this + 32) = 1056964608;
  return result;
}
