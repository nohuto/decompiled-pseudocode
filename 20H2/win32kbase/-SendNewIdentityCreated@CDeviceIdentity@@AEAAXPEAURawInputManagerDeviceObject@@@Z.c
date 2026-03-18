/*
 * XREFs of ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0007950
 * Callers:
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C0007900 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 *     _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C00BE490 (_lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     GetKnownRIMDeviceKind @ 0x1C00079E8 (GetKnownRIMDeviceKind.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CDeviceIdentity::SendNewIdentityCreated(CDeviceIdentity *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int128 v4; // [rsp+20h] [rbp-30h]
  int v5; // [rsp+38h] [rbp-18h] BYREF
  __int64 v6; // [rsp+3Ch] [rbp-14h]
  int KnownRIMDeviceKind; // [rsp+44h] [rbp-Ch]
  __int64 v8; // [rsp+48h] [rbp-8h]

  v8 = 0LL;
  v4 = *((unsigned __int64 *)a2 + 9);
  v5 = 0;
  v6 = v4;
  KnownRIMDeviceKind = GetKnownRIMDeviceKind((char *)a2 + 88);
  if ( KnownRIMDeviceKind == 1 )
  {
    HIDWORD(v8) = 131073;
  }
  else if ( KnownRIMDeviceKind == 2 )
  {
    HIDWORD(v8) = 393217;
  }
  else
  {
    v2 = *(_QWORD *)(v3 + 552);
    WORD2(v8) = *(_WORD *)(v2 + 42);
    HIWORD(v8) = *(_WORD *)(v2 + 40);
  }
  InputExtensibilityCallout::CoreMsgSendMessage(v2, 0LL, &v5, 24LL, v4, *((_QWORD *)&v4 + 1));
}
