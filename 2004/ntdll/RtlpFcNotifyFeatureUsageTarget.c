/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x18010D9B4
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x18010DB24 (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x18009FA60 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1800A07C0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1)
{
  __int64 Heap; // rdi
  int WnfStateData; // ebx
  unsigned int i; // ecx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
  if ( Heap )
  {
    do
    {
      WnfStateData = ZwQueryWnfStateData();
      if ( WnfStateData >= 0 )
      {
        for ( i = 0; i < 0x200; ++i )
        {
          if ( *(_DWORD *)(Heap + 8LL * i) == *(_DWORD *)a1 && *(_WORD *)(Heap + 8LL * i + 4) == *(_WORD *)(a1 + 4) )
            break;
        }
        WnfStateData = ZwUpdateWnfStateData();
      }
    }
    while ( WnfStateData == -1073741823 );
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateData;
}
