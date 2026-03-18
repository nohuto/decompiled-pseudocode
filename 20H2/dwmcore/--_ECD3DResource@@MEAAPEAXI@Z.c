/*
 * XREFs of ??_ECD3DResource@@MEAAPEAXI@Z @ 0x1802363C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DResource@@MEAA@XZ @ 0x180038AB8 (--1CD3DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CD3DResource *__fastcall CD3DResource::`vector deleting destructor'(CD3DResource *this, char a2)
{
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
