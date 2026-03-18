/*
 * XREFs of ??_ECD2DResource@@MEAAPEAXI@Z @ 0x1802384A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DResource@@MEAA@XZ @ 0x180046A98 (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CD2DResource *__fastcall CD2DResource::`vector deleting destructor'(CD2DResource *this, char a2)
{
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
