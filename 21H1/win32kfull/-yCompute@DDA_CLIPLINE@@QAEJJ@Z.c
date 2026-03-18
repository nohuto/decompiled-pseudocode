/*
 * XREFs of ?yCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x2387D6
 * Callers:
 *     ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x2383C7 (-vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z.c)
 * Callees:
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __thiscall DDA_CLIPLINE::yCompute(DDA_CLIPLINE *this, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax

  v3 = *((int *)this + 3) * (__int64)(a2 - *((_DWORD *)this + 1));
  v4 = *((_DWORD *)this + 4);
  v5 = *((_QWORD *)this + 3) + v3;
  if ( v5 >= 0xFFFFFFFFLL )
    v5 /= (unsigned __int64)v4;
  else
    LODWORD(v5) = (unsigned int)v5 / v4;
  return v5 + *((_DWORD *)this + 2);
}
