/*
 * XREFs of GetPixelSizeInBytes @ 0x1C02D6568
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall GetPixelSizeInBytes(int a1)
{
  if ( a1 < 21 )
    goto LABEL_9;
  if ( a1 > 22 )
  {
    if ( a1 <= 30 )
    {
LABEL_9:
      WdLogSingleEntry1(1LL, 7251LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid D3D Pixel format!", 7251LL, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    if ( a1 > 33 && a1 != 35 )
    {
      if ( a1 == 36 || a1 == 113 )
        return 8LL;
      if ( a1 != 119 )
        goto LABEL_9;
    }
  }
  return 4LL;
}
