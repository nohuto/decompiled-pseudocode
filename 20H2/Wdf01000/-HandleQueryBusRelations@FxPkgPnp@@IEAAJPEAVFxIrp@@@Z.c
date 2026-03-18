/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004568 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004A78 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qdq @ 0x1C000F940 (WPP_IFR_SF_qdq.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000FF64 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016EE8 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032328 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005A8EC (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  int _a2; // ebp
  FxTransactionedList *m_EnumInfo; // rdi
  char v8; // r13
  FxTransactionedEntry *v9; // r14
  unsigned int v10; // esi
  FxTransactionedEntry *NextEntryLocked; // rax
  int v12; // eax
  int v13; // r12d
  FxTransactionedEntry *v14; // r14
  FxTransactionedEntry *v15; // rax
  const void *v16; // rax
  int *_a3; // rdx
  _DEVICE_RELATIONS *v18; // r11
  unsigned int Count; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v22; // rax
  __int64 v23; // rdx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // r9d
  _DEVICE_RELATIONS *pRelations; // [rsp+90h] [rbp+8h] BYREF
  FxObject *p_Blink; // [rsp+98h] [rbp+10h]

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, BusRelations);
  _a2 = 0;
  m_EnumInfo = (FxTransactionedList *)this->m_EnumInfo;
  v8 = 0;
  pRelations = (_DEVICE_RELATIONS *)Irp->m_Irp->IoStatus.Information;
  if ( m_EnumInfo )
  {
    m_EnumInfo = (FxTransactionedList *)((char *)m_EnumInfo + 40);
    FxTransactionedList::LockForEnum(m_EnumInfo, this->m_Globals);
  }
  v9 = 0LL;
  v10 = 2;
  if ( m_EnumInfo )
  {
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(m_EnumInfo, v9);
      v9 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      p_Blink = (FxObject *)&NextEntryLocked[-3].m_TransactionLink.Blink;
      v12 = FxChildList::ProcessBusRelations((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink, &pRelations);
      v13 = v12;
      if ( v12 != -1073741637 )
      {
        if ( v12 < 0 )
        {
          FxObject::GetObjectHandleUnchecked(p_Blink);
          v22 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x16u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v22, v23, v13);
          _a2 = v13;
          goto LABEL_13;
        }
        v8 = 1;
      }
    }
  }
  v14 = 0LL;
  if ( !m_EnumInfo )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = FxTransactionedList::GetNextEntryLocked(m_EnumInfo, v14);
    v14 = v15;
    if ( !v15 )
      break;
    FxChildList::InvokeReportedMissingCallback((FxChildList *)&v15[-3].m_TransactionLink.Blink);
  }
LABEL_13:
  FxTransactionedList::UnlockFromEnum(m_EnumInfo, this->m_Globals);
  if ( _a2 >= 0 )
  {
LABEL_14:
    if ( !v8 )
      _a2 = Irp->m_Irp->IoStatus.Status;
  }
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)pRelations;
  Irp->m_Irp->IoStatus.Status = _a2;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qL(v25, 5u, 0xCu, 0x17u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  }
  if ( _a2 >= 0 )
  {
    if ( pRelations )
    {
      v16 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qdq(this->m_Globals, 4u, 0xCu, 0x18u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v16, *_a3, _a3);
      v18 = pRelations;
      Count = pRelations->Count;
      if ( pRelations->Count )
      {
        do
        {
          m_Globals = this->m_Globals;
          if ( !m_Globals->FxVerboseOn )
            break;
          v26 = v10 + 1;
          v27 = v10 - 1;
          v28 = v10 - 2;
          if ( (unsigned int)v26 >= Count )
          {
            if ( v10 >= Count )
            {
              if ( (unsigned int)v27 >= Count )
                WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x1Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v18->Objects[v28]);
              else
                WPP_IFR_SF_qq(
                  m_Globals,
                  5u,
                  0xCu,
                  0x1Bu,
                  (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                  v18->Objects[v28],
                  v18->Objects[v27]);
            }
            else
            {
              WPP_IFR_SF_qqq(
                this->m_Globals,
                5u,
                0xCu,
                0x1Au,
                (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
                v18->Objects[v28],
                v18->Objects[v27],
                v18[v10 / 2].Objects[0]);
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
              v18->Objects[v28],
              v18->Objects[v27],
              v18[v10 / 2].Objects[0],
              v18->Objects[v26]);
          }
          v18 = pRelations;
          v10 += 4;
          Count = pRelations->Count;
        }
        while ( v10 - 2 < pRelations->Count );
      }
    }
  }
  return (unsigned int)_a2;
}
