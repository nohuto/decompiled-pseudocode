/*
 * XREFs of ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013F9F0
 * Callers:
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1801401B0 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1801402E8 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013CD20 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 */

unsigned __int64 __fastcall SystemCursor::GetAndValidateDefaultShapeId(SystemCursor *this)
{
  __int64 v3; // rcx

  if ( SystemCursor::ShapeExists(this, 32512LL) )
    return 32512LL;
  v3 = *((_QWORD *)this + 4);
  if ( *(_QWORD *)v3 == v3 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)v3 + 32LL);
}
