/*
 * XREFs of SbObtainTraceHandle @ 0x18007E884
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DDF4 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     SbpTraceContextUpdate @ 0x180113578 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(_QWORD *a1)
{
  unsigned int v1; // ebx
  char *pShimData; // rsi
  char *v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  signed __int64 v9; // rbp
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = pShimData + 2016;
    if ( !v4 || !*((_DWORD *)v4 + 12) )
      v4 = 0LL;
    if ( v4 )
    {
      if ( a1 )
        *a1 = 0LL;
      if ( *((_DWORD *)v4 + 3) )
      {
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 )
        {
          if ( a1 )
            *a1 = v6;
        }
        else
        {
          if ( (unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v11) )
            return v1;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, v11, 0LL);
          if ( v9 )
          {
            EtwNotificationUnregister(v11, 0LL, v7, v8);
            if ( a1 )
              *a1 = v9;
          }
          else
          {
            if ( a1 )
              *a1 = v11;
            ProcessParameters = NtCurrentPeb()->ProcessParameters;
            SbpTraceContextUpdate(
              v11,
              (_DWORD)v4 + 48,
              0,
              ProcessParameters->ImagePathName.Length,
              (__int64)ProcessParameters->ImagePathName.Buffer);
          }
        }
        return 1;
      }
    }
  }
  return v1;
}
