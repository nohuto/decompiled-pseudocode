/*
 * XREFs of _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0
 * Callers:
 *     _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0 (_RtlWaitForWnfMetaNotification@24.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 * Callees:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 *     _RtlDllShutdownInProgress@0 @ 0x4B2DF490 (_RtlDllShutdownInProgress@0.c)
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 */

int __stdcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v3 = 0;
  *((_DWORD *)a1 + 12) = &v4;
  RtlpRemoveUserSubFromNameSub(*((PVOID *)a1 + 3), a1, (int)&v2);
  do
  {
    if ( RtlDllShutdownInProgress() )
      break;
    RtlpWaitOnAddress(4, 0, RtlpWaitOnAddressSpinCycleCount);
    v3 = v4;
  }
  while ( !v4 );
  return 0;
}
