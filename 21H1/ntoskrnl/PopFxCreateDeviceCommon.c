/*
 * XREFs of PopFxCreateDeviceCommon @ 0x1403BA8E8
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x1405785E8 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14079CBDC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x14037C1C0 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x1403BAB4C (PopFxDuplicateUniqueId.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  __int128 v10; // xmm0
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, &v11);
  if ( v6 < 0 )
  {
LABEL_4:
    if ( *((_QWORD *)&v11 + 1) )
      ExFreePoolWithTag(*((PVOID *)&v11 + 1), 0x4D584650u);
    return (unsigned int)v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4B8uLL, 0x4D584650u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 0x4B8uLL);
  v10 = v11;
  *((_QWORD *)v8 + 45) = 0LL;
  *(_OWORD *)(v8 + 216) = v10;
  *((_QWORD *)v8 + 26) = v8 + 200;
  *((_QWORD *)v8 + 25) = v8 + 200;
  *((_QWORD *)v8 + 73) = v8 + 576;
  *((_QWORD *)v8 + 72) = v8 + 576;
  *((_QWORD *)v8 + 48) = v8 + 376;
  *((_QWORD *)v8 + 47) = v8 + 376;
  *((_QWORD *)v8 + 46) = 0LL;
  *((_QWORD *)v8 + 57) = PopFxIdleTimeoutDpcRoutine;
  *((_QWORD *)v8 + 1) = v8;
  *(_QWORD *)v8 = v8;
  *((_WORD *)v8 + 284) = 0;
  v8[570] = 6;
  *((_DWORD *)v8 + 143) = 1;
  v8[368] = 9;
  *((_QWORD *)v8 + 49) = 0LL;
  *((_DWORD *)v8 + 107) = 0;
  *((_WORD *)v8 + 212) = 0;
  *((_DWORD *)v8 + 108) = 275;
  *((_QWORD *)v8 + 58) = v8;
  *((_QWORD *)v8 + 61) = 0LL;
  *((_QWORD *)v8 + 56) = 0LL;
  if ( !(unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 240), 0x4D584650u, 0, 0, 0x20u);
  *((_QWORD *)v8 + 124) = 0LL;
  *((_QWORD *)v8 + 118) = v8;
  *((_QWORD *)v8 + 40) = PopFxDeviceWork;
  *((_QWORD *)v8 + 115) = 0LL;
  *((_QWORD *)v8 + 117) = PopFxDirectedPowerTransitionWorker;
  *((_QWORD *)v8 + 140) = v8 + 920;
  *((_QWORD *)v8 + 126) = v8 + 1000;
  *((_QWORD *)v8 + 125) = v8 + 1000;
  *((_QWORD *)v8 + 41) = v8;
  *((_QWORD *)v8 + 135) = PopFxDirectedWorkOrderWatchdog;
  *((_QWORD *)v8 + 136) = v8 + 976;
  *((_QWORD *)v8 + 121) = v8 + 976;
  *((_QWORD *)v8 + 38) = 0LL;
  *((_QWORD *)v8 + 144) = 0LL;
  v8[992] = 8;
  *((_QWORD *)v8 + 127) = 0LL;
  *((_DWORD *)v8 + 263) = 0;
  *((_WORD *)v8 + 524) = 0;
  *((_DWORD *)v8 + 264) = 275;
  *((_QWORD *)v8 + 139) = 0LL;
  *((_QWORD *)v8 + 134) = 0LL;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 272), 0x4D584650u, 0, 0, 0x20u);
  if ( (unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
    *((_DWORD *)v8 + 58) = ((a4 & 4) != 0) + 1;
  *((_DWORD *)v8 + 206) = a4;
  *a5 = v8;
  return (unsigned int)v6;
}
