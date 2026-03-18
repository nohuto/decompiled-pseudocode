/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014C7C
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C00159CC (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0013F78 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0014000 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0014BB8 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014E04 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z @ 0x1C0053BBC (-InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z.c)
 */

__int64 __fastcall FxTimer::Initialize(
        FxTimer *this,
        _FX_DRIVER_GLOBALS *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int Size; // eax
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  void (__fastcall *v12)(struct _EX_TIMER *, void *); // r8
  int v13; // r9d
  MxTimer *p_m_Timer; // rcx
  int v15; // eax
  unsigned int v16; // esi
  FxDeviceBase *v17; // rax
  _WDF_EXECUTION_LEVEL Lock; // esi
  int EffectiveLock; // edi
  int v20; // eax
  void **v21; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Period = Config->Period;
  Size = Config->Size;
  if ( Config->Size > 0x18 )
  {
    this->m_TolerableDelay = Config->TolerableDelay;
    Size = Config->Size;
  }
  if ( Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xDu);
  p_m_Timer = &this->m_Timer;
  if ( IsVersionGreaterThanOrEqualTo )
    v15 = MxTimer::InitializeEx(p_m_Timer, this, v12, v13, this->m_TolerableDelay, this->m_UseHighResolutionTimer);
  else
    v15 = MxTimer::Initialize(
            p_m_Timer,
            this,
            (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerDpcThunk,
            v13);
  v16 = v15;
  if ( v15 < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, v15);
    return v16;
  }
  else
  {
    FxObject::AddRef(this, this, 191, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
    v17 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
    this->m_DeviceBase = v17;
    if ( v17 )
    {
      Lock = Attributes->DestroyEvent.m_Event.Header.Lock;
      EffectiveLock = FxObject::_GetEffectiveLock(
                        ParentObject,
                        pCallbacks,
                        Config->AutomaticSerialization,
                        Lock == WdfExecutionLevelPassive,
                        &this->m_CallbackLock,
                        &this->m_CallbackLockObject);
      if ( EffectiveLock < 0 )
      {
        if ( EffectiveLock == -1071644148 )
          WPP_IFR_SF_qL(
            m_Globals,
            2u,
            0x12u,
            0xCu,
            WPP_FxTimer_cpp_Traceguids,
            Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink,
            0xC020020C);
      }
      else
      {
        if ( Lock != WdfExecutionLevelPassive
          || (v20 = FxSystemWorkItem::_Create(
                      m_Globals,
                      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                      &this->m_SystemWorkItem),
              EffectiveLock = v20,
              v20 >= 0) )
        {
          FxObject::AddRef(ParentObject, this, 299, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
          v21 = (void **)Timer;
          this->m_Object = ParentObject;
          return FxObject::Commit(this, Attributes, v21, ParentObject, 1u);
        }
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v20);
      }
      return (unsigned int)EffectiveLock;
    }
    else
    {
      return 3221225488LL;
    }
  }
}
