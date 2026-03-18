/*
 * XREFs of ?Confirm@CFlipContentToken@@UEAAXXZ @ 0x1C0082BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipContentToken::Confirm(CFlipContentToken *this)
{
  if ( *((_BYTE *)this + 305) )
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 39),
      *((_QWORD *)this + 13) - 1LL,
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 81),
      *((_QWORD *)this + 41));
  *((_DWORD *)this + 6) = 4;
}
