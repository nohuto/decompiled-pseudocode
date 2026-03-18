/*
 * XREFs of RIMIDECheckScanTimeSupport @ 0x1C0169560
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0165BE8 (rimHidP_GetSpecificValueCaps.c)
 */

int __fastcall RIMIDECheckScanTimeSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int result; // eax
  unsigned __int16 v5[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_VALUE_CAPS v6; // [rsp+50h] [rbp-68h] BYREF

  v5[0] = 1;
  memset(&v6, 0, sizeof(v6));
  result = rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &v6, v5, a2);
  if ( result >= 0 )
  {
    result = v6.LogicalMax;
    if ( v6.LogicalMin < v6.LogicalMax && v6.LogicalMin >= 0 && v6.LogicalMax >= 0xFFFF )
    {
      *(_DWORD *)(a1 + 312) |= 0x80u;
      *(_DWORD *)(a1 + 840) = result;
    }
  }
  return result;
}
