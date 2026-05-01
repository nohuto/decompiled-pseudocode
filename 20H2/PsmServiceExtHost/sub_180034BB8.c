/*
 * XREFs of sub_180034BB8 @ 0x180034BB8
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 *     sub_18002ABE0 @ 0x18002ABE0 (sub_18002ABE0.c)
 * Callees:
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 */

BOOLEAN __fastcall sub_180034BB8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

  if ( a1[15] )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v2 = a1[12];
  if ( v2 )
    TpReleaseWork(v2);
  v3 = a1[13];
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = (void *)a1[14];
  if ( v4 )
    NtClose(v4);
  sub_180034D90(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
