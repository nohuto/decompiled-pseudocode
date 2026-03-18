/*
 * XREFs of HMCreateHandleForObject @ 0x1C0021AA0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00BF910 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0021BF0 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x1C0021C30 (EtwTraceUserCreateHandle.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0056CE0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C008F7B0 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(unsigned __int64 *a1, char a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r14
  char *v8; // rdx
  bool v9; // cc
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int EtwUserHandleType; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(&v16);
  v4 = 0LL;
  if ( (a2 == 19 || a2 == 22) && a1 )
  {
    while ( 1 )
    {
      if ( qword_1C0248CD0 )
      {
        v5 = &qword_1C0248CD0;
        goto LABEL_5;
      }
      if ( qword_1C0248CC8 )
        break;
      if ( !(unsigned int)HMGrowHandleTable() )
        return v4;
    }
    v5 = &qword_1C0248CC8;
LABEL_5:
    v6 = *v5;
    v7 = gpKernelHandleTable;
    v8 = (char *)qword_1C0248D48 + 32 * *v5;
    v9 = (unsigned int)*v5 <= giheLast;
    v10 = 3 * *v5;
    *v5 = *((_QWORD *)gpKernelHandleTable + 3 * *v5);
    if ( !v9 )
      giheLast = v6;
    v8[24] = a2;
    v7[v10] = a1;
    v11 = *(unsigned __int16 *)((char *)qword_1C0248D48 + v6 * (unsigned int)dword_1C0248D50 + 26) << 16;
    v12 = (int)v6 | (unsigned __int64)(int)v11;
    *a1 = v12;
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    LOBYTE(v11) = a2;
    EtwUserHandleType = GetEtwUserHandleType(v11, v12, v6);
    EtwTraceUserCreateHandle(*a1, EtwUserHandleType, 0LL);
    if ( a2 == 19 )
    {
      RawInputManagerDeviceObjectReference(a1[4]);
    }
    else
    {
      v15 = a1[2];
      RawInputManagerDeviceObjectReference(*(_QWORD *)(v15 + 32));
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    }
    v7[v10 + 2] = 0LL;
    return v7[v10];
  }
  return v4;
}
