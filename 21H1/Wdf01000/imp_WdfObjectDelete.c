/*
 * XREFs of imp_WdfObjectDelete @ 0x1C0003EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Object)
{
  __int64 Offset; // r8
  FxObject *v4; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObject *pObject; // [rsp+58h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  pObject = 0LL;
  if ( !Object )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  v4 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxObject *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4096 )
  {
    pObject = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pObject, (void *)Object, 0x1000u, Offset);
    v4 = pObject;
  }
  m_Globals = v4->m_Globals;
  if ( (v4->m_ObjectFlags & 2) != 0 )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0xCu, WPP_FxObjectAPI_cpp_Traceguids, (const void *)Object, 0xC0000121);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v4->DeleteObject(v4);
  }
}
