/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x14076E510
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1408FE324 (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x140900D3C (TtmCleanupCurrentSession.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x1403806CC (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( Handle && *((_DWORD *)Handle + 4) == 1952797520 )
  {
    ExAcquireFastMutex(&PopSettingLock);
    if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
    {
      v1 = -1073741811;
    }
    else
    {
      if ( *((_QWORD *)Handle + 3) )
      {
        if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
        {
          *((_BYTE *)Handle + 32) = 1;
          goto LABEL_8;
        }
        *((_BYTE *)Handle + 33) = 1;
        while ( *((_QWORD *)Handle + 3) )
        {
          KeReleaseGuardedMutex(&PopSettingLock);
          KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
          KeResetEvent(&PopPowerSettingCallbackReturned);
          ExAcquireFastMutex(&PopSettingLock);
        }
        *((_BYTE *)Handle + 33) = 0;
      }
      PopUnregisterPowerSettingCallback((__int64 *)Handle);
    }
LABEL_8:
    KeReleaseGuardedMutex(&PopSettingLock);
    return v1;
  }
  return -1073741811;
}
