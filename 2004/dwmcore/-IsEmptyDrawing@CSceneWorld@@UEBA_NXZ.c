/*
 * XREFs of ?IsEmptyDrawing@CSceneWorld@@UEBA_NXZ @ 0x18020AA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneWorld::IsEmptyDrawing(CSceneWorld *this)
{
  return *((_QWORD *)this + 10) == 0LL;
}
