/*
 * XREFs of PopUserShutdownCancelled @ 0x1407654E4
 * Callers:
 *     PoUserShutdownCancelled @ 0x1407654B0 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x1408E3310 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 (__fastcall *__fastcall PopUserShutdownCancelled(int a1))(_QWORD)
{
  char v1; // di
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = a1;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  if ( PopUserShutdownInProgress )
  {
    KeCancelTimer(&PopUserShutdownDelayTimer);
    PopBsdShutdownInProgress = 0;
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock(v4, v3);
  result = qword_140C542C0;
  if ( qword_140C542C0 )
  {
    LOBYTE(v5) = v1;
    result = (__int64 (__fastcall *)(_QWORD))qword_140C542C0(v5);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}
