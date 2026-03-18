/*
 * XREFs of PnpiGrowResourceList @ 0x1C0098040
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x1C0022D48 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0022E18 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098CDC (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(__int64 *a1, int *a2, __int64 a3)
{
  int v3; // ebx
  __int64 Pool2; // rax
  __int64 result; // rax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( *a1 && (v8 = *a2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x20u, v9);
    result = ACPIInternalGrowBuffer(a1, (unsigned int)(8 * v8), (unsigned int)(8 * v8 + 64));
    if ( (int)result >= 0 )
      v3 = v8 + 8;
    *a2 = v3;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x1Fu, v9);
    Pool2 = ExAllocatePool2(256LL, 64LL, 1383097153LL);
    *a1 = Pool2;
    if ( Pool2 )
    {
      *a2 = 8;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
