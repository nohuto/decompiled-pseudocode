/*
 * XREFs of ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C001D184
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C001D0E8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 */

__int64 __fastcall FxWmiProvider::AddInstanceLocked(
        FxWmiProvider *this,
        FxWmiInstance *Instance,
        unsigned __int8 NoErrorIfPresent,
        unsigned __int8 *Update,
        FxWmiProvider::AddInstanceAction Action)
{
  _LIST_ENTRY *p_m_ListEntry; // r10
  _LIST_ENTRY *p_m_InstanceListHead; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rcx
  const void *_a1; // rax
  __int64 v12; // r11
  unsigned int _a2; // ebx
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl

  p_m_ListEntry = &Instance->m_ListEntry;
  *Update = 0;
  if ( p_m_ListEntry->Flink == p_m_ListEntry )
  {
    if ( this->m_Parent->m_RegisteredState == WmiRegistered )
    {
      *Update = 1;
LABEL_4:
      p_m_InstanceListHead = &this->m_InstanceListHead;
      if ( Action )
      {
        Flink = p_m_InstanceListHead->Flink;
        if ( p_m_InstanceListHead->Flink->Blink == p_m_InstanceListHead )
        {
          p_m_ListEntry->Flink = Flink;
          Instance->m_ListEntry.Blink = p_m_InstanceListHead;
          Flink->Blink = p_m_ListEntry;
          p_m_InstanceListHead->Flink = p_m_ListEntry;
          goto LABEL_7;
        }
      }
      else
      {
        Blink = this->m_InstanceListHead.Blink;
        if ( Blink->Flink == p_m_InstanceListHead )
        {
          p_m_ListEntry->Flink = p_m_InstanceListHead;
          Instance->m_ListEntry.Blink = Blink;
          Blink->Flink = p_m_ListEntry;
          this->m_InstanceListHead.Blink = p_m_ListEntry;
LABEL_7:
          ++this->m_NumInstances;
          this->m_RemoveGuid = 0;
          return 0LL;
        }
      }
      __fastfail(3u);
    }
    if ( this->m_Parent->m_RegisteredState != WmiCleanedUp )
      goto LABEL_4;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Instance);
    _a2 = -1073741436;
    v14 = 17;
    v15 = 4;
  }
  else
  {
    if ( NoErrorIfPresent )
      return 0LL;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Instance);
    _a2 = -1073741808;
    v14 = 16;
    v15 = 2;
  }
  WPP_IFR_SF_qL(*(_FX_DRIVER_GLOBALS **)(v12 + 16), v15, 0x12u, v14, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2);
  return _a2;
}
