/*
 * XREFs of sub_180138128 @ 0x180138128
 * Callers:
 *     sub_18013411C @ 0x18013411C (sub_18013411C.c)
 *     sub_1801345B0 @ 0x1801345B0 (sub_1801345B0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180138128(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
