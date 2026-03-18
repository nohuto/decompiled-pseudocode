/*
 * XREFs of FxIoResourceListInsertDescriptor @ 0x1C006F410
 * Callers:
 *     imp_WdfIoResourceListAppendDescriptor @ 0x1C006F850 (imp_WdfIoResourceListAppendDescriptor.c)
 *     imp_WdfIoResourceListInsertDescriptor @ 0x1C006F9A0 (imp_WdfIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C001DF70 (--0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C00720DC (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  FxResourceIo *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxIoResList *pList; // [rsp+70h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( (pList->m_OwningList->m_AccessFlags & 1) != 0 )
  {
    *(_QWORD *)&v13.UsePoolType = 0LL;
    v13.u.PoolFlags = 64LL;
    v9 = (FxResourceIo *)FxObjectHandleAllocCommon(m_Globals, &v13, 0xA8uLL, 0, 0LL, 0, FxObjectTypeInternal);
    if ( v9 && (FxResourceIo::FxResourceIo(v9, m_Globals, Descriptor), (v11 = v10) != 0LL) )
    {
      v12 = FxObject::AssignParentObject(v10, pList);
      if ( v12 >= 0 )
      {
        result = FxResourceCollection::AddAt(pList, Index, v11);
        if ( result >= 0 )
          pList->m_OwningList->m_Changed = 1;
      }
      else
      {
        v11->DeleteObject(v11);
        return v12;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741790;
  }
  return result;
}
