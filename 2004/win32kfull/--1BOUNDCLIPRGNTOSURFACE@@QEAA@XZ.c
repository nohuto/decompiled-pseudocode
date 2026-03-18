/*
 * XREFs of ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C0120C90
 * Callers:
 *     EngStrokePath @ 0x1C013BD70 (EngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE(BOUNDCLIPRGNTOSURFACE *this)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v1);
}
