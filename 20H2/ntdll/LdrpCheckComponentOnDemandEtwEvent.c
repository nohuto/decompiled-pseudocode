/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18005FBE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwEventWriteNoRegistration @ 0x1800609E0 (EtwEventWriteNoRegistration.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 *     LdrpIsCODServiceEnabled @ 0x1800CEF7C (LdrpIsCODServiceEnabled.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE EventHandle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  EventHandle = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)CompatCachepLookupCdb(v4, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock);
          v3 = 1;
          v5 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = EventHandle;
            UserData.Reserved = 0;
            v15 = 0;
            v18 = 0;
            UserData.Ptr = (unsigned __int64)&UniqueProcess;
            v13 = &v10;
            v16 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            UserData.Size = 4;
            v14 = 4;
            v17 = v6;
            LdrpCODScenarioTriggered = 1;
            if ( !EtwEventWriteNoRegistration(&UserLoaderGuid, &ComponentOnDemand, 3u, &UserData) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(EventHandle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
  {
    NtClose(EventHandle);
    pShimData[559] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v5;
}
