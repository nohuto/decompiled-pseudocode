/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0028C54
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x1C0020360 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0027CB0 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[257];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[330];
  if ( v3 )
  {
    if ( !*v3 || (ExFreePoolWithTag(*v3, 0x64334855u), (v3 = (PVOID *)a1[330]) != 0LL) )
      ExFreePoolWithTag(v3, 0x64334855u);
  }
  a1[257] = 0LL;
  a1[330] = 0LL;
  result = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 15, 0, 0);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0x3Du,
        (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
        v5);
    }
    return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
  return result;
}
