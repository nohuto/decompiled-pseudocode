/*
 * XREFs of ?CompleteIndependentFlipNotifyToken@CFlipToken@@UEAAXXZ @ 0x1C00262E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipToken::CompleteIndependentFlipNotifyToken(CFlipToken *this)
{
  if ( *((_BYTE *)this + 556) )
    *((_BYTE *)this + 560) = 1;
}
