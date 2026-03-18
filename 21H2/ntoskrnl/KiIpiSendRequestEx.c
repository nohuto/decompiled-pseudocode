/*
 * XREFs of KiIpiSendRequestEx @ 0x1402F42D4
 * Callers:
 *     KxFlushNonGlobalTb @ 0x14023F108 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     KxFlushSingleTb @ 0x1402EA7E4 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x1402F411C (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402F4380 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        __int64 a7)
{
  int v8; // r11d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx

  v8 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_3:
      result = (__int64)a6;
      if ( a6 )
        return a6(a7);
      return result;
    }
  }
  else if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  KiIpiSendRequest(a1, a2, v8, a4, a5);
  if ( a6 )
    a6(a7);
  v16 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 11648);
    if ( !(_DWORD)result )
      break;
    if ( (++v16 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v14, v15) )
    {
      HvlNotifyLongSpinWait(v16);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
