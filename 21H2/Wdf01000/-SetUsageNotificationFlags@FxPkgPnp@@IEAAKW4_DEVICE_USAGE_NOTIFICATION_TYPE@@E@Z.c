/*
 * XREFs of ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C001C77C
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C0010C50 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C001CB04 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C001CB3C (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C00895E0 (WPP_IFR_SF_dddDqqd.c)
 */

__int64 __fastcall FxPkgPnp::SetUsageNotificationFlags(FxPkgPnp *this, __int32 Type, unsigned __int8 InPath)
{
  int _a6; // esi
  _DEVICE_OBJECT *level; // r14
  unsigned int globals; // edi
  _WDF_SPECIAL_FILE_TYPE v8; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *flags; // rax
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  _FX_DRIVER_GLOBALS *v14; // r11
  __int64 v15; // rdx
  const _GUID *v16; // [rsp+20h] [rbp-48h]

  _a6 = InPath;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  globals = level->Flags;
  if ( this->m_Globals->FxVerboseOn )
  {
    flags = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_dddDqqd(
      v14,
      *(_BYTE *)(v12 + 218),
      (unsigned int)flags,
      v13,
      v16,
      Type,
      _a6,
      this->m_SpecialFileCount[Type - 1],
      globals,
      level,
      flags,
      *(unsigned __int8 *)(v12 + 218));
  }
  FxPkgPnp::AdjustUsageCount(this, (_DEVICE_USAGE_NOTIFICATION_TYPE)Type, _a6);
  v8 = FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)Type);
  if ( v8 == WdfSpecialFilePaging || (unsigned int)(v8 - 2) <= 1 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE1(m_DeviceBase[1].m_Globals) )
    {
      m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags = globals ^ ((unsigned __int16)globals ^ (unsigned __int16)m_DeviceBase->m_AttachedDevice.m_DeviceObject->Flags) & 0x6000;
    }
    else if ( (_BYTE)_a6 )
    {
      m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags &= ~0x2000u;
    }
    else if ( BYTE2(m_DeviceBase[1].m_Globals) && !FxPkgPnp::IsInSpecialUse(this) )
    {
      *(_DWORD *)(*(_QWORD *)(v15 + 144) + 48LL) |= 0x2000u;
    }
  }
  return globals;
}
