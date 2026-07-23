/*
 * XREFs of HalpHvLpReadMcaStatusMsr @ 0x1404C2428
 * Callers:
 *     HalpHvEpReadMsr @ 0x1404C21A0 (HalpHvEpReadMsr.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     HalpHvLpReadMultipleMsr @ 0x1404C24EC (HalpHvLpReadMultipleMsr.c)
 */

char __fastcall HalpHvLpReadMcaStatusMsr(unsigned int a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // rsi

  v8 = 0;
  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
  {
    if ( a2 < 0xC0002000 )
      return v8;
    v9 = (a2 + 1073733632) >> 4;
  }
  else
  {
    if ( a2 < 0x401 )
      return v8;
    v9 = (a2 - 1025) >> 2;
  }
  if ( (unsigned int)v9 < HalpHvMcaBankCount )
  {
    v10 = *a3;
    if ( *a3 )
    {
LABEL_11:
      v8 = 1;
      *a4 = *(_QWORD *)(v10 + 8 * v9);
      return v8;
    }
    v10 = HalpHvMcaStatusCache + 8LL * a1 * HalpHvMcaBankCount;
    if ( (int)HalpHvLpReadMultipleMsr(a1, (unsigned int)HalpHvMcaBankCount, HalpHvMcaStatusMsrIndices, v10) >= 0 )
    {
      *a3 = v10;
      goto LABEL_11;
    }
  }
  return v8;
}
