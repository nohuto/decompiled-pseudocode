/*
 * XREFs of ??_ECD2DResource@@MEAAPEAXI@Z @ 0x180239430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DResource@@MEAA@XZ @ 0x18003EC24 (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

CD2DResource *__fastcall CD2DResource::`vector deleting destructor'(CD2DResource *this, char a2)
{
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
