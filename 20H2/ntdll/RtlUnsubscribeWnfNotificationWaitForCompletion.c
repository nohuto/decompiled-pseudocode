/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180062680
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800624C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCtContextFree @ 0x180102668 (RtlpCtContextFree.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800626EC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWaitOnAddress @ 0x1800636B4 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)a1 + 11) = &v2;
  RtlpRemoveUserSubFromNameSub(*((PVOID *)a1 + 3), a1);
  do
  {
    if ( byte_18016C508 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCycleCount);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
