/*
 * XREFs of TpSetWaitEx @ 0x180011D60
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     TpSetWait @ 0x180010B90 (TpSetWait.c)
 *     EtwpNotificationThread @ 0x1800451B0 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x180062860 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18007870C (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007CAE4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007DA60 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppSetupNextWait @ 0x180013704 (TppSetupNextWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  BOOL v15; // ebp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    TppRaiseInvalidParameter(v9, v8, v10, v11);
    return 0LL;
  }
  v12 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240);
  v13 = TppCancelWait(a1, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v13 )
    {
      v17 = *(_BYTE *)(a1 + 464) | 1;
      *(_QWORD *)(a1 + 376) = a2;
      *(_BYTE *)(a1 + 464) = v17;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v17 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v14 += TppSetupNextWait(a1, a2, a3);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 240);
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14) == -v14 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v15;
}
