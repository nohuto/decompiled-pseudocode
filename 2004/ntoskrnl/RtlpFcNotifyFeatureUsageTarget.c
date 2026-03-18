/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x140916598
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x1409166F8 (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1403F6220 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  _DWORD *PoolWithTag; // rdi
  int WnfStateData; // ebx
  unsigned int i; // ecx
  _DWORD v7[2]; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = *a2;
  v7[1] = a2[1];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6E6F6346u);
  if ( PoolWithTag )
  {
    do
    {
      WnfStateData = ZwQueryWnfStateData((__int64)v7, 0LL);
      if ( WnfStateData >= 0 )
      {
        for ( i = 0; i < 0x200; ++i )
        {
          if ( PoolWithTag[2 * i] == *(_DWORD *)a1 && LOWORD(PoolWithTag[2 * i + 1]) == *(_WORD *)(a1 + 4) )
            break;
        }
        WnfStateData = ZwUpdateWnfStateData((__int64)v7, (__int64)PoolWithTag);
      }
    }
    while ( WnfStateData == -1073741823 );
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateData;
}
