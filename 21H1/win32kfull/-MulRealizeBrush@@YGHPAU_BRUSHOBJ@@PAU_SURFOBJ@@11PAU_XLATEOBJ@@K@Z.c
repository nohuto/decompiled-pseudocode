/*
 * XREFs of ?MulRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x203B8D
 * Callers:
 *     <none>
 * Callees:
 *     _BRUSHOBJ_pvAllocRbrush@8 @ 0x1CC83F (_BRUSHOBJ_pvAllocRbrush@8.c)
 */

BOOL __stdcall MulRealizeBrush(
        BRUSHOBJ *pbo,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // edx

  v6 = *((_DWORD *)a2->dhpdev + 2);
  return v6 > 1
      && v6 - 1 <= 0x1FFFFFFF
      && 8 * (v6 - 1) + 12 >= 8 * (v6 - 1)
      && BRUSHOBJ_pvAllocRbrush(pbo, 8 * v6 + 4) != 0;
}
