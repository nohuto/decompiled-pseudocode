/*
 * XREFs of SepAdtInitializeBounds @ 0x1407A7874
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1407A7810 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A6456C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x140677C28 (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned int v0; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-14h]

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, L"Bounds", 3, 8u, &v0) >= 0
    && v1 < v0
    && v1 >= 0x10
    && v0 - v1 >= 0x10 )
  {
    SepAdtMinListLength = v1;
    SepAdtMaxListLength = v0;
  }
}
