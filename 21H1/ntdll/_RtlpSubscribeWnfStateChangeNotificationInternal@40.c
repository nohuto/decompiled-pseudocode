/*
 * XREFs of _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F
 * Callers:
 *     _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5 (_RtlpFcStartSubscriptionManager@4.c)
 *     _RtlSubscribeWnfStateChangeNotification@36 @ 0x4B2B0660 (_RtlSubscribeWnfStateChangeNotification@36.c)
 *     _RtlRegisterForWnfMetaNotification@24 @ 0x4B33BF80 (_RtlRegisterForWnfMetaNotification@24.c)
 *     _RtlpCtContextInit@8 @ 0x4B369E6A (_RtlpCtContextInit@8.c)
 * Callees:
 *     _RtlpDecrementWnfSerializationGroup@4 @ 0x4B2AC0B6 (_RtlpDecrementWnfSerializationGroup@4.c)
 *     _RtlpCreateSerializationGroup@4 @ 0x4B2ADE05 (_RtlpCreateSerializationGroup@4.c)
 *     _RtlpAddWnfUserSubToNameSub@8 @ 0x4B2B0767 (_RtlpAddWnfUserSubToNameSub@8.c)
 *     _RtlpCreateWnfNameSubscription@16 @ 0x4B2B088D (_RtlpCreateWnfNameSubscription@16.c)
 *     _RtlpCreateWnfUserSubscription@28 @ 0x4B2B09B0 (_RtlpCreateWnfUserSubscription@28.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 */

int __thiscall RtlpSubscribeWnfStateChangeNotificationInternal(
        void *this,
        int a2,
        int a3,
        int a4,
        void *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  char *SerializationGroup; // edi
  NTSTATUS WnfUserSubscription; // esi
  int v12[2]; // [esp+10h] [ebp-8h] BYREF

  v12[0] = (int)this;
  SerializationGroup = 0;
  if ( byte_4B3A5DA8 )
    return -1073741558;
  WnfUserSubscription = RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)RtlpInitializeWnf, 0, 0);
  if ( WnfUserSubscription >= 0 )
  {
    if ( !a5 || (SerializationGroup = (char *)RtlpCreateSerializationGroup(a5)) != 0 )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription(a2, a3, SerializationGroup, a6, a7);
      if ( WnfUserSubscription >= 0 )
      {
        SerializationGroup = 0;
        WnfUserSubscription = RtlpCreateWnfNameSubscription(a8, a9);
        if ( WnfUserSubscription >= 0 )
        {
          *(_DWORD *)v12[0] = 0;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v12[1], 0);
          if ( WnfUserSubscription < 0 )
          {
            *(_DWORD *)v12[0] = 0;
            RtlpRemoveUserSubFromNameSub(MEMORY[0xC], 0, (int)v12);
          }
        }
      }
      if ( SerializationGroup )
        RtlpDecrementWnfSerializationGroup(SerializationGroup);
    }
    else
    {
      return -1073741801;
    }
  }
  return WnfUserSubscription;
}
