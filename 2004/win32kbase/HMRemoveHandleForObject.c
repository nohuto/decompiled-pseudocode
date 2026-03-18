/*
 * XREFs of HMRemoveHandleForObject @ 0x1C0017370
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0017438 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00174EC (EtwTraceUserDestroyHandle.c)
 *     _HMPkheFromObject @ 0x1C0017510 (_HMPkheFromObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00956EC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMCleanupGrantedHandle @ 0x1C011B058 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObject(_DWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int EtwUserHandleType; // eax
  char v11; // al
  void *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v14);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v14);
  v3 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[24];
  if ( v4 == 19 || v4 == 22 )
  {
    v5 = HMPkheFromObject(a1);
    LOBYTE(v6) = v3[24];
    v7 = (_QWORD **)v5;
    EtwUserHandleType = GetEtwUserHandleType(v6, v8, v9);
    EtwTraceUserDestroyHandle(**v7, EtwUserHandleType);
    if ( (v3[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**v7);
      v3[25] &= ~0x20u;
    }
    v11 = v3[24];
    if ( v11 == 19 )
    {
      v12 = (void *)(*v7)[4];
    }
    else
    {
      if ( v11 != 22 )
        goto LABEL_7;
      v2 = (*v7)[2];
      v12 = *(void **)(v2 + 32);
    }
    ObfDereferenceObject(v12);
  }
LABEL_7:
  HMRemoveHandleForObjectWorker(v3);
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObjectWorker(v2);
  return 1LL;
}
