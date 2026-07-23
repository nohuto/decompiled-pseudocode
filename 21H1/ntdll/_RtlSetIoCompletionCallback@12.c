/*
 * XREFs of _RtlSetIoCompletionCallback@12 @ 0x4B385470
 * Callers:
 *     <none>
 * Callees:
 *     _LdrRegisterDllNotification@16 @ 0x4B2AB330 (_LdrRegisterDllNotification@16.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 */

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  NTSTATUS result; // eax
  int v4; // esi
  int v5; // ecx
  _GUID *p_ActivityId; // esi
  HANDLE TokenHandle; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+14h] [ebp-20h]
  int v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = -1073741823;
  v9 = -1073741823;
  TokenHandle = 0;
  v8 = 0;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !FileHandle || Flags )
    {
      return -1073741811;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      v4 = RtlpTpRevertCapture(&TokenHandle, 0);
      v9 = v4;
      if ( v4 >= 0 )
      {
        if ( RtlpTpIoRegistered )
          goto LABEL_11;
        RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
        ms_exc.registration.TryLevel = 1;
        if ( RtlpTpIoRegistered )
        {
          v4 = 0;
          v9 = 0;
        }
        else
        {
          v4 = LdrRegisterDllNotification(0, RtlpTpIoDllNotification, 0, &RtlpTpIoDllNotificationCookie);
          v9 = v4;
          if ( v4 >= 0 )
            RtlpTpIoRegistered = 1;
        }
        ms_exc.registration.TryLevel = 0;
        RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
        if ( v4 >= 0 )
        {
LABEL_11:
          v4 = RtlpTpIoLookup(FileHandle);
          v9 = v4;
          if ( v4 >= 0 )
          {
            v5 = v8;
            *(_DWORD *)(v8 + 88) = NtCurrentTeb()->SubProcessTag;
            p_ActivityId = &NtCurrentTeb()->ActivityId;
            *(_DWORD *)(v5 + 92) = p_ActivityId->Data1;
            p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
            *(_DWORD *)(v5 + 96) = p_ActivityId->Data1;
            *(_QWORD *)(v5 + 100) = *(_QWORD *)&p_ActivityId->Data2;
            v4 = 0;
            v9 = 0;
          }
        }
      }
      ms_exc.registration.TryLevel = -2;
      RtlpTpResumeImpersonation(TokenHandle);
      return v4;
    }
  }
  return result;
}
