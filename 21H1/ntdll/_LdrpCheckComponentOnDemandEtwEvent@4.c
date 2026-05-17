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
  _DWORD v7[2]; // [esp+10h] [ebp-50h] BYREF
  unsigned __int16 *v8; // [esp+18h] [ebp-48h]
  int v9; // [esp+1Ch] [ebp-44h] BYREF
  void *UniqueProcess; // [esp+20h] [ebp-40h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD v12[13]; // [esp+28h] [ebp-38h] BYREF

  Handle = 0;
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
        if ( NtCreateEvent((int)&Handle, 2031619, 0, 0, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpCODScenarioLock);
          v4 = 1;
          v3 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = (int)Handle;
            v12[0] = &UniqueProcess;
            v12[2] = 4;
            v12[6] = 4;
            v12[4] = &v9;
            LdrpCODScenarioTriggered = 1;
            v12[1] = 0;
            v12[8] = *((_DWORD *)v8 + 1);
            v5 = *v8;
            v12[3] = 0;
            v12[10] = v5 + 2;
            v12[5] = 0;
            v12[7] = 0;
            v12[9] = 0;
            v12[11] = 0;
            if ( !EtwEventWriteNoRegistration((int)UserLoaderGuid, ComponentOnDemand, 3, (int)v12) )
            {
              v7[1] = -1;
              v7[0] = -100000000;
              ZwWaitForSingleObject((int)Handle, 0, (int)v7);
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    *((_DWORD *)pShimData + 1118) = 0;
    *((_DWORD *)pShimData + 1119) = 0;
  }
  if ( v4 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v3;
}
