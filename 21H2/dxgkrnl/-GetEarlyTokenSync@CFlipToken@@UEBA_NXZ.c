/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C0005E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0005E60 (-GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  return CompositionSurfaceObject::GetEarlyTokenSync(*((CompositionSurfaceObject **)this + 4), *((_QWORD *)this + 5));
}
