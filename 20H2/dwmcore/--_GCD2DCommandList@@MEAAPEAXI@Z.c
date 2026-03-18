/*
 * XREFs of ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x180248790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1802486CC (--1CD2DCommandList@@MEAA@XZ.c)
 */

CD2DCommandList *__fastcall CD2DCommandList::`scalar deleting destructor'(CD2DCommandList *this, char a2)
{
  CD2DCommandList::~CD2DCommandList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
