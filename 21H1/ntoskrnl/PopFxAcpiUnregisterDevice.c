/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x1405786F8
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405781D8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140237750 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403978E0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1403C9340 (PopFxDestroyDeviceCommon.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     PopFxRemoveAcpiDevice @ 0x140566904 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x14057A11C (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x140734340 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v2 = (struct _IO_REMOVE_LOCK *)(P + 272);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 272), (PVOID)0x72466F50, &Src, 1u, 0x20u);
  if ( !(unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
  {
    v6 = *((_QWORD *)P + 6);
    if ( v6 )
      PoFxAbandonDevice();
  }
  if ( *((char **)P + 25) != P + 200 )
    PopFxRemoveAcpiDevice(v6, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 206, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P, 2);
  return v5;
}
