/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0006A34
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A08E0 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A0C78 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildFilter @ 0x1C0005430 (ACPIBuildFilter.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000776C (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     ACPIBuildMissingChildren @ 0x1C004A3DC (ACPIBuildMissingChildren.c)
 *     AcpiQueryPciBusInterface @ 0x1C0091224 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C009140C (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIDetectFilterMatch @ 0x1C0093268 (ACPIDetectFilterMatch.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     ACPIBuildFlushQueue @ 0x1C0094E40 (ACPIBuildFlushQueue.c)
 *     ACPIInternalIsPci @ 0x1C00A0FB0 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // r12
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rdx
  int v7; // edx
  int v8; // edi
  KIRQL v9; // dl
  __int64 v10; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v15; // eax
  char v16; // r8
  KIRQL v17; // al
  __int64 v18; // r12
  NTSTATUS v19; // eax
  ULONG_PTR v20; // r12
  __int64 v21; // rax
  void *v22; // rsi
  void *v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rcx
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp+18h] BYREF
  struct _DEVICE_OBJECT *v35; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v35 = 0LL;
  v34 = 0LL;
  v4 = DeviceExtension;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v8 = ACPIBuildFlushQueue(v4, v6);
  if ( v8 < 0 )
  {
    v21 = *(_QWORD *)(v4 + 8);
    v22 = &unk_1C006FB8B;
    v23 = &unk_1C006FB8B;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v22 = *(void **)(v4 + 608);
      if ( (v21 & 0x400000000000LL) != 0 )
        v23 = *(void **)(v4 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v24 = 16;
    goto LABEL_33;
  }
  v8 = ACPIDevicePowerFlushQueue(v4);
  if ( v8 < 0 )
  {
    v25 = *(_QWORD *)(v4 + 8);
    v22 = &unk_1C006FB8B;
    v23 = &unk_1C006FB8B;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v22 = *(void **)(v4 + 608);
      if ( (v25 & 0x400000000000LL) != 0 )
        v23 = *(void **)(v4 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v24 = 17;
LABEL_33:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v24,
      (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
      v8,
      v4,
      (__int64)v22,
      (__int64)v23);
    return (unsigned int)v8;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v10 = *(_QWORD *)(v4 + 800);
  if ( v10 == v4 + 800 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)(v10 - 816);
    ACPIInitReferenceDeviceExtension((__int64)v11);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  if ( !v11 )
    goto LABEL_8;
  while ( 1 )
  {
    v34 = 0LL;
    if ( (int)ACPIGet((_DWORD)v11, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v34, 0LL) >= 0
      && ((v11[1] & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x800000) != 0 && (*(_DWORD *)(v4 + 8) & 0x2000000) != 0) )
    {
      v15 = ACPIDetectFilterMatch(v11, a2, &v35);
      v16 = v15;
      if ( v15 < 0 )
      {
        v30 = v11[1];
        v27 = &unk_1C006FB8B;
        v28 = &unk_1C006FB8B;
        if ( (v30 & 0x200000000000LL) != 0 )
        {
          v27 = (void *)v11[76];
          if ( (v30 & 0x400000000000LL) != 0 )
            v28 = (void *)v11[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = 19;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !v35 )
          goto LABEL_15;
        v19 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(v2 + 8), (__int64)v11, v35);
        v16 = v19;
        if ( v19 < 0 )
        {
          v26 = v11[1];
          v27 = &unk_1C006FB8B;
          v28 = &unk_1C006FB8B;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v27 = (void *)v11[76];
            if ( (v26 & 0x400000000000LL) != 0 )
              v28 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = 18;
LABEL_52:
            v31 = (__int64)v27;
            LOBYTE(v27) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v27,
              22,
              v29,
              (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
              v16,
              (char)v11,
              v31,
              (__int64)v28);
          }
        }
        else
        {
          v20 = v11[96];
          if ( (int)AcpiQueryPciBusInterface(v20) >= 0 )
            ACPIInternalIsPci(v20);
          ACPIFilterQueryBusD3ColdSupport(v20);
        }
      }
    }
LABEL_15:
    v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v18 = v11[102];
    if ( v18 == v4 + 800 )
      break;
    if ( *(_DWORD *)(v18 - 84) )
      _InterlockedIncrement((volatile signed __int32 *)(v18 - 84));
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
    ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
    v11 = (_QWORD *)(v18 - 816);
    v2 = a1;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
  ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
LABEL_8:
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 1000) & 0x8000LL) != 0 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v13) = (*(_QWORD *)(v4 + 1000) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 760), v12, v13);
  }
  return 0LL;
}
