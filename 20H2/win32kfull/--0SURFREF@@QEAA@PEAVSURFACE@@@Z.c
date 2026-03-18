/*
 * XREFs of ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C026D044
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00721AC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, struct SURFACE *a2)
{
  if ( a2 )
  {
    *(_QWORD *)this = a2;
    INC_SHARE_REF_CNT(a2);
  }
  return this;
}
