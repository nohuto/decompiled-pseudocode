/*
 * XREFs of ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C00049B4
 * Callers:
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00030C0 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004764 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxFileObject::_DestroyFileObject(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject)
{
  __int32 v3; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int FileObjectFromWdm; // eax
  _QWORD *FsContext; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  FxFileObject *pfo; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  pfo = 0LL;
  v3 = FileObjectClass & 0x7FFFFFFF;
  m_Globals = pDevice->m_Globals;
  if ( v3 == 1 )
    return;
  if ( pWdmFileObject )
  {
    if ( v3 == 2 )
    {
      FsContext = pWdmFileObject->FsContext;
      pWdmFileObject->FsContext = 0LL;
      goto LABEL_11;
    }
    if ( v3 == 3 )
    {
      FsContext = pWdmFileObject->FsContext2;
      pWdmFileObject->FsContext2 = 0LL;
      goto LABEL_11;
    }
LABEL_5:
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          pDevice,
                          WdfFileObjectWdfCannotUseFsContexts,
                          pWdmFileObject,
                          &pfo);
    FsContext = &pfo->FxNonPagedObject::FxObject::__vftable;
    if ( FileObjectFromWdm >= 0 && pfo )
    {
LABEL_7:
      irql = 0;
      FxNonPagedObject::Lock(pDevice, &irql);
      v9 = FsContext[18];
      if ( *(_QWORD **)(v9 + 8) != FsContext + 18 || (v10 = (_QWORD *)FsContext[19], (_QWORD *)*v10 != FsContext + 18) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      FxNonPagedObject::Unlock(pDevice, irql);
      (*(void (__fastcall **)(_QWORD *))(*FsContext + 48LL))(FsContext);
      return;
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
LABEL_11:
    if ( !FsContext )
      return;
    goto LABEL_7;
  }
  if ( v3 == 4 )
    goto LABEL_5;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
    m_Globals = pDevice->m_Globals;
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
