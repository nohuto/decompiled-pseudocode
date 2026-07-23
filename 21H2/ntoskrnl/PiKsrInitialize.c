/*
 * XREFs of PiKsrInitialize @ 0x140A541E8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiKsrNotifyInitialize @ 0x140A92350 (PiKsrNotifyInitialize.c)
 */

__int64 PiKsrInitialize()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v2) >= 0 )
  {
    PnpKsrEnabled = 1;
    return (unsigned int)PiKsrNotifyInitialize();
  }
  else
  {
    PnpKsrEnabled = 0;
  }
  return v0;
}
