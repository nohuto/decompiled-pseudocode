/*
 * XREFs of HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0027FDC
 * Callers:
 *     HUBDSM_GettingAlternateBOSDescriptor @ 0x1C001FF20 (HUBDSM_GettingAlternateBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0027800 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetBOSDescriptorUsingControlTransfer(__int64 a1)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-20h]

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a1 + 1734), 0x64334855u);
  *(_QWORD *)(a1 + 2056) = PoolWithTag;
  if ( PoolWithTag )
  {
    result = HUBDTX_GetDescriptor(a1, (__int64)PoolWithTag, *(unsigned __int16 *)(a1 + 1734), 15, 0, 0);
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x34u,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
    LODWORD(result) = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x35u,
      (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
      v4);
  }
  return HUBSM_AddEvent(a1 + 504, 4004);
}
