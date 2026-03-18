/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x1C002A158
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C00280E0 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 */

void __fastcall HUBDTX_CacheBillboardInfo(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  POOL_TYPE v6; // ecx
  PVOID v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x10uLL, 0x68334855u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = ExDefaultNonPagedPoolType;
    *(_OWORD *)PoolWithTag = 0LL;
    *((_BYTE *)PoolWithTag + 8) = -1;
    v7 = ExAllocatePoolWithTag(v6, *a2, 0x68334855u);
    *v5 = v7;
    if ( v7 )
    {
      memmove(v7, a2, *a2);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x5Bu,
          (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
      ExFreePoolWithTag(v5, 0x68334855u);
      v5 = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x5Au,
      (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
  }
  *(_QWORD *)(a1 + 2640) = v5;
}
