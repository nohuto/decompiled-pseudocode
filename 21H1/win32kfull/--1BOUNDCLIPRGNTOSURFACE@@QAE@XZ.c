/*
 * XREFs of ??1BOUNDCLIPRGNTOSURFACE@@QAE@XZ @ 0x1CCADC
 * Callers:
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 * Callees:
 *     <none>
 */

void __thiscall BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE(BOUNDCLIPRGNTOSURFACE *this)
{
  int v1; // [esp+0h] [ebp-4h] BYREF

  v1 = *((_DWORD *)this + 31);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v1);
}
