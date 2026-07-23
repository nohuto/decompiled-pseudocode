/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8
 * Callers:
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     HalpIommuGetSecurityPolicy @ 0x14025218C (HalpIommuGetSecurityPolicy.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalpDmaIsThinApiCapable @ 0x1403C7290 (HalpDmaIsThinApiCapable.c)
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EFE84 (HalpDmaFindAdapterByDeviceId.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaGetIommuInterface @ 0x1404B7BC4 (HalpDmaGetIommuInterface.c)
 *     HalpIommuCheckExceptionList @ 0x1404C5680 (HalpIommuCheckExceptionList.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 */

_DWORD *__fastcall HalpDmaAllocateChildAdapterV3(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        _DWORD *a12)
{
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  int SecurityPolicy; // r12d
  __int64 v15; // rbx
  unsigned int v16; // r13d
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // r10
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rax
  int LocalScatterPool; // eax
  int v24; // ecx
  __int64 v25; // r8
  int v26; // eax
  __int64 AdapterByDeviceId; // rax
  char v28; // al
  __int64 v29; // rcx
  void *v30; // rcx
  int Device; // eax
  char v32; // cl
  char *v33; // [rsp+28h] [rbp-D1h]
  __int16 v34; // [rsp+58h] [rbp-A1h]
  PVOID Object; // [rsp+60h] [rbp-99h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-91h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-89h] BYREF
  __int128 v38; // [rsp+90h] [rbp-69h]
  _QWORD v39[18]; // [rsp+A8h] [rbp-51h] BYREF

  v37[0] = 48LL;
  Handle = 0LL;
  v37[3] = 528LL;
  v12 = 0LL;
  v34 = 0;
  v13 = 0LL;
  Object = 0LL;
  memset(v39, 0, 0x50uLL);
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v37[1] = 0LL;
  v15 = 640LL;
  v37[2] = 0LL;
  v16 = 0;
  v38 = 0LL;
  if ( !a5 )
  {
    v16 = 6 * (a8 + 1);
    v15 = v16 * 4 + 640LL;
  }
  v17 = a11;
  v18 = a10;
  if ( a11 || !a10 || SecurityPolicy != 1 )
  {
    a11 = 0LL;
    if ( v17 && a10 )
    {
      if ( (int)HalpDmaGetIommuInterface(v17, (__int64)v39) < 0 )
      {
        if ( SecurityPolicy == 1 )
          return v13;
      }
      else
      {
        HIBYTE(v34) = 1;
        if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))v39[8])(v39[1], 0LL, 0LL, &a11) == -1073741789
          && a11 )
        {
          v15 += a11;
        }
        else
        {
          if ( SecurityPolicy == 1 )
            goto LABEL_27;
          a11 = 0LL;
        }
      }
    }
    if ( (int)ObCreateObjectEx(0, HalpDmaAdapterObjectType, (__int64)v37, 0, v33, v15, 0, 0, &Object, 0LL) < 0 )
      goto LABEL_25;
    v13 = Object;
    memset(Object, 0, v15);
    if ( ObReferenceObjectByPointer(v13, 0x20000u, HalpDmaAdapterObjectType, 0) < 0
      || (int)ObInsertObjectEx((char *)v13, 0LL, 0x20000u, 0, 0, 0LL, (unsigned __int64 *)&Handle) < 0 )
    {
      goto LABEL_25;
    }
    ZwClose(Handle);
    v19 = 0LL;
    *((_QWORD *)v13 + 1) = &HalpDmaOperationsV3;
    v20 = &MasterAdapter24V3;
    *((_BYTE *)v13 + 145) = a6;
    *v13 = 41943041;
    if ( a3 >= 0x20 )
      v20 = &MasterAdapterV3;
    *((_QWORD *)v13 + 15) = 0LL;
    *((_QWORD *)v13 + 16) = 0LL;
    *((_BYTE *)v13 + 144) = 0;
    *((_QWORD *)v13 + 19) = v20;
    if ( a3 < 0x40 )
      v21 = (1LL << a3) - 1;
    else
      v21 = -1LL;
    *((_QWORD *)v13 + 17) = v21;
    if ( v21 < v20[17] )
    {
LABEL_24:
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
LABEL_25:
      v13 = 0LL;
      goto LABEL_26;
    }
    *((_QWORD *)v13 + 39) = 0LL;
    *((_BYTE *)v13 + 338) = 0;
    *((_QWORD *)v13 + 24) = v13 + 46;
    *((_QWORD *)v13 + 23) = v13 + 46;
    *((_QWORD *)v13 + 22) = 0LL;
    *((_BYTE *)v13 + 216) = 0;
    v13[56] = a1;
    *((_BYTE *)v13 + 434) = a4;
    *((_BYTE *)v13 + 437) = a7;
    *((_QWORD *)v13 + 56) = a9;
    *((_BYTE *)v13 + 433) = a5;
    v13[94] = -1;
    v13[110] = a3;
    v13[155] = v16 * 4;
    v13[37] = 3;
    v13[154] = 0;
    *((_QWORD *)v13 + 70) = 0LL;
    *((_QWORD *)v13 + 72) = v13 + 142;
    *((_QWORD *)v13 + 71) = v13 + 142;
    *((_BYTE *)v13 + 584) = 0;
    v13[152] = 0;
    *((_QWORD *)v13 + 61) = IoFreeAdapterChannelV3Passive;
    *((_QWORD *)v13 + 62) = v13;
    *((_QWORD *)v13 + 59) = 0LL;
    if ( a1 )
    {
      if ( a4 )
        LocalScatterPool = HalpDmaAllocateLocalScatterPool(v13, a1);
      else
        LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v13, a1);
      v19 = 0LL;
      if ( LocalScatterPool < 0 )
        goto LABEL_24;
      v24 = v13[56];
      *((_BYTE *)v13 + 337) = 0;
    }
    else
    {
      v13[56] = 0;
      v24 = 0;
      *((_BYTE *)v13 + 337) = 1;
    }
    *a12 = v24;
    v13[61] = a2;
    v13[128] = 0;
    *((_QWORD *)v13 + 65) = v17;
    if ( a11 && HIBYTE(v34) )
    {
      v25 = (__int64)&v13[v16 + 160];
      *((_QWORD *)v13 + 66) = v25;
      v26 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))v39[8])(v39[1], a11, v25, 0LL);
      v19 = 0LL;
      if ( v26 >= 0 )
      {
        AdapterByDeviceId = HalpDmaFindAdapterByDeviceId(*((_QWORD *)v13 + 66));
        v19 = 0LL;
        v12 = AdapterByDeviceId;
        if ( AdapterByDeviceId )
        {
          if ( *(_QWORD *)(AdapterByDeviceId + 520) != v17 )
          {
            ExAcquirePushLockExclusiveEx(AdapterByDeviceId + 312, 0LL);
            LOBYTE(v34) = 1;
          }
          HalPutDmaAdapter((PADAPTER_OBJECT)v12);
          v19 = 0LL;
        }
        if ( a10 == 2 )
        {
          v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00A38[0])(*((_QWORD *)v13 + 66), 0LL);
          v19 = 0LL;
          if ( v28 )
            goto LABEL_52;
          v18 = 0;
        }
      }
      else
      {
        *((_QWORD *)v13 + 66) = 0LL;
        if ( SecurityPolicy == 1 )
          goto LABEL_61;
      }
    }
    if ( !v18 )
    {
LABEL_56:
      *((_QWORD *)v13 + 63) = v19;
      if ( (int)HalJoinDmaDomain((__int64)v13, -1LL) >= 0
        || SecurityPolicy != 1 && v13[128] && (v13[128] = 0, (int)HalJoinDmaDomain((__int64)v13, -1LL) >= 0) )
      {
        v32 = v34;
        if ( v12 )
          *(_BYTE *)(v12 + 338) = v34;
        *(_QWORD *)(*((_QWORD *)v13 + 63) + 72LL) = v13;
        goto LABEL_67;
      }
      HalpIommuDeleteDevice(v13 + 134);
LABEL_61:
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      v32 = v34;
      v13 = 0LL;
      Object = 0LL;
LABEL_67:
      if ( v32 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 312), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v12 + 312);
        KeAbPostRelease(v12 + 312);
        v13 = Object;
      }
LABEL_26:
      if ( !HIBYTE(v34) )
      {
LABEL_28:
        if ( v13 && HalpDmaIsThinApiCapable((__int64)v13) )
          *((_QWORD *)v13 + 1) = &HalpDmaOperationsThin;
        return v13;
      }
LABEL_27:
      ((void (__fastcall *)(_QWORD))v39[3])(v39[1]);
      goto LABEL_28;
    }
LABEL_52:
    v29 = *((_QWORD *)v13 + 66);
    if ( v29 && !HalpIommuCheckExceptionList(v29) )
    {
      Device = HalpIommuCreateDevice(v30);
      v19 = 0LL;
      if ( Device < 0 )
      {
        if ( SecurityPolicy == 1 )
          goto LABEL_61;
      }
      else
      {
        v13[128] = v18;
      }
    }
    goto LABEL_56;
  }
  return v13;
}
