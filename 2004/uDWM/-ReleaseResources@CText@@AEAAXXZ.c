/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x1800153A4
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800166F4 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x18003C220 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CText::ReleaseResources(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[49];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[49] = 0LL;
  }
}
