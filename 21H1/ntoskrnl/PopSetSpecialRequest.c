/*
 * XREFs of PopSetSpecialRequest @ 0x1408DD27C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PopDiagTracePowerRequestChange @ 0x14033D6A4 (PopDiagTracePowerRequestChange.c)
 *     Feature_Servicing_25906437__private_IsEnabled @ 0x1403F0F38 (Feature_Servicing_25906437__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x1406E8CD0 (PsChargeProcessWakeCounter.c)
 *     PopReleasePowerRequestPushLock @ 0x140700294 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, void *a3)
{
  char v6; // r14
  NTSTATUS v7; // ebx
  PVOID v8; // rsi
  unsigned __int64 v9; // r15
  void *v10; // rcx
  char v11; // si
  __int64 v12; // rcx
  PVOID v13; // r14
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v6 = 0;
  if ( (unsigned int)Feature_Servicing_25906437__private_IsEnabled() )
  {
    if ( a2 == 3 )
    {
      v7 = ObReferenceObjectByHandleWithTag(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, 0x72506F50u, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v8 = Object;
        v9 = PsChargeProcessWakeCounter((__int64)Object, 0, 3u, a1);
        PopAcquirePowerRequestPushLock(1);
        if ( *(_QWORD *)(a1 + 120) )
        {
          v6 = 1;
          v7 = -1073741811;
        }
        else
        {
          *(_QWORD *)(a1 + 120) = v8;
          *(_QWORD *)(a1 + 128) = v9;
          ++*(_DWORD *)(a1 + 44);
          PopDiagTracePowerRequestChange(a1);
          v7 = 0;
        }
        PopReleasePowerRequestPushLock();
        if ( v6 )
          PsReleaseProcessWakeCounter(v9, a1);
        v10 = v8;
LABEL_21:
        ObfDereferenceObjectWithTag(v10, 0x72506F50u);
        return (unsigned int)v7;
      }
      return (unsigned int)v7;
    }
    return (unsigned int)-1073741811;
  }
  v11 = 0;
  if ( a2 != 3 )
    return (unsigned int)-1073741811;
  v7 = ObReferenceObjectByHandleWithTag(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, 0x72506F50u, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( qword_140C54350 )
    {
      LOBYTE(v12) = 1;
      qword_140C54350(v12);
      v11 = 1;
    }
    PopAcquirePowerRequestPushLock(1);
    v13 = Object;
    if ( *(_QWORD *)(a1 + 120) )
    {
      v7 = -1073741811;
    }
    else
    {
      *(_BYTE *)(a1 + 112) = v11;
      *(_QWORD *)(a1 + 120) = v13;
      v11 = 0;
      ++*(_DWORD *)(a1 + 44);
      PopDiagTracePowerRequestChange(a1);
      v7 = 0;
    }
    PopReleasePowerRequestPushLock();
    if ( v11 )
      qword_140C54350(0LL);
    v10 = v13;
    goto LABEL_21;
  }
  return (unsigned int)v7;
}
