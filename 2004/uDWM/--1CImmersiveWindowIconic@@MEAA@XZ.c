/*
 * XREFs of ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18008A978
 * Callers:
 *     ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x18008A9C0 (--_ECImmersiveWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImmersiveWindowIconic::~CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowIconic::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v3 )
    CBaseObject::Release(v3);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
