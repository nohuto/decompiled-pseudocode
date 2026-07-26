/*
 * XREFs of ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010115C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C010171C (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116470 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0124A78 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0125420 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0100F20 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01010E4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C01018A0 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C0101DB8 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadString(
        NetSetupPropertyBag *a1,
        const struct _NETSETUPPROPKEY *a2,
        void **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _WORD *v8; // rax
  __int64 v9; // rcx
  struct Rtl::KString *v10; // rax
  void *v11; // rcx
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-10h] BYREF
  struct KRegKey v14; // [rsp+68h] [rbp+38h] BYREF

  v14.m_ptr = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, &v14);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v13 = 0LL;
      v7 = 0x7FFFLL;
      v8 = &unk_1C00C9700;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
      v9 = (0x7FFF - v7) & -(__int64)(v7 != 0);
      if ( v7 )
      {
        v13.Buffer = (wchar_t *)&unk_1C00C9700;
        v13.Length = 2 * v9;
        v13.MaximumLength = 2 * v9 + 2;
        v10 = Rtl::KString::Initialize(&v13);
      }
      else
      {
        v10 = 0LL;
      }
      v11 = *a3;
      *a3 = v10;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x7274534Bu);
        v10 = (struct Rtl::KString *)*a3;
      }
      v6 = v10 == 0LL ? 0xC000009A : 0;
    }
  }
  else if ( !v5 )
  {
    v13 = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&v14, &v13, a3);
  }
  if ( v14.m_ptr )
  {
    *(_QWORD *)&v13.Length = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v13, &v14);
  }
  return v6;
}
