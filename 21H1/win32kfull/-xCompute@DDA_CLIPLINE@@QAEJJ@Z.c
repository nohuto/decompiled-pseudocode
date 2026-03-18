/*
 * XREFs of ?xCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x23878E
 * Callers:
 *     ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x238330 (-vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 * Callees:
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __thiscall DDA_CLIPLINE::xCompute(DDA_CLIPLINE *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rax

  v3 = a2 - *((_DWORD *)this + 2);
  v4 = *((_DWORD *)this + 3);
  v5 = *((int *)this + 4) * (__int64)(v3 + 1) - *((_QWORD *)this + 3) - 1;
  if ( v5 >= 0xFFFFFFFFLL )
    v5 /= (unsigned __int64)v4;
  else
    LODWORD(v5) = (unsigned int)v5 / v4;
  return v5 + *((_DWORD *)this + 1);
}
