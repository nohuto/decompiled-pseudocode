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
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  signed __int64 v8; // kr00_8
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  volatile signed __int64 *v10; // [esp+10h] [ebp-10h]
  signed __int64 v12; // [esp+18h] [ebp-8h] BYREF

  v12 = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData )
    return 0;
  v3 = pShimData + 2016;
  if ( !v3 || !v3[12] )
    return 0;
  if ( this )
  {
    *this = 0;
    this[1] = 0;
  }
  if ( !v3[3] )
    return 0;
  v5 = v3[4];
  v10 = (volatile signed __int64 *)(v3 + 4);
  v6 = v3[5];
  if ( __PAIR64__(v5, v6) )
  {
    if ( this )
    {
      *this = v5;
      this[1] = v6;
    }
    return 1;
  }
  if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0, 0, (int)&v12) )
    return 0;
  v7 = HIDWORD(v12);
  v8 = _InterlockedCompareExchange64(v10, v12, 0LL);
  if ( v8 )
  {
    EtwNotificationUnregister(v12, v7, 0);
    if ( this )
      *(_QWORD *)this = v8;
    return 1;
  }
  if ( this )
  {
    *this = v12;
    this[1] = v7;
  }
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  SbpTraceContextUpdate(
    v12,
    HIDWORD(v12),
    ProcessParameters->ImagePathName.Length,
    ProcessParameters->ImagePathName.Buffer);
  return 1;
}
