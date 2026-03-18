/*
 * XREFs of _GetPenHoldTime@0 @ 0x16FBC4
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YGHXZ @ 0xAEF40 (-LoadPointerDevicePenSettings@@YGHXZ.c)
 */

struct tagDEVICECONFIG_SETTING *__stdcall GetPenHoldTime()
{
  struct tagDEVICECONFIG_SETTING *result; // eax

  if ( !gPenMonitor && !LoadPointerDevicePenSettings() )
    return off_266020[16];
  result = off_266020[17];
  if ( result == (struct tagDEVICECONFIG_SETTING *)-1 )
    return off_266020[16];
  return result;
}
