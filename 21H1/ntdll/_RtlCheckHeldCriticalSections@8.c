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

void __fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, _DWORD *a2)
{
  void *UniqueThread; // edi
  _UNKNOWN **i; // edx
  unsigned __int16 *v6; // esi
  int v7; // edi
  int *j; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // [esp-10h] [ebp-CCh]
  int v12; // [esp-8h] [ebp-C4h]
  int StackTraceAddress; // [esp-8h] [ebp-C4h]
  char v14[12]; // [esp+10h] [ebp-ACh] BYREF
  void *v15; // [esp+1Ch] [ebp-A0h]
  _DWORD v16[8]; // [esp+2Ch] [ebp-90h] BYREF
  _DWORD ThreadInformation[10]; // [esp+4Ch] [ebp-70h] BYREF
  void *v18; // [esp+74h] [ebp-48h]
  _UNKNOWN **v19; // [esp+78h] [ebp-44h]
  int v20; // [esp+7Ch] [ebp-40h]
  _DWORD *v21; // [esp+80h] [ebp-3Ch]
  int v22; // [esp+84h] [ebp-38h]
  _DWORD v23[2]; // [esp+88h] [ebp-34h] BYREF
  _UNKNOWN **v24; // [esp+90h] [ebp-2Ch]
  unsigned __int16 *v25; // [esp+94h] [ebp-28h]
  void *v26; // [esp+98h] [ebp-24h]
  _UNKNOWN **v27; // [esp+9Ch] [ebp-20h]
  char v28; // [esp+A3h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+A4h] [ebp-18h]

  v21 = a2;
  memset(v16, 0, sizeof(v16));
  memset(&ThreadInformation[3], 0, 0x18u);
  v23[0] = 0;
  if ( RtlpCriticalSectionVerifier && !RtlpCsVerifyDoNotBreak && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2 )
    {
      if ( NtCurrentTeb()->CountOfOwnedCriticalSections )
      {
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
LABEL_12:
        v26 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
        ms_exc.registration.TryLevel = 0;
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; ; i = (_UNKNOWN **)*i )
        {
          v23[1] = i;
          v27 = i;
          if ( i == &RtlCriticalSectionList )
          {
            ms_exc.registration.TryLevel = -2;
            RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
            return;
          }
          v6 = (unsigned __int16 *)(i - 2);
          v24 = i - 2;
          v19 = i - 2;
          v7 = (int)*(i - 1);
          v22 = v7;
          v20 = v7;
          if ( a2 )
          {
            for ( j = a2; ; ++j )
            {
              ThreadInformation[9] = j;
              v9 = *j;
              if ( !*j )
                break;
              if ( v7 == v9 )
              {
                if ( v9 )
                  goto LABEL_25;
                break;
              }
            }
          }
          v28 = 1;
          ms_exc.registration.TryLevel = 1;
          v25 = *(unsigned __int16 **)v7;
          ThreadInformation[3] = v25;
          ThreadInformation[4] = *(_DWORD *)(v7 + 4);
          ThreadInformation[5] = *(_DWORD *)(v7 + 8);
          v18 = *(void **)(v7 + 12);
          ThreadInformation[6] = v18;
          ThreadInformation[7] = *(_DWORD *)(v7 + 16);
          ThreadInformation[8] = *(_DWORD *)(v7 + 20);
          ms_exc.registration.TryLevel = 0;
          if ( v25 == v6 )
          {
            if ( v18 != v26 )
              continue;
            StackTraceAddress = RtlpGetStackTraceAddressEx(v6[1], v6[14]);
            RtlApplicationVerifierStop(
              512,
              "Thread is in a state in which it cannot own a critical section",
              v26,
              "Thread identifier",
              v7,
              "Critical section address",
              v6,
              "Critical section debug info address",
              StackTraceAddress,
              "Initialization stack trace. Use dps to dump it if non-NULL.");
          }
          else
          {
            v28 = 1;
            qmemcpy(v16, v25, sizeof(v16));
            ms_exc.registration.TryLevel = 0;
            v10 = v22;
            v12 = RtlpGetStackTraceAddressEx(HIWORD(v16[0]), v16[7]);
            v11 = RtlpGetStackTraceAddressEx(*((_WORD *)v19 + 1), *((_WORD *)v19 + 14));
            RtlApplicationVerifierStop(
              515,
              "double initialized or corrupted critical section",
              v10,
              "Critical section address.",
              v24,
              "Address of the debug info found in the active list.",
              v11,
              "First initialization stack trace. Use dps to dump it if non-NULL.",
              v12,
              "Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
          i = v27;
LABEL_25:
          ;
        }
      }
    }
    else
    {
      ThreadInformation[0] = v23;
      ThreadInformation[2] = 4;
      ThreadInformation[1] = 56;
      if ( NtQueryInformationThread(ThreadHandle, ThreadTebInformation, ThreadInformation, 0xCu, 0) >= 0
        && v23[0]
        && NtQueryInformationThread(ThreadHandle, ThreadBasicInformation, v14, 0x1Cu, 0) >= 0 )
      {
        UniqueThread = v15;
        goto LABEL_12;
      }
    }
  }
}
