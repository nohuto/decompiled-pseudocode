/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x14084685C
 * Callers:
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 * Callees:
 *     HalpIommuGetSecurityPolicy @ 0x14025E834 (HalpIommuGetSecurityPolicy.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpDmaIsThinDmaCapable @ 0x1403CD468 (HalpDmaIsThinDmaCapable.c)
 *     HalpDmaIsThinDmarCapable @ 0x1403CD4C4 (HalpDmaIsThinDmarCapable.c)
 *     HalJoinDmaDomain @ 0x1403CD4E0 (HalJoinDmaDomain.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140503F38 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1405043D8 (HalpDmaGetIommuInterface.c)
 *     HalpIommuCheckExceptionList @ 0x140510B68 (HalpIommuCheckExceptionList.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140909214 (HalpDmaAllocateLocalScatterPool.c)
 */

_QWORD *__fastcall HalpDmaAllocateChildAdapterV3(
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
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  int SecurityPolicy; // r12d
  __int64 v15; // rbx
  unsigned int v16; // r13d
  __int64 v17; // r15
  int v18; // esi
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // ecx
  char v22; // cl
  __int64 v23; // rcx
  __int64 *v24; // rax
  int LocalScatterPool; // eax
  __int64 v27; // r8
  _QWORD *AdapterByDeviceId; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // [rsp+28h] [rbp-E0h]
  __int16 v32; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v35[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h]
  _QWORD v37[20]; // [rsp+A8h] [rbp-60h] BYREF

  v35[0] = 48LL;
  Handle = 0LL;
  v12 = 0LL;
  v32 = 0;
  v13 = 0LL;
  Object = 0LL;
  v35[3] = 528LL;
  memset(v37, 0, 0x58uLL);
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v15 = 640LL;
  v35[1] = 0LL;
  v16 = 0;
  v35[2] = 0LL;
  v36 = 0LL;
  if ( !a5 )
  {
    v16 = 3 * (a8 + 1);
    v15 = v16 * 8 + 640LL;
  }
  v17 = a11;
  v18 = a10;
  if ( !a11 && a10 )
  {
    if ( a10 == 2 )
    {
LABEL_42:
      v18 = 0;
      goto LABEL_43;
    }
    if ( SecurityPolicy == 1 )
      return v13;
  }
  a11 = 0LL;
  if ( !v17 || !a10 )
    goto LABEL_6;
  if ( (int)HalpDmaGetIommuInterface(v17, v37) < 0 )
  {
    if ( a10 == 2 )
    {
      v18 = 0;
    }
    else if ( SecurityPolicy == 1 )
    {
      return v13;
    }
LABEL_6:
    if ( (int)ObCreateObjectEx(0, HalpDmaAdapterObjectType, (int)v35, 0, v31, v15, 0, 0, &Object, 0LL) >= 0 )
    {
      v13 = Object;
      memset(Object, 0, v15);
      if ( ObReferenceObjectByPointer(v13, 0x20000u, HalpDmaAdapterObjectType, 0) >= 0
        && (int)ObInsertObjectEx((char *)v13, 0LL, 0x20000u, 0, 0, 0LL, &Handle) >= 0 )
      {
        ZwClose(Handle);
        v13[1] = &HalpDmaOperationsV3;
        v19 = &MasterAdapter24V3;
        *((_BYTE *)v13 + 145) = a6;
        *(_DWORD *)v13 = 41943041;
        if ( a3 >= 0x20 )
          v19 = &MasterAdapterV3;
        v13[15] = 0LL;
        v13[16] = 0LL;
        *((_BYTE *)v13 + 144) = 0;
        v13[19] = v19;
        if ( a3 < 0x40 )
          v20 = (1LL << a3) - 1;
        else
          v20 = -1LL;
        v13[17] = v20;
        if ( v20 >= v19[17] )
        {
          v13[39] = 0LL;
          *((_BYTE *)v13 + 338) = 0;
          v13[24] = v13 + 23;
          v13[23] = v13 + 23;
          v13[22] = 0LL;
          *((_BYTE *)v13 + 216) = 0;
          *((_DWORD *)v13 + 56) = a1;
          *((_BYTE *)v13 + 434) = a4;
          *((_BYTE *)v13 + 437) = a7;
          v13[56] = a9;
          *((_BYTE *)v13 + 433) = a5;
          *((_DWORD *)v13 + 94) = -1;
          *((_DWORD *)v13 + 110) = a3;
          *((_DWORD *)v13 + 155) = v16 * 8;
          *((_DWORD *)v13 + 37) = 3;
          *((_DWORD *)v13 + 154) = 0;
          v13[70] = 0LL;
          v13[72] = v13 + 71;
          v13[71] = v13 + 71;
          *((_BYTE *)v13 + 584) = 0;
          *((_DWORD *)v13 + 152) = 0;
          v13[61] = IoFreeAdapterChannelV3Passive;
          v13[62] = v13;
          v13[59] = 0LL;
          if ( !a1 )
          {
            *((_DWORD *)v13 + 56) = 0;
            v21 = 0;
            *((_BYTE *)v13 + 337) = 1;
LABEL_16:
            *a12 = v21;
            *((_DWORD *)v13 + 61) = a2;
            *((_DWORD *)v13 + 128) = 0;
            v13[65] = v17;
            if ( a11 && HIBYTE(v32) )
            {
              v27 = (__int64)&v13[v16 + 80];
              v13[66] = v27;
              if ( ((int (__fastcall *)(_QWORD, __int64, __int64, _QWORD))v37[8])(v37[1], a11, v27, 0LL) >= 0 )
              {
                AdapterByDeviceId = (_QWORD *)HalpDmaFindAdapterByDeviceId(v13[66]);
                v12 = AdapterByDeviceId;
                if ( AdapterByDeviceId )
                {
                  if ( AdapterByDeviceId[65] == v17 )
                  {
                    ObfDereferenceObject(AdapterByDeviceId);
                  }
                  else
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(AdapterByDeviceId + 39), 0LL);
                    LOBYTE(v32) = 1;
                  }
                }
                if ( !v18 || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C02088[0])(v13[66], 0LL) )
                  goto LABEL_18;
                goto LABEL_66;
              }
              v13[66] = 0LL;
              if ( v18 == 2 )
                goto LABEL_18;
              if ( SecurityPolicy == 1 )
                goto LABEL_41;
            }
            LOBYTE(v32) = 0;
            if ( !v18 )
              goto LABEL_18;
LABEL_66:
            v29 = v13[66];
            if ( v29 && !HalpIommuCheckExceptionList(v29) )
            {
              if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *))qword_140C4BE10)(v13[65], 0LL, v13 + 67) < 0 )
              {
                if ( v18 != 2 && SecurityPolicy == 1 )
                  goto LABEL_78;
              }
              else
              {
                *((_DWORD *)v13 + 128) = v18;
              }
            }
LABEL_18:
            v13[63] = 0LL;
            if ( (int)HalJoinDmaDomain((__int64)v13, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
              goto LABEL_19;
            v30 = *((_DWORD *)v13 + 128);
            if ( v30 )
            {
              if ( v30 == 2 )
              {
                *((_DWORD *)v13 + 128) = 0;
              }
              else if ( SecurityPolicy == 1 )
              {
                goto LABEL_78;
              }
              *((_DWORD *)v13 + 128) = 0;
              if ( (int)HalJoinDmaDomain((__int64)v13, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
              {
LABEL_19:
                v22 = v32;
                if ( v12 && (_BYTE)v32 )
                  *((_BYTE *)v12 + 338) = 1;
                *(_QWORD *)(v13[63] + 56LL) = v13;
                goto LABEL_21;
              }
            }
LABEL_78:
            ObfDereferenceObject(v13);
            v22 = v32;
            v13 = 0LL;
            Object = 0LL;
LABEL_21:
            if ( v22 )
            {
              if ( (_InterlockedExchangeAdd64(v12 + 39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 39);
              KeAbPostRelease((ULONG_PTR)(v12 + 39));
              ObfDereferenceObject(v12);
              v13 = Object;
            }
LABEL_22:
            if ( !HIBYTE(v32) )
              goto LABEL_23;
            goto LABEL_41;
          }
          if ( a4 )
            LocalScatterPool = HalpDmaAllocateLocalScatterPool(v13, a1, a3, 0LL);
          else
            LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v13, a1, a3, 0LL);
          if ( LocalScatterPool >= 0 )
          {
            v21 = *((_DWORD *)v13 + 56);
            *((_BYTE *)v13 + 337) = 0;
            goto LABEL_16;
          }
        }
        ObfDereferenceObject(v13);
      }
    }
    v13 = 0LL;
    goto LABEL_22;
  }
  HIBYTE(v32) = 1;
  if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))v37[8])(v37[1], 0LL, 0LL, &a11) == -1073741789
    && a11 )
  {
    v15 += a11;
    goto LABEL_6;
  }
  if ( a10 == 2 )
    goto LABEL_42;
  if ( SecurityPolicy != 1 )
  {
LABEL_43:
    a11 = 0LL;
    goto LABEL_6;
  }
LABEL_41:
  ((void (__fastcall *)(_QWORD))v37[3])(v37[1]);
LABEL_23:
  if ( v13 )
  {
    if ( HalpDmaIsThinDmarCapable((__int64)v13) )
    {
      v24 = &HalpDmaOperationsThinRemap;
      goto LABEL_27;
    }
    if ( HalpDmaIsThinDmaCapable(v23) )
    {
      v24 = &HalpDmaOperationsThin;
LABEL_27:
      v13[1] = v24;
    }
  }
  return v13;
}
