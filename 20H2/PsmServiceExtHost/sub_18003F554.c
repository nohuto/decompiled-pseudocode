/*
 * XREFs of sub_18003F554 @ 0x18003F554
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 *     sub_1800425F4 @ 0x1800425F4 (sub_1800425F4.c)
 *     sub_180085694 @ 0x180085694 (sub_180085694.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003F554(ULONGLONG *CallbackContext, unsigned __int16 *a2, unsigned __int16 *a3)
{
  GUID v4; // xmm0
  signed int v5; // eax
  unsigned int v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v6;
}
