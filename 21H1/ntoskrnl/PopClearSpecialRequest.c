/*
 * XREFs of PopClearSpecialRequest @ 0x1408DCE8C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x14033D6A4 (PopDiagTracePowerRequestChange.c)
 *     Feature_Servicing_25906437__private_IsEnabled @ 0x1403F0F38 (Feature_Servicing_25906437__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     PopReleasePowerRequestPushLock @ 0x140700294 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  __int64 v4; // rbp
  char v5; // si
  __int64 v6; // rax
  unsigned int v7; // ebx
  char v8; // si

  if ( (unsigned int)Feature_Servicing_25906437__private_IsEnabled() )
  {
    if ( a2 == 3 )
    {
      v4 = 0LL;
      v5 = 0;
      PopAcquirePowerRequestPushLock(1);
      v6 = *(_QWORD *)(a1 + 128);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 128) = 0LL;
        *(_QWORD *)(a1 + 120) = 0LL;
        v4 = v6;
        --*(_DWORD *)(a1 + 44);
        v5 = 1;
        PopDiagTracePowerRequestChange(a1);
        v7 = 0;
      }
      else
      {
        v7 = -1073741811;
      }
      PopReleasePowerRequestPushLock();
      if ( v5 )
        PsReleaseProcessWakeCounter(v4, a1);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 != 3 )
    return (unsigned int)-1073741811;
  v8 = 0;
  PopAcquirePowerRequestPushLock(1);
  if ( *(_QWORD *)(a1 + 120) )
  {
    v8 = *(_BYTE *)(a1 + 112);
    if ( v8 )
      *(_BYTE *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 120) = 0LL;
    --*(_DWORD *)(a1 + 44);
    PopDiagTracePowerRequestChange(a1);
    v7 = 0;
  }
  else
  {
    v7 = -1073741811;
  }
  PopReleasePowerRequestPushLock();
  if ( v8 )
    ((void (__fastcall *)(_QWORD))qword_140C54350)(0LL);
  return v7;
}
