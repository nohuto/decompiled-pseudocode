/*
 * XREFs of _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510
 * Callers:
 *     _RtlCheckForOrphanedCriticalSections@4 @ 0x4B2E84F0 (_RtlCheckForOrphanedCriticalSections@4.c)
 * Callees:
 *     _RtlpGetStackTraceAddressEx@8 @ 0x4B2AFCB0 (_RtlpGetStackTraceAddressEx@8.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _RtlApplicationVerifierStop@40 @ 0x4B33A020 (_RtlApplicationVerifierStop@40.c)
 */

_PEB_LDR_DATA *__fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, _DWORD *a2)
{
  _PEB_LDR_DATA *result; // eax
  void *UniqueThread; // edi
  _UNKNOWN **i; // edx
  unsigned __int16 *v7; // esi
  int v8; // edi
  int *j; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // [esp-10h] [ebp-CCh]
  int v13; // [esp-8h] [ebp-C4h]
  int StackTraceAddress; // [esp-8h] [ebp-C4h]
  char v15[12]; // [esp+10h] [ebp-ACh] BYREF
  void *v16; // [esp+1Ch] [ebp-A0h]
  _DWORD v17[8]; // [esp+2Ch] [ebp-90h] BYREF
  _DWORD ThreadInformation[10]; // [esp+4Ch] [ebp-70h] BYREF
  void *v19; // [esp+74h] [ebp-48h]
  _UNKNOWN **v20; // [esp+78h] [ebp-44h]
  int v21; // [esp+7Ch] [ebp-40h]
  _DWORD *v22; // [esp+80h] [ebp-3Ch]
  int v23; // [esp+84h] [ebp-38h]
  _DWORD v24[2]; // [esp+88h] [ebp-34h] BYREF
  _UNKNOWN **v25; // [esp+90h] [ebp-2Ch]
  unsigned __int16 *v26; // [esp+94h] [ebp-28h]
  void *v27; // [esp+98h] [ebp-24h]
  _UNKNOWN **v28; // [esp+9Ch] [ebp-20h]
  char v29; // [esp+A3h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+A4h] [ebp-18h]

  v22 = a2;
  result = 0;
  memset(v17, 0, sizeof(v17));
  memset(&ThreadInformation[3], 0, 0x18u);
  v24[0] = 0;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb()->Ldr;
      if ( !result->ShutdownInProgress )
      {
        if ( ThreadHandle == (HANDLE)-2 )
        {
          result = (_PEB_LDR_DATA *)NtCurrentTeb();
          if ( result[1].SsHandle )
          {
            UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
LABEL_12:
            v27 = UniqueThread;
            RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
            ms_exc.registration.TryLevel = 0;
            for ( i = (_UNKNOWN **)RtlCriticalSectionList; ; i = (_UNKNOWN **)*i )
            {
              v24[1] = i;
              v28 = i;
              if ( i == &RtlCriticalSectionList )
              {
                ms_exc.registration.TryLevel = -2;
                return (_PEB_LDR_DATA *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
              }
              v7 = (unsigned __int16 *)(i - 2);
              v25 = i - 2;
              v20 = i - 2;
              v8 = (int)*(i - 1);
              v23 = v8;
              v21 = v8;
              if ( a2 )
              {
                for ( j = a2; ; ++j )
                {
                  ThreadInformation[9] = j;
                  v10 = *j;
                  if ( !*j )
                    break;
                  if ( v8 == v10 )
                  {
                    if ( v10 )
                      goto LABEL_25;
                    break;
                  }
                }
              }
              v29 = 1;
              ms_exc.registration.TryLevel = 1;
              v26 = *(unsigned __int16 **)v8;
              ThreadInformation[3] = v26;
              ThreadInformation[4] = *(_DWORD *)(v8 + 4);
              ThreadInformation[5] = *(_DWORD *)(v8 + 8);
              v19 = *(void **)(v8 + 12);
              ThreadInformation[6] = v19;
              ThreadInformation[7] = *(_DWORD *)(v8 + 16);
              ThreadInformation[8] = *(_DWORD *)(v8 + 20);
              ms_exc.registration.TryLevel = 0;
              if ( v26 == v7 )
              {
                if ( v19 != v27 )
                  continue;
                StackTraceAddress = RtlpGetStackTraceAddressEx(v7[1], v7[14]);
                RtlApplicationVerifierStop(
                  512,
                  "Thread is in a state in which it cannot own a critical section",
                  v27,
                  "Thread identifier",
                  v8,
                  "Critical section address",
                  v7,
                  "Critical section debug info address",
                  StackTraceAddress,
                  "Initialization stack trace. Use dps to dump it if non-NULL.");
              }
              else
              {
                v29 = 1;
                qmemcpy(v17, v26, sizeof(v17));
                ms_exc.registration.TryLevel = 0;
                v11 = v23;
                v13 = RtlpGetStackTraceAddressEx(HIWORD(v17[0]), v17[7]);
                v12 = RtlpGetStackTraceAddressEx(*((_WORD *)v20 + 1), *((_WORD *)v20 + 14));
                RtlApplicationVerifierStop(
                  515,
                  "double initialized or corrupted critical section",
                  v11,
                  "Critical section address.",
                  v25,
                  "Address of the debug info found in the active list.",
                  v12,
                  "First initialization stack trace. Use dps to dump it if non-NULL.",
                  v13,
                  "Second initialization stack trace. Use dps to dump it if non-NULL.");
              }
              i = v28;
LABEL_25:
              ;
            }
          }
        }
        else
        {
          ThreadInformation[0] = v24;
          ThreadInformation[2] = 4;
          ThreadInformation[1] = 56;
          result = (_PEB_LDR_DATA *)NtQueryInformationThread(
                                      ThreadHandle,
                                      (THREADINFOCLASS)26,
                                      ThreadInformation,
                                      0xCu,
                                      0);
          if ( (int)result >= 0 )
          {
            if ( v24[0] )
            {
              result = (_PEB_LDR_DATA *)NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)0, v15, 0x1Cu, 0);
              if ( (int)result >= 0 )
              {
                UniqueThread = v16;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
