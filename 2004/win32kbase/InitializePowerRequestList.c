/*
 * XREFs of InitializePowerRequestList @ 0x1C02938D8
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C002BEF0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C002BDC0 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  const unsigned __int16 *v2; // rcx
  unsigned int *v3; // rbx
  unsigned int i; // edi
  const unsigned __int16 *v5; // rdx
  NTSTATUS result; // eax
  struct _FAST_MUTEX *v7; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-B9h] BYREF
  _DWORD InputBuffer[24]; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v10[32]; // [rsp+90h] [rbp-29h] BYREF
  unsigned __int8 OutputBuffer; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v12; // [rsp+130h] [rbp+77h] BYREF
  PVOID Object; // [rsp+138h] [rbp+7Fh] BYREF

  OutputBuffer = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v3 = (unsigned int *)&unk_1C0241310;
  gSystemIsAoAc = OutputBuffer;
  for ( i = 0; i < 5; ++i )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)v3 - 1);
    v12 = 0;
    if ( (unsigned int)GetConfigUlong(v2, v5, &v12) == 1 )
    {
      *v3 = v12;
    }
    else if ( gSystemIsAoAc != 1 )
    {
      goto LABEL_4;
    }
    v3 += 6;
  }
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, &gpRequestQueueWatchdog, 8u);
  if ( result < 0 )
    return result;
  memset(&v10[1], 0, 0x5CuLL);
  v10[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, v10, 0x60u, &gpRequestWorkerWatchdog, 8u);
  if ( result < 0 )
    return result;
LABEL_4:
  Object = 0LL;
  qword_1C024F678 = (__int64)&gPowerRequestList;
  gPowerRequestList.Flink = &gPowerRequestList;
  result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  gpEventPowerRequest = Object;
  if ( result >= 0 )
  {
    v7 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 0x6F707355u);
    gpPowerRequestMutex = v7;
    if ( v7 )
    {
      v7->Owner = 0LL;
      v7->Contention = 0;
      v7->Count = 1;
      KeInitializeEvent(&v7->Event, SynchronizationEvent, 0);
      gbPowerCalloutsReady = 1;
      _InterlockedOr(v8, 0);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
