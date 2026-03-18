/*
 * XREFs of FxGetDevicePropertyString @ 0x1C0071310
 * Callers:
 *     LogDriverInfoStream @ 0x1C0071780 (LogDriverInfoStream.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 */

void __fastcall FxGetDevicePropertyString(FxDevice *Fdo, __int32 DeviceProperty, _UNICODE_STRING *PropertyString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  DEVICE_REGISTRY_PROPERTY v6; // edx
  FxObject *v7; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r15
  const void *_a1; // rax
  NTSTATUS v10; // eax
  unsigned __int8 v11; // dl
  ULONG Tag; // ecx
  void *v13; // rax
  unsigned __int8 v14; // dl
  FX_POOL_TRACKER *v15; // rdi
  NTSTATUS v16; // eax
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // cx
  unsigned __int64 v19; // rdx
  __m128i v20; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int length; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = Fdo->m_Globals;
  length = 0;
  *PropertyString = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Fdo);
  if ( SafePhysicalDevice )
  {
    v10 = IoGetDeviceProperty(SafePhysicalDevice, v6, 0, 0LL, &length);
    if ( v10 == -1073741789 )
    {
      Tag = m_Globals->Tag;
      v13 = retaddr;
      v20.m128i_i64[0] = 0LL;
      v20.m128i_i64[1] = 256LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v13 = 0LL;
      v15 = (FX_POOL_TRACKER *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v20, length, Tag, v13);
      if ( v15 )
      {
        v16 = IoGetDeviceProperty(SafePhysicalDevice, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, length, v15, &length);
        if ( v16 >= 0 )
        {
          v18 = length;
          PropertyString->Buffer = (wchar_t *)v15;
          PropertyString->MaximumLength = v18;
          v19 = (unsigned __int16)(v18 - 2);
          PropertyString->Length = v19;
          *((_WORD *)&v15->Link.Flink + (v19 >> 1)) = 0;
        }
        else
        {
          WPP_IFR_SF_DDd(m_Globals, v17, 0x12u, 0x13u, WPP_FxTelemetryKm_cpp_Traceguids, length, DeviceProperty, v16);
          FxPoolFree(v15);
        }
      }
      else
      {
        WPP_IFR_SF_DDd(
          m_Globals,
          v14,
          0x12u,
          0x12u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          DeviceProperty,
          length,
          -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v11, 0x12u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, v10);
    }
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v7);
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x10u, WPP_FxTelemetryKm_cpp_Traceguids, _a1, 0xC0000010);
  }
}
