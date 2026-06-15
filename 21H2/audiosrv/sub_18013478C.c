/*
 * XREFs of sub_18013478C @ 0x18013478C
 * Callers:
 *     sub_18013438E @ 0x18013438E (sub_18013438E.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_18013478C(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = &off_18014B148;
  *a1 = &off_18014B148;
  if ( a1[1] )
    return (__int64 (__fastcall **)())RtlUnsubscribeWnfNotificationWaitForCompletion();
  return result;
}
