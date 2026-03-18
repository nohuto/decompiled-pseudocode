/*
 * XREFs of ??_ECD3DResource@@MEAAPEAXI@Z @ 0x180237350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800B2DF8 (--1CD3DResource@@MEAA@XZ.c)
 */

CD3DResource *__fastcall CD3DResource::`vector deleting destructor'(CD3DResource *this, char a2)
{
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
