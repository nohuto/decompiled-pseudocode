/*
 * XREFs of TpReleaseWait @ 0x18000C270
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C9E4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D960 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = TppWaitpValidateWait(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      v3 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      TppCancelWait(a1, v3 + 112, 2LL, &v6);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v4 = 1 - v6;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v6 - 1);
      if ( (_DWORD)result == v4 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
