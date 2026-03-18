/*
 * XREFs of ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C01AB1D4
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AB08C (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ConvertCoordinates @ 0x1C01AB5B0 (ConvertCoordinates.c)
 */

__int64 __fastcall GetAdjustedHimetricWithoutRoundTripError(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  _DWORD *v12; // r11
  int v13; // ebx
  int v14; // r10d
  _DWORD *v15; // r11
  int v16; // eax
  LONG plResult; // [rsp+30h] [rbp-18h] BYREF
  LONG v19[5]; // [rsp+34h] [rbp-14h] BYREF

  plResult = 0;
  v19[0] = 0;
  *a8 = a6;
  if ( !a7 )
    return 1LL;
  if ( (unsigned int)ConvertCoordinates(0, a2 - a1, 0, a4 - a3, a7, &plResult) )
  {
    v13 = plResult + a6;
    *v12 = plResult + a6;
    if ( (unsigned int)ConvertCoordinates(a3, a4, a1, a2, v13, v19) )
    {
      if ( v19[0] != v14 + a5 )
      {
        v16 = 1;
        if ( v14 <= 0 )
          v16 = -1;
        *v15 = v13 + v16;
      }
      return 1LL;
    }
  }
  return 0LL;
}
