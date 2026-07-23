/*
 * XREFs of _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpIsCODServiceEnabled@0 @ 0x4B32FCAA (_LdrpIsCODServiceEnabled@0.c)
 */

char __thiscall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *this)
{
  _QWORD *pShimData; // esi
  wchar_t *v2; // ecx
  char v3; // bl
  int v4; // edi
  int v5; // eax
  LARGE_INTEGER Timeout; // [esp+10h] [ebp-50h] BYREF
  unsigned __int16 *v8; // [esp+18h] [ebp-48h]
  int v9; // [esp+1Ch] [ebp-44h] BYREF
  void *UniqueProcess; // [esp+20h] [ebp-40h] BYREF
  HANDLE EventHandle; // [esp+24h] [ebp-3Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+28h] [ebp-38h] BYREF
  int *v13; // [esp+38h] [ebp-28h]
  int v14; // [esp+3Ch] [ebp-24h]
  int v15; // [esp+40h] [ebp-20h]
  int v16; // [esp+44h] [ebp-1Ch]
  int v17; // [esp+48h] [ebp-18h]
  int v18; // [esp+4Ch] [ebp-14h]
  int v19; // [esp+50h] [ebp-10h]
  int v20; // [esp+54h] [ebp-Ch]

  EventHandle = 0;
  v8 = this;
  pShimData = 0;
  v2 = (wchar_t *)*((_DWORD *)this + 1);
  v3 = 0;
  v9 = 1;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  v4 = 0;
  if ( CompatCachepLookupCdb(v2, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( NtCreateEvent(&EventHandle, 0x1F0003u, 0, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock);
          v4 = 1;
          v3 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = (int)EventHandle;
            UserData.Ptr = (unsigned int)&UniqueProcess;
            UserData.Size = 4;
            v15 = 4;
            v13 = &v9;
            LdrpCODScenarioTriggered = 1;
            v17 = *((_DWORD *)v8 + 1);
            v5 = *v8;
            UserData.Reserved = 0;
            v19 = v5 + 2;
            v14 = 0;
            v16 = 0;
            v18 = 0;
            v20 = 0;
            if ( !EtwEventWriteNoRegistration(&UserLoaderGuid, &ComponentOnDemand, 3u, &UserData) )
            {
              Timeout.QuadPart = -100000000LL;
              ZwWaitForSingleObject(EventHandle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
  {
    NtClose(EventHandle);
    *((_DWORD *)pShimData + 1118) = 0;
    *((_DWORD *)pShimData + 1119) = 0;
  }
  if ( v4 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v3;
}
