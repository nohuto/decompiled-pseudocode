/*
 * XREFs of _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C001A290
 * Callers:
 *     <none>
 * Callees:
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A2E0 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_(
        struct RawInputManagerDeviceObject *a1,
        int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]

  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v3 = *((_DWORD *)a1 + 18);
      v4[0] = 1;
      v4[1] = v3;
      v5 = 0LL;
      ((void (__fastcall *)(struct RawInputManagerDeviceObject *, _QWORD, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
        a1,
        0LL,
        v4,
        24LL);
    }
  }
  else
  {
    CDeviceIdentity::SendNewIdentityCreated(a1, a1);
  }
}
