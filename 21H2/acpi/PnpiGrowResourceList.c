/*
 * XREFs of PnpiGrowResourceList @ 0x1C009CBF8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x1C0016F28 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016FF8 (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BF88 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(const void **a1, int *a2, __int64 a3)
{
  int v3; // ebx
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( *a1 && (v8 = *a2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x20u, v9);
    result = ACPIInternalGrowBuffer(a1, 8 * v8, 8 * v8 + 64);
    if ( (int)result >= 0 )
      v3 = v8 + 8;
    *a2 = v3;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x1Fu, v9);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      *a2 = 8;
      memset(PoolWithTag, 0, 0x40uLL);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
