/*
 * XREFs of ?IsEmptyDrawing@CSceneWorld@@UEBA_NXZ @ 0x180208BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneWorld::IsEmptyDrawing(CSceneWorld *this)
{
  return *((_QWORD *)this + 10) == 0LL;
}
