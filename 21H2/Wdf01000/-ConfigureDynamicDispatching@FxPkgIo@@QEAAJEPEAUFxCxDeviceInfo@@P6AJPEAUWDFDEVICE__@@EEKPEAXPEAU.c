/*
 * XREFs of ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C0074A60
 * Callers:
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C0047750 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002D650 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     WPP_IFR_SF_cd @ 0x1C0046B2C (WPP_IFR_SF_cd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C00751B4 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     WPP_IFR_SF_qcd @ 0x1C0075484 (WPP_IFR_SF_qcd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureDynamicDispatching(
        FxPkgIo *this,
        unsigned __int8 MajorFunction,
        FX_POOL *CxDeviceInfo,
        FX_POOL *EvtDeviceWdmIrpDispatch,
        FX_POOL *DriverContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v8; // eax
  unsigned __int8 v9; // dl
  char v10; // cl
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int v13; // ebx
  char OldIrql; // cl
  FX_POOL *i; // rsi
  _LIST_ENTRY *Blink; // rax
  FX_POOL **v17; // rax
  FX_POOL **v18; // rdi
  FxDriver *Flink; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v21; // dl
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  char id; // r10
  __int64 v25; // rcx
  FX_POOL *m_Lock; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-38h]
  int v29; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  v8 = FxIrpDynamicDispatchInfo::Mj2Index(MajorFunction);
  v12 = v8;
  if ( v8 >= 4 )
  {
    v13 = -1073741811;
    WPP_IFR_SF_cd(m_Globals, v9, 0xDu, 0x15u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, v10);
    return v13;
  }
  if ( CxDeviceInfo )
    OldIrql = CxDeviceInfo->PagedLock.m_Lock.OldIrql;
  else
    OldIrql = 0;
  for ( i = *(FX_POOL **)(v11 + 376); ; i = *(FX_POOL **)&i->NonPagedLock.m_DbgFlagIsInitialized )
  {
    if ( i == (FX_POOL *)(v11 + 376) )
    {
LABEL_13:
      v17 = FxPoolAllocator(
              m_Globals,
              &m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x58uLL,
              m_Globals->Tag,
              retaddr);
      v18 = v17;
      if ( v17 )
      {
        `vector constructor iterator'(
          (char *)v17 + 16,
          0x10uLL,
          4uLL,
          (void *(__fastcall *)(void *))FxIrpDynamicDispatchInfo::Info::Info);
        v18[10] = 0LL;
        v18[1] = (FX_POOL *)v18;
        *v18 = (FX_POOL *)v18;
        memset(v18 + 2, 0, 0x40uLL);
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v13 = -1073741670;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x17u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, -1073741670);
        return v13;
      }
      v18[10] = CxDeviceInfo;
      v25 = 2 * v12;
      v18[v25 + 3] = DriverContext;
      v18[v25 + 2] = EvtDeviceWdmIrpDispatch;
      m_Lock = (FX_POOL *)i->NonPagedLock.m_Lock;
      if ( *(FX_POOL **)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized != i )
        __fastfail(3u);
      *v18 = i;
      v18[1] = m_Lock;
      *(_QWORD *)&m_Lock->NonPagedLock.m_DbgFlagIsInitialized = v18;
      i->NonPagedLock.m_Lock = (unsigned __int64)v18;
      return 0;
    }
    Blink = i->PagedLock.m_Lock.Event.Header.WaitListHead.Blink;
    if ( Blink )
      LOBYTE(Blink) = Blink[5].Blink;
    if ( OldIrql == (_BYTE)Blink )
      break;
    if ( OldIrql > (char)Blink )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)&i->NonPagedHead.Flink + 2 * v12) )
  {
    *((_QWORD *)&i->NonPagedHead.Blink + 2 * v12) = DriverContext;
    *((_QWORD *)&i->NonPagedHead.Flink + 2 * v12) = EvtDeviceWdmIrpDispatch;
    return 0;
  }
  v13 = -1073741811;
  if ( CxDeviceInfo )
    Flink = (FxDriver *)CxDeviceInfo->NonPagedHead.Flink;
  else
    Flink = *(FxDriver **)(*(_QWORD *)(v11 + 96) + 136LL);
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Flink);
  WPP_IFR_SF_qcd(m_Globals, v21, v22, v23, _a1, ObjectHandleUnchecked, id, v29);
  return v13;
}
