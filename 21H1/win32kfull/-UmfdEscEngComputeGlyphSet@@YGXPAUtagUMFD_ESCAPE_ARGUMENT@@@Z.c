/*
 * XREFs of ?UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xDFBB0
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _EngComputeGlyphSet@12 @ 0xDFC3C (_EngComputeGlyphSet@12.c)
 *     ?WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z @ 0xE0034 (-WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall UmfdEscEngComputeGlyphSet(int this)
{
  INT *v1; // esi
  FD_GLYPHSET *v2; // edi
  struct _FD_GLYPHSET *v3; // [esp+0h] [ebp-2Ch]
  unsigned int v4; // [esp+4h] [ebp-28h]

  v1 = (INT *)(this + 4);
  ProbeForWrite(*(volatile void **)(this + 16), *(_DWORD *)(this + 20), 4u);
  v2 = EngComputeGlyphSet(*v1, v1[1], v1[2]);
  if ( v2 )
  {
    *v1 = v2->cjThis;
    if ( !v1[3] )
    {
LABEL_6:
      EngFreeMem(v2);
      return;
    }
    if ( v2->cjThis <= v1[4] )
    {
      if ( !WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v2->cjThis, v3, v4) )
        *v1 = 0;
      goto LABEL_6;
    }
    EngFreeMem(v2);
  }
  *v1 = 0;
}
