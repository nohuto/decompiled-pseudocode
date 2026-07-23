/*
 * XREFs of TpSetWaitEx @ 0x180011D60
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     TpSetWait @ 0x180010B90 (TpSetWait.c)
 *     EtwpNotificationThread @ 0x180045160 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x180062750 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18007860C (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C9E4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D960 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppSetupNextWait @ 0x180013704 (TppSetupNextWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  char v12; // al
  signed int v13; // ebx
  _BOOL8 v14; // rbp
  char v16; // al
  signed int v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8, v10);
    return 0;
  }
  v11 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v12 = TppCancelWait(Wait, v11 + 112, 0LL, &v17);
  v13 = v17;
  v14 = v17 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v12 )
    {
      v16 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v16;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v16 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v13 += TppSetupNextWait(Wait, Handle, Timeout);
      v17 = v13;
LABEL_8:
      if ( v13 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13);
        v13 = 0;
        v17 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v13 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13) == -v13 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v14;
}
