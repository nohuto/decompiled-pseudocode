/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x1C0056A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E638 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0056594 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  FxObject *ObjectFromHandle; // rax
  void **v5; // r9
  const void *_a1; // r10
  _WDF_OBJECT_ATTRIBUTES *v7; // r11
  unsigned int v8; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 offset; // [rsp+58h] [rbp+10h] BYREF

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  offset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle(Handle, &offset);
  if ( offset )
  {
    v8 = -1073741767;
    WPP_IFR_SF_qL(ObjectFromHandle->m_Globals, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, _a1, 0xC0000039);
  }
  else
  {
    return (unsigned int)FxObjectAllocateContext(ObjectFromHandle, v7, 0, v5);
  }
  return v8;
}
