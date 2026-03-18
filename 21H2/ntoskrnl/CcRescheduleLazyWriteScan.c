/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x140248B24
 * Callers:
 *     CcLazyWriteScan @ 0x140275670 (CcLazyWriteScan.c)
 *     CcCoalescingCallBackHelper @ 0x140538930 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1228) )
    return;
  if ( !*(_BYTE *)(a1 + 985) )
  {
    CcScheduleLazyWriteScan(a1, 0LL, 0LL, 0LL);
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
        goto LABEL_7;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 984) )
    KeBugCheckEx(0x34u, 0x3F8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 920), v3, 0, 0x3E8u, 0LL);
}
