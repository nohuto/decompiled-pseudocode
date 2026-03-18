/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C000B380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqcLq @ 0x1C000B5D4 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C000F5E0 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C000F6B4 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0011DD4 (WPP_IFR_SF_qqcq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned __int8 MinorFunction; // r10
  FxPkgPnp_vtbl *v6; // rcx
  __int64 v7; // rax
  const void *_a5; // rax
  const void *id; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const void *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r11
  const void *v16; // rdx
  char v17; // r10
  const void *v18; // rax
  __int64 v19; // r8
  const void *v20; // rdx
  char v21; // r10
  const void *v22; // rax
  __int64 v23; // r11
  const void *flags; // rdx
  unsigned int v25; // r8d
  __int64 v26; // r9
  char level; // r10
  const void *v28; // rax
  __int64 v29; // r8
  const void *v30; // rdx
  char v31; // r10
  _FX_DRIVER_GLOBALS *v32; // r11
  const void *ObjectHandleUnchecked; // rax
  __int64 v34; // r8
  const void *v35; // rdx
  char v36; // r10
  _FX_DRIVER_GLOBALS *v37; // r11
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  _IRP *v39; // [rsp+70h] [rbp+10h] BYREF

  v39 = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = v39;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( MinorFunction && MinorFunction != 2 )
    {
      if ( !this->m_Globals->FxVerboseOn )
      {
LABEL_21:
        v6 = this->__vftable;
        if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction <= 3u )
        {
          v7 = (__int64)v6->GetDispatchPower(this);
          return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v7
                                                                + 8LL
                                                                * v39->Tail.Overlay.CurrentStackLocation->MinorFunction))(
                   this,
                   &v39);
        }
        return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v6->FireAndForgetIrp)(this, &v39);
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqcq(
        v37,
        5u,
        0xCu,
        0x15u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v34 + 144),
        v36,
        v35);
    }
    else if ( CurrentStackLocation->Parameters.Create.Options )
    {
      v22 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqcqL(
        this->m_Globals,
        (unsigned __int8)flags,
        v25,
        v26,
        traceGuid,
        v22,
        *(const void **)(v23 + 144),
        level,
        flags,
        *(_DWORD *)(v26 + 24));
    }
    else
    {
      v13 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqcqLd(
        this->m_Globals,
        (unsigned __int8)v16,
        *(_DWORD *)(v14 + 24),
        v14,
        traceGuid,
        v13,
        *(const void **)(v15 + 144),
        v17,
        v16,
        *(_DWORD *)(v14 + 24),
        *(_DWORD *)(v14 + 24) - 1);
    }
    Irp = v39;
    goto LABEL_21;
  }
  if ( MinorFunction <= 6u )
    goto LABEL_23;
  if ( MinorFunction == 7 )
  {
    _a5 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcLq(
      this->m_Globals,
      (unsigned __int8)id,
      v11,
      v12,
      traceGuid,
      _a5,
      *(const void **)(v11 + 144),
      7,
      *(_DWORD *)(v12 + 8),
      id);
    goto LABEL_15;
  }
  if ( MinorFunction == 20 || MinorFunction == 17 || MinorFunction == 23 )
  {
LABEL_23:
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcq(
      this->m_Globals,
      4u,
      0xCu,
      0x10u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      v18,
      *(const void **)(v19 + 144),
      v21,
      v20);
    goto LABEL_15;
  }
  if ( !this->m_Globals->FxVerboseOn )
    goto LABEL_10;
  v28 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qqcq(
    v32,
    5u,
    0xCu,
    0x12u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    v28,
    *(const void **)(v29 + 144),
    v31,
    v30);
LABEL_15:
  Irp = v39;
LABEL_10:
  v6 = this->__vftable;
  if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v6->FireAndForgetIrp)(this, &v39);
  v7 = (__int64)v6->GetDispatchPnp(this);
  return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v7
                                                        + 8LL * v39->Tail.Overlay.CurrentStackLocation->MinorFunction))(
           this,
           &v39);
}
