/*
 * XREFs of _SbObtainTraceHandle@4 @ 0x4B2B8430
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _SbpTraceContextUpdate@24 @ 0x4B385D98 (_SbpTraceContextUpdate@24.c)
 */

int __thiscall SbObtainTraceHandle(unsigned int *this)
{
  char *pShimData; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  signed __int64 v9; // kr00_8
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  volatile signed __int64 *v11; // [esp+10h] [ebp-10h]
  ULONGLONG RegHandle; // [esp+18h] [ebp-8h] BYREF

  RegHandle = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData )
    return 0;
  v3 = pShimData + 2016;
  if ( !v3 )
    return 0;
  v4 = v3 + 12;
  if ( !v3[12] )
    return 0;
  if ( this )
  {
    *this = 0;
    this[1] = 0;
  }
  if ( !v3[3] )
    return 0;
  v6 = v3[4];
  v11 = (volatile signed __int64 *)(v3 + 4);
  v7 = v3[5];
  if ( __PAIR64__(v6, v7) )
  {
    if ( this )
    {
      *this = v6;
      this[1] = v7;
    }
    return 1;
  }
  if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0, 0, &RegHandle) )
    return 0;
  v8 = HIDWORD(RegHandle);
  v9 = _InterlockedCompareExchange64(v11, RegHandle, 0LL);
  if ( v9 )
  {
    EtwNotificationUnregister(__PAIR64__(v8, RegHandle), 0);
    if ( this )
      *(_QWORD *)this = v9;
    return 1;
  }
  if ( this )
  {
    *this = RegHandle;
    this[1] = v8;
  }
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  SbpTraceContextUpdate(
    v4,
    0,
    RegHandle,
    HIDWORD(RegHandle),
    ProcessParameters->ImagePathName.Length,
    ProcessParameters->ImagePathName.Buffer);
  return 1;
}
