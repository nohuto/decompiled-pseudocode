/*
 * XREFs of ?bContain@ERECTL@@QBEHABU_RECTL@@@Z @ 0x1CCAF3
 * Callers:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1CC939 (--0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall ERECTL::bContain(ERECTL *this, const struct _RECTL *a2)
{
  return *(_DWORD *)this <= a2->left
      && *((_DWORD *)this + 2) >= a2->right
      && *((_DWORD *)this + 1) <= a2->top
      && *((_DWORD *)this + 3) >= a2->bottom;
}
