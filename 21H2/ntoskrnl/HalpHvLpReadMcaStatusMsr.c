/*
 * XREFs of HalpHvLpReadMcaStatusMsr @ 0x14050E638
 * Callers:
 *     HalpHvEpReadMsr @ 0x14050E360 (HalpHvEpReadMsr.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpHvLpReadMultipleMsr @ 0x14050E6FC (HalpHvLpReadMultipleMsr.c)
 */

char __fastcall HalpHvLpReadMcaStatusMsr(unsigned int a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v8; // bl
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdi

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
  v10 = v9;
  if ( v9 < HalpHvMcaBankCount )
  {
    v11 = *a3;
    if ( *a3 )
    {
LABEL_11:
      v8 = 1;
      *a4 = *(_QWORD *)(v11 + 8LL * v10);
      return v8;
    }
    v11 = HalpHvMcaStatusCache + 8LL * a1 * HalpHvMcaBankCount;
    if ( (int)HalpHvLpReadMultipleMsr(a1, (unsigned int)HalpHvMcaBankCount, HalpHvMcaStatusMsrIndices, v11) >= 0 )
    {
      *a3 = v11;
      goto LABEL_11;
    }
  }
  return v8;
}
