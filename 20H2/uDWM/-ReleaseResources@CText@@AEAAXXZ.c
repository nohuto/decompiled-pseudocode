/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x180026470
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016924 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180029650 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
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
