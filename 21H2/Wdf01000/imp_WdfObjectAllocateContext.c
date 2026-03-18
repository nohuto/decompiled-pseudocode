/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x1C00213C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  FxObject *v4; // r10
  unsigned int v5; // ebx
  __int64 v7; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v4 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 && (v7 = LOWORD(v4->__vftable), v4 = (FxObject *)((char *)v4 - v7), (_WORD)v7) )
  {
    v5 = -1073741767;
    WPP_IFR_SF_qL(v4->m_Globals, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, (const void *)Handle, 0xC0000039);
  }
  else
  {
    return (unsigned int)FxObjectAllocateContext(v4, Attributes, 0, Context);
  }
  return v5;
}
