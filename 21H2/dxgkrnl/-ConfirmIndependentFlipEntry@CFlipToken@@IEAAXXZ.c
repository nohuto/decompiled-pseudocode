/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0006A80
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0006830 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipToken::ConfirmIndependentFlipEntry(CFlipToken *this)
{
  if ( *((_BYTE *)this + 561) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 561) = 0;
  }
}
