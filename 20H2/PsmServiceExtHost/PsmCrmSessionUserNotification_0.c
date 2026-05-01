/*
 * XREFs of PsmCrmSessionUserNotification_0 @ 0x18003DBFC
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x18003DBF0 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     sub_18003B570 @ 0x18003B570 (sub_18003B570.c)
 *     sub_18003DCA0 @ 0x18003DCA0 (sub_18003DCA0.c)
 */

void __fastcall PsmCrmSessionUserNotification_0(int a1)
{
  _DWORD *v1; // rdi

  if ( a1 == 6 )
  {
    sub_18003B570();
  }
  else if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&unk_1800B3D60);
    v1 = qword_1800B3DD0;
    if ( qword_1800B3DD0 )
    {
      RtlAcquireSRWLockExclusive((char *)qword_1800B3DD0 + 8);
      v1[4] = GetCurrentThreadId();
    }
    RtlReleaseSRWLockShared(&unk_1800B3D60);
    if ( v1 )
    {
      sub_18003DCA0(v1);
      v1[4] = 0;
      RtlReleaseSRWLockExclusive(v1 + 2);
    }
  }
}
