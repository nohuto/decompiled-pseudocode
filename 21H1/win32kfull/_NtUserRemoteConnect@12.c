/*
 * XREFs of _NtUserRemoteConnect@12 @ 0xEB270
 * Callers:
 *     <none>
 * Callees:
 *     _wcsncpycch@12 @ 0xC9046 (_wcsncpycch@12.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserRemoteConnect(unsigned int a1, SIZE_T Length, volatile void *Address)
{
  const void *v3; // esi
  int v4; // esi
  int v5; // esi
  _BYTE v7[288]; // [esp+10h] [ebp-2C0h] BYREF
  int v8; // [esp+134h] [ebp-19Ch]
  union _LARGE_INTEGER CurrentTime; // [esp+138h] [ebp-198h] BYREF
  _BYTE v10[288]; // [esp+140h] [ebp-190h] BYREF
  _DWORD v11[16]; // [esp+260h] [ebp-70h] BYREF
  _WORD v12[12]; // [esp+2A0h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2B8h] [ebp-18h]

  memset(v11, 0, sizeof(v11));
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v11[14] = CurrentTime;
  v11[5] = 31;
  LOBYTE(v11[11]) = -1;
  memset(v10, 0, sizeof(v10));
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    ms_exc.registration.TryLevel = 0;
    v3 = (const void *)a1;
    if ( a1 + 288 < a1 || a1 + 288 > _MmUserProbeAddress )
      v3 = (const void *)_MmUserProbeAddress;
    qmemcpy(v7, v3, sizeof(v7));
    qmemcpy(v10, v7, sizeof(v10));
    ProbeForRead(Address, Length, 2u);
    v4 = 9;
    if ( Length <= 9 )
      v4 = Length;
    v8 = v4;
    wcsncpycch(v12, (int)Address, v4);
    if ( (unsigned int)(2 * v4) >= 0x14 )
      __report_rangecheckfailure();
    v12[v4] = 0;
    ms_exc.registration.TryLevel = -2;
    _gptiTSRequest = _gptiCurrent;
    v5 = xxxRemoteConnect(v10, v4, v12, v11);
    if ( v5 < 0 )
      _gptiTSRequest = 0;
  }
  else
  {
    v5 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
