/*
 * XREFs of ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020F60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C00211E8 (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C0021280 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00225C0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C005A5D0 (WPP_IFR_SF_qid.c)
 */

int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // r8
  unsigned __int64 _a2; // rbx
  FxString *DeviceID; // rax
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v13; // rax
  FX_POOL **v14; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  FxString *v17; // rdx
  size_t Length; // rbx
  FxString *v19; // rdx
  size_t v20; // rbx
  unsigned __int8 Static; // al
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  int v23; // r8d
  FxChildList *m_DeviceList; // rcx
  FxString *v25; // rdx
  size_t v26; // rbx
  __m128i v27; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    v5 = FxCalculateTotalStringSize(&DeviceInit->Pdo.HardwareIDs, 0, 0LL);
    _a2 = FxCalculateTotalStringSize(&DeviceInit->Pdo.CompatibleIDs, v6, v7) + v5;
    DeviceID = DeviceInit->Pdo.DeviceID;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    m_Globals = this->m_Globals;
    v13 = retaddr;
    v27.m128i_i64[0] = 0LL;
    v27.m128i_i64[1] = 256LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v13 = 0LL;
    v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v27, _a2, m_Globals->Tag, v13);
    this->m_IDsAllocation = (wchar_t *)v14;
    if ( v14 )
    {
      this->m_HardwareIDs = (wchar_t *)v14;
      v15 = FxCopyMultiSz((wchar_t *)v14, &DeviceInit->Pdo.HardwareIDs);
      this->m_CompatibleIDs = v15;
      v16 = FxCopyMultiSz(v15, &DeviceInit->Pdo.CompatibleIDs);
      if ( DeviceInit->Pdo.DeviceID )
      {
        this->m_DeviceID = v16;
        v17 = DeviceInit->Pdo.DeviceID;
        Length = v17->m_UnicodeString.Length;
        memmove(v16, v17->m_UnicodeString.Buffer, Length);
        this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
        v16 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
      }
      if ( DeviceInit->Pdo.InstanceID )
      {
        this->m_InstanceID = v16;
        v19 = DeviceInit->Pdo.InstanceID;
        v20 = v19->m_UnicodeString.Length;
        memmove(v16, v19->m_UnicodeString.Buffer, v20);
        this->m_InstanceID[(unsigned __int64)(unsigned int)v20 >> 1] = 0;
        v16 = (wchar_t *)((char *)this->m_InstanceID + v20 + 2);
      }
      if ( DeviceInit->Pdo.ContainerID )
      {
        this->m_ContainerID = v16;
        v25 = DeviceInit->Pdo.ContainerID;
        v26 = v25->m_UnicodeString.Length;
        memmove(v16, v25->m_UnicodeString.Buffer, v26);
        this->m_ContainerID[v26 >> 1] = 0;
      }
      Static = DeviceInit->Pdo.Static;
      this->m_Static = Static;
      if ( Static )
      {
        v23 = 332;
        m_DeviceList = *(FxChildList **)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1696LL);
      }
      else
      {
        DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
        v23 = 338;
        this->m_Description = DescriptionEntry;
        m_DeviceList = DescriptionEntry->m_DeviceList;
      }
      this->m_OwningChildList = m_DeviceList;
      FxObject::AddRef(m_DeviceList, this, v23, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
      return 0;
    }
    else
    {
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        DeviceInit,
        _a2,
        -1073741670);
      return -1073741670;
    }
  }
  return result;
}
