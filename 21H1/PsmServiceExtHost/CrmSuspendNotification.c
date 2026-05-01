/*
 * XREFs of CrmSuspendNotification @ 0x18003C250
 * Callers:
 *     PsmCrmSuspendNotification @ 0x18003C240 (PsmCrmSuspendNotification.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmSuspendNotification(int a1)
{
  void **v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v1 = (void **)qword_1800B3DC0;
  if ( qword_1800B3DC0 )
  {
    RtlAcquireSRWLockExclusive((char *)qword_1800B3DC0 + 8);
    *((_DWORD *)v1 + 4) = GetCurrentThreadId();
  }
  result = RtlReleaseSRWLockShared(&CrmGlobals);
  if ( v1 )
  {
    CrmStateMonitorStateSet(v1, &v3, 4uLL, 1);
    *((_DWORD *)v1 + 4) = 0;
    return RtlReleaseSRWLockExclusive(v1 + 1);
  }
  return result;
}
