/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18004249C
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x180042450 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpFcStartSubscriptionManager @ 0x180044E6C (RtlpFcStartSubscriptionManager.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180063B70 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpCtContextInit @ 0x1801021B4 (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425EC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004276C (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042910 (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     RtlpCreateSerializationGroup @ 0x180044D4C (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800625DC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180063AD8 (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        PVOID *a1,
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
  NTSTATUS WnfUserSubscription; // edi
  PVOID *v15; // rbx
  PVOID v16; // rax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF

  BaseAddress = 0LL;
  SerializationGroup = 0LL;
  if ( byte_18016A508 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(&stru_18016B4A0, RtlpInitializeWnf, 0LL, 0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription(
                                (unsigned int)&BaseAddress,
                                a3,
                                a4,
                                a5,
                                SerializationGroup,
                                a8,
                                a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v19, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = BaseAddress;
        }
        else
        {
          v15 = (PVOID *)BaseAddress;
          *a1 = BaseAddress;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v19, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(v15[3], v15);
          }
          v16 = 0LL;
          BaseAddress = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
