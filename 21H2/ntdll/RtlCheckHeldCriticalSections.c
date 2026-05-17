/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x18007E030
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x18007E000 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlpGetStackTraceAddressEx @ 0x1800111D0 (RtlpGetStackTraceAddressEx.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     ZwQueryInformationThread @ 0x18009DAE0 (ZwQueryInformationThread.c)
 *     RtlApplicationVerifierStop @ 0x1800DBFD0 (RtlApplicationVerifierStop.c)
 */

struct _PEB *__fastcall RtlCheckHeldCriticalSections(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _PEB *result; // rax
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v9; // rsi
  __int64 v10; // r15
  __int64 *j; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  int *v16; // [rsp+80h] [rbp-D8h] BYREF
  int v17; // [rsp+88h] [rbp-D0h]
  int v18; // [rsp+8Ch] [rbp-CCh]
  __int128 v19; // [rsp+90h] [rbp-C8h]
  __int128 v20; // [rsp+A0h] [rbp-B8h]
  __int64 v21; // [rsp+B0h] [rbp-A8h]
  __int128 v22; // [rsp+B8h] [rbp-A0h]
  __int128 v23; // [rsp+C8h] [rbp-90h]
  __int128 v24; // [rsp+D8h] [rbp-80h]
  _BYTE v25[24]; // [rsp+E8h] [rbp-70h] BYREF
  void *v26; // [rsp+100h] [rbp-58h]
  int v27; // [rsp+170h] [rbp+18h] BYREF
  void *v28; // [rsp+178h] [rbp+20h]

  v22 = 0LL;
  v24 = 0LL;
  result = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v27 = 0;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          v16 = &v27;
          v18 = 4;
          v17 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v16, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v27 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v25, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v26;
        }
        v28 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock, a2, a3, a4);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v9 = i - 2;
          v10 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = (__int64 *)a2; ; ++j )
            {
              v12 = *j;
              if ( !*j )
                break;
              if ( v10 == v12 )
              {
                if ( v12 )
                  goto LABEL_24;
                break;
              }
            }
          }
          v19 = *(_OWORD *)v10;
          v20 = *(_OWORD *)(v10 + 16);
          v21 = *(_QWORD *)(v10 + 32);
          if ( (_UNKNOWN **)v19 == v9 )
          {
            if ( (void *)v20 == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v9 + 1), *((_WORD *)v9 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v10,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            v22 = *(_OWORD *)v19;
            v23 = *(_OWORD *)(v19 + 16);
            v24 = *(_OWORD *)(v19 + 32);
            v13 = RtlpGetStackTraceAddressEx(WORD1(v22), WORD6(v24));
            v14 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v10,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v14,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v13,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
