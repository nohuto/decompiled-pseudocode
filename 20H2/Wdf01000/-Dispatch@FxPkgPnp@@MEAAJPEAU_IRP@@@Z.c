/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C000CBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1C000CAD0 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C0013978 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C0013A4C (WPP_IFR_SF_qqcqLd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0040590 (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp, __int64 a3, unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int globals; // r11d
  _FX_DRIVER_GLOBALS *v8; // rcx
  __int64 v9; // rdi
  FxPkgPnp_vtbl *v10; // rax
  int (__fastcall *FireAndForgetIrp)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v13; // rdi
  unsigned int flags; // ecx
  _DEVICE_OBJECT *_a6; // r8
  const void *_a5; // rdi
  __int64 MinorFunction; // rdi
  FxPkgPnp_vtbl *v18; // rax
  const void *v19; // rdi
  _FX_DRIVER_GLOBALS *v20; // rcx
  FxDeviceBase *v21; // rcx
  const void *v22; // rdi
  FxDeviceBase *v23; // r8
  const void *v24; // rcx
  FxDeviceBase *v25; // r10
  const void *v26; // r8
  FxDeviceBase *m_DeviceBase; // r10
  const void *v28; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  _IRP *_a1; // [rsp+70h] [rbp+8h] BYREF

  _a1 = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00A9F68.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00A9F68.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = _a1;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  globals = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( (_BYTE)globals && (_BYTE)globals != 2 )
    {
      v20 = this->m_Globals;
      if ( !v20->FxVerboseOn )
      {
LABEL_18:
        MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v18 = this->__vftable;
        if ( (unsigned __int8)MinorFunction > 3u )
          FireAndForgetIrp = v18->FireAndForgetIrp;
        else
          FireAndForgetIrp = v18->GetDispatchPower(this)[MinorFunction];
        return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &_a1);
      }
      m_DeviceBase = this->m_DeviceBase;
      v28 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_qqcq(
        v20,
        5u,
        0xCu,
        0x15u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v28,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        globals,
        Irp);
    }
    else
    {
      v13 = this->m_DeviceBase;
      flags = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      _a6 = v13->m_DeviceObject.m_DeviceObject;
      if ( CurrentStackLocation->Parameters.Create.Options )
      {
        if ( v13->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        WPP_IFR_SF_qqcqL(
          this->m_Globals,
          (unsigned __int8)Irp,
          (unsigned int)_a6,
          a4,
          traceGuid,
          v19,
          _a6,
          globals,
          Irp,
          flags);
      }
      else
      {
        if ( v13->m_ObjectSize )
          _a5 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a5 = 0LL;
        WPP_IFR_SF_qqcqLd(
          this->m_Globals,
          (unsigned __int8)Irp,
          (unsigned int)_a6,
          a4,
          traceGuid,
          _a5,
          _a6,
          globals,
          Irp,
          flags,
          flags - 1);
      }
    }
    Irp = _a1;
    goto LABEL_18;
  }
  if ( globals < 8 || globals >= 0x11 )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 0x11u:
      case 0x14u:
      case 0x17u:
        v23 = this->m_DeviceBase;
        v24 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v23->m_ObjectSize )
          v24 = 0LL;
        WPP_IFR_SF_qqcq(
          this->m_Globals,
          4u,
          0xCu,
          0x10u,
          (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
          v24,
          v23->m_DeviceObject.m_DeviceObject,
          globals,
          Irp);
        goto LABEL_29;
      case 7u:
        v21 = this->m_DeviceBase;
        v22 = 0LL;
        if ( v21->m_ObjectSize )
          v22 = (const void *)((unsigned __int64)this->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqcLq(
          this->m_Globals,
          (unsigned __int8)Irp,
          (unsigned int)v21->m_DeviceObject.m_DeviceObject,
          CurrentStackLocation->Parameters.Read.Length,
          traceGuid,
          v22,
          v21->m_DeviceObject.m_DeviceObject,
          globals,
          CurrentStackLocation->Parameters.Read.Length,
          Irp);
        goto LABEL_29;
      default:
        break;
    }
  }
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
  {
    v25 = this->m_DeviceBase;
    v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v25->m_ObjectSize )
      v26 = 0LL;
    WPP_IFR_SF_qqcq(
      v8,
      5u,
      0xCu,
      0x12u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      v26,
      v25->m_DeviceObject.m_DeviceObject,
      globals,
      Irp);
LABEL_29:
    Irp = _a1;
  }
  v9 = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v10 = this->__vftable;
  if ( (unsigned __int8)v9 > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v10->FireAndForgetIrp)(this, &_a1);
  FireAndForgetIrp = v10->GetDispatchPnp(this)[v9];
  return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))FireAndForgetIrp)(this, &_a1);
}
