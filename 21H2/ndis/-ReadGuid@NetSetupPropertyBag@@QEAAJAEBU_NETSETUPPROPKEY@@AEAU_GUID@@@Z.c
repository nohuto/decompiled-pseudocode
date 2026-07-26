/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0100D80
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C0026E00 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0101900 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C0101E18 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C01221E0 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        struct _GUID *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct KRegKey v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  v8.m_ptr = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, &v8);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v6 = 0;
      *a3 = 0LL;
    }
  }
  else if ( !v5 )
  {
    v9 = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(&v8, &v9, a3);
  }
  if ( v8.m_ptr )
  {
    *(_QWORD *)&v9 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v8);
  }
  return v6;
}
