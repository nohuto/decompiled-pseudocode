/*
 * XREFs of ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C008B984
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E4C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 */

void NdisTraceLoggingRareFeaturePath()
{
  int v0; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR v1; // [rsp+38h] [rbp-40h] BYREF
  int *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C00E30F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00E30F8, 0x400000000000LL) )
    {
      v0 = 0;
      v4 = 0;
      v2 = &v0;
      v3 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C00E30F8,
        (unsigned __int8 *)dword_1C00CF487,
        0LL,
        0LL,
        3u,
        &v1);
    }
  }
}
