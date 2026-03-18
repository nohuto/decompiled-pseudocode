/*
 * XREFs of PiKsrInitialize @ 0x140A51560
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiKsrNotifyInitialize @ 0x140A8E7F0 (PiKsrNotifyInitialize.c)
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
