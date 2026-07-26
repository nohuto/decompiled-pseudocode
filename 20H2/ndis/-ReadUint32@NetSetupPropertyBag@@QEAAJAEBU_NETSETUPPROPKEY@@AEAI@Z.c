/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0101918
 * Callers:
 *     ndisLWMGetConfigurationStore @ 0x1C00F8694 (ndisLWMGetConfigurationStore.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010115C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0114E30 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     GetPkeyName @ 0x1C0101CE8 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C0101DB8 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C0101DFC (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(void ***this, const struct _NETSETUPPROPKEY *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  KRegKey v9; // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall *v10[3])(_QWORD); // [rsp+28h] [rbp-41h] BYREF
  wchar_t v11[48]; // [rsp+40h] [rbp-29h] BYREF

  v9.m_ptr = 0LL;
  GetPkeyName(a2, v11);
  v6 = KRegKey::Open(&v9, 1u, v11, **this);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      v7 = 0;
    }
  }
  else if ( !v6 )
  {
    *(_OWORD *)v10 = 0LL;
    v7 = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&v9, v10, a3);
  }
  if ( v9.m_ptr )
  {
    v10[0] = (__int64 (__fastcall *)(_QWORD))ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(v10, &v9);
  }
  return v7;
}
