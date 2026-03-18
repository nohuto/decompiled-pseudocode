/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0017668
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002D18 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002F18 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0010C88 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C0017B28 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018170 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018234 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C0018608 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqq @ 0x1C006E194 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  int _a2; // ebp
  FxEnumerationInfo *m_EnumInfo; // rdi
  char v8; // r13
  unsigned int v9; // esi
  FxTransactionedList *p_m_ChildListList; // rdi
  FxTransactionedEntry *v11; // r14
  FxTransactionedEntry *NextEntryLocked; // rax
  int v13; // eax
  int v14; // r12d
  FxTransactionedEntry *v15; // r14
  FxTransactionedEntry *v16; // rax
  const void *v18; // rax
  int *_a3; // rdx
  _DEVICE_RELATIONS *v20; // r11
  unsigned int Count; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v23; // rax
  const void *v24; // rdx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v26; // r10
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r9d
  _DEVICE_RELATIONS *pRelations; // [rsp+90h] [rbp+8h] BYREF
  FxObject *p_Blink; // [rsp+98h] [rbp+10h]

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, BusRelations);
  _a2 = 0;
  m_EnumInfo = this->m_EnumInfo;
  v8 = 0;
  v9 = 2;
  pRelations = (_DEVICE_RELATIONS *)Irp->m_Irp->IoStatus.Information;
  if ( !m_EnumInfo )
    goto LABEL_14;
  p_m_ChildListList = &m_EnumInfo->m_ChildListList;
  FxTransactionedList::LockForEnum(p_m_ChildListList, this->m_Globals);
  v11 = 0LL;
  if ( p_m_ChildListList )
  {
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v11);
      v11 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      p_Blink = (FxObject *)&NextEntryLocked[-3].m_TransactionLink.Blink;
      v13 = FxChildList::ProcessBusRelations((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink, &pRelations);
      v14 = v13;
      if ( v13 != -1073741637 )
      {
        if ( v13 < 0 )
        {
          FxObject::GetObjectHandleUnchecked(p_Blink);
          v23 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xCu, 0x16u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v23, v24, v14);
          _a2 = v14;
          goto LABEL_12;
        }
        v8 = 1;
      }
    }
  }
  v15 = 0LL;
  if ( !p_m_ChildListList )
    goto LABEL_13;
  while ( 1 )
  {
    v16 = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v15);
    v15 = v16;
    if ( !v16 )
      break;
    FxChildList::InvokeReportedMissingCallback((FxChildList *)&v16[-3].m_TransactionLink.Blink);
  }
LABEL_12:
  FxTransactionedList::UnlockFromEnum(p_m_ChildListList, this->m_Globals);
  if ( _a2 >= 0 )
  {
LABEL_13:
    if ( !v8 )
LABEL_14:
      _a2 = Irp->m_Irp->IoStatus.Status;
  }
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)pRelations;
  Irp->m_Irp->IoStatus.Status = _a2;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qL(v26, 5u, 0xCu, 0x17u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  }
  if ( _a2 >= 0 )
  {
    if ( pRelations )
    {
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qdq(this->m_Globals, 4u, 0xCu, 0x18u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v18, *_a3, _a3);
      v20 = pRelations;
      Count = pRelations->Count;
      if ( pRelations->Count )
      {
        do
        {
          m_Globals = this->m_Globals;
          if ( !m_Globals->FxVerboseOn )
            break;
          v27 = v9 + 1;
          v28 = v9 - 1;
          v29 = v9 - 2;
          if ( (unsigned int)v27 >= Count )
          {
            if ( v9 >= Count )
            {
              if ( (unsigned int)v28 >= Count )
                WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x1Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v20->Objects[v29]);
              else
                WPP_IFR_SF_qq(
                  m_Globals,
                  5u,
                  0xCu,
                  0x1Bu,
                  (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                  v20->Objects[v29],
                  v20->Objects[v28]);
            }
            else
            {
              WPP_IFR_SF_qqq(
                this->m_Globals,
                5u,
                0xCu,
                0x1Au,
                (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                v20->Objects[v29],
                v20->Objects[v28],
                v20[v9 / 2].Objects[0]);
            }
          }
          else
          {
            WPP_IFR_SF_qqqq(
              this->m_Globals,
              5u,
              0xCu,
              0x19u,
              (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
              v20->Objects[v29],
              v20->Objects[v28],
              v20[v9 / 2].Objects[0],
              v20->Objects[v27]);
          }
          v20 = pRelations;
          v9 += 4;
          Count = pRelations->Count;
        }
        while ( v9 - 2 < pRelations->Count );
      }
    }
  }
  return (unsigned int)_a2;
}
