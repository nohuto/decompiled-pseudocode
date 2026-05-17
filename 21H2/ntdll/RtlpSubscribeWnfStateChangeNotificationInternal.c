/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x180042460 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpFcStartSubscriptionManager @ 0x180044E7C (RtlpFcStartSubscriptionManager.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180065170 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpCtContextInit @ 0x180102564 (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425FC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042920 (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     RtlpCreateSerializationGroup @ 0x180044D5C (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180063BDC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800650D8 (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // rsi
  int WnfUserSubscription; // edi
  __int64 v15; // rbx
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_18016C508 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(&unk_18016D4F0, RtlpInitializeWnf, 0LL, 0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v19, a3, a4, a5, SerializationGroup, a8, a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v20, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = v19;
        }
        else
        {
          v15 = v19;
          *a1 = v19;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v20, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(*(_QWORD *)(v15 + 24), v15, v18);
          }
          v16 = 0LL;
          v19 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)WnfUserSubscription;
}
