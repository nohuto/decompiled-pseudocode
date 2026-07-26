/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B94
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C01011F0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010158C (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C01017B0 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisIfReadHiddenFlag @ 0x1C0106C3C (ndisIfReadHiddenFlag.c)
 *     ndisIsBindPathEnabled @ 0x1C0124BE8 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01250A0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0125410 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x1C01255A8 (ndisReplaceBindTokens.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0101CE8 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     GetPkeyName @ 0x1C0101D7C (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C0101E4C (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C0101F74 (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(void ***this, const struct _NETSETUPPROPKEY *a2, bool *a3)
{
  void *m_ptr; // rbx
  void **v7; // rax
  __int64 v8; // rdx
  void *v9; // r9
  _WORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  KRegKey v16; // [rsp+20h] [rbp-59h] BYREF
  struct _UNICODE_STRING v17; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v18[96]; // [rsp+40h] [rbp-39h] BYREF

  m_ptr = 0LL;
  v16.m_ptr = 0LL;
  GetPkeyName(a2, v18);
  v7 = *this;
  v17 = 0LL;
  v8 = 0x7FFFLL;
  v9 = *v7;
  v10 = v18;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v8;
  }
  while ( v8 );
  v11 = (0x7FFF - v8) & -(__int64)(v8 != 0);
  v12 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
  {
    v17.Length = 2 * v11;
    v17.MaximumLength = 2 * v11 + 2;
    v17.Buffer = (wchar_t *)v18;
    v13 = KRegKey::Open(&v16, 1u, &v17, v9);
    m_ptr = v16.m_ptr;
    v12 = v13;
  }
  if ( v12 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      v12 = 0;
    }
  }
  else if ( !v12 )
  {
    v17 = 0LL;
    v14 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&v16, &v17, a3, v9);
    m_ptr = v16.m_ptr;
    v12 = v14;
  }
  if ( m_ptr )
  {
    *(_QWORD *)&v17.Length = ZwClose;
    v16.m_ptr = m_ptr;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v17, &v16);
  }
  return v12;
}
