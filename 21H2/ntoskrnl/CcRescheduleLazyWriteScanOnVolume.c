/*
 * XREFs of CcRescheduleLazyWriteScanOnVolume @ 0x14053D99C
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x140538930 (CcCoalescingCallBackHelper.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcScheduleLazyWriteScanVolume @ 0x14053DA58 (CcScheduleLazyWriteScanVolume.c)
 */

void __fastcall CcRescheduleLazyWriteScanOnVolume(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1172) )
    return;
  if ( !*(_BYTE *)(a1 + 985) )
  {
    CcScheduleLazyWriteScanVolume(a1, 0LL, 0LL);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * (unsigned int)KeMaximumIncrement;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = CcIdleDelay;
      if ( v3.QuadPart <= 0 )
        goto LABEL_16;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_16:
  if ( !*(_BYTE *)(a1 + 984) )
    KeBugCheckEx(0x34u, 0x6FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 920), v3, 0, 0x3E8u, 0LL);
}
