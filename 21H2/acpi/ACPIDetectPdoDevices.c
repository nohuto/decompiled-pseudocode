/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0006CE8
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0091924 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A0C78 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000776C (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIBuildMissingChildren @ 0x1C004A3DC (ACPIBuildMissingChildren.c)
 *     ACPIDetectPdoMatch @ 0x1C0093204 (ACPIDetectPdoMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C0094E40 (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  PVOID *v2; // r13
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // r15
  unsigned int *v5; // r12
  unsigned int v6; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  KIRQL v10; // di
  __int64 v11; // rdx
  int v12; // edx
  int v13; // edi
  KIRQL v14; // dl
  __int64 v15; // rdi
  _DWORD *Pool2; // rax
  ULONG_PTR v18; // rdi
  KIRQL v19; // dl
  char v20; // r14
  KIRQL v21; // al
  __int64 v22; // rcx
  char v23; // bp
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rax
  _DWORD *v27; // rdi
  unsigned int v28; // r14d
  KIRQL v29; // al
  KIRQL v30; // dl
  __int64 v31; // rcx
  __int64 i; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // esi
  __int64 v36; // r13
  NTSTATUS v37; // eax
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  void *v42; // rcx
  void *v43; // r10
  int v44; // r9d
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rbp
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v57; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v2 && *v2 )
  {
    v6 = *(_DWORD *)*v2;
    v5 = (unsigned int *)*v2;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v9 = *(_QWORD *)(DeviceExtension + 8);
  v10 = v8;
  if ( (v9 & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
    v9 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v9 & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 1000) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 1000), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
  LOBYTE(v11) = 1;
  v13 = ACPIBuildFlushQueue(DeviceExtension, v11);
  if ( v13 < 0 )
  {
    v41 = *(_QWORD *)(DeviceExtension + 8);
    v42 = &unk_1C006FB8B;
    v43 = &unk_1C006FB8B;
    if ( (v41 & 0x200000000000LL) != 0 )
    {
      v42 = *(void **)(DeviceExtension + 608);
      if ( (v41 & 0x400000000000LL) != 0 )
        v43 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v13;
    v44 = 20;
    goto LABEL_76;
  }
  v13 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v13 < 0 )
  {
    v45 = *(_QWORD *)(DeviceExtension + 8);
    v42 = &unk_1C006FB8B;
    v43 = &unk_1C006FB8B;
    if ( (v45 & 0x200000000000LL) != 0 )
    {
      v42 = *(void **)(DeviceExtension + 608);
      if ( (v45 & 0x400000000000LL) != 0 )
        v43 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v13;
    v44 = 21;
LABEL_76:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      v44,
      (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
      v13,
      DeviceExtension,
      (__int64)v42,
      (__int64)v43);
    return (unsigned int)v13;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v15 = *(_QWORD *)(DeviceExtension + 800);
  if ( v15 == DeviceExtension + 800 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
    if ( v5 )
      return 0LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1148216129LL);
    if ( Pool2 )
    {
      *Pool2 = 0;
      goto LABEL_16;
    }
    return 3221225626LL;
  }
  v18 = v15 - 816;
  ACPIInitReferenceDeviceExtension(v18);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
  v20 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v18 + 8), 0x100uLL);
    v57 = 0LL;
    if ( (int)ACPIGet(v18, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v57, 0LL) >= 0
      && ((*(_QWORD *)(v18 + 8) & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v18 + 1000) & 0x200000LL) != 0) )
    {
      if ( !(unsigned __int8)ACPIDetectPdoMatch(v18, v5) )
      {
        if ( ACPIBuildPdo(
               *(struct _DRIVER_OBJECT **)(v3 + 8),
               v18,
               *(struct _DEVICE_OBJECT **)(DeviceExtension + 784),
               (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0) < 0 )
          goto LABEL_23;
        ++v6;
        goto LABEL_33;
      }
      if ( (*(_BYTE *)(v18 + 8) & 0x20) != 0 )
      {
        v24 = *(_QWORD *)(v18 + 768);
        if ( v24 )
        {
          if ( v5 && (v46 = 0LL, *v5) )
          {
            while ( *(_QWORD *)&v5[2 * v46 + 2] != v24 )
            {
              v46 = (unsigned int)(v46 + 1);
              if ( (unsigned int)v46 >= *v5 )
                goto LABEL_36;
            }
            if ( (*(_DWORD *)(v18 + 1000) & 0x20000000) != 0 )
            {
              --v6;
              goto LABEL_33;
            }
          }
          else
          {
LABEL_36:
            if ( (*(_DWORD *)(v18 + 1000) & 0x20000000) == 0 )
            {
              ++v6;
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 8), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_33:
              v20 = 1;
            }
          }
        }
      }
    }
LABEL_23:
    v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v22 = *(_QWORD *)(v18 + 816);
    if ( v22 == DeviceExtension + 800 )
    {
      v23 = 1;
    }
    else
    {
      v4 = v22 - 816;
      if ( *(_DWORD *)(v22 - 816 + 732) )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 732));
      v23 = 0;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
    ACPIInitDereferenceDeviceExtensionUnlocked(v18);
    if ( v23 )
      break;
    v3 = a1;
    v18 = v4;
  }
  v2 = a2;
  if ( v20 )
  {
    v25 = 16;
    if ( v6 )
      v25 = 8 * v6 + 8;
    v26 = ExAllocatePool2(64LL, v25, 1148216129LL);
    v27 = (_DWORD *)v26;
    if ( v26 )
    {
      if ( v5 )
      {
        memmove((void *)(v26 + 8), v5 + 2, 8LL * *v5);
        v28 = *v5;
      }
      else
      {
        v28 = 0;
      }
      v29 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v30 = v29;
      v31 = *(_QWORD *)(DeviceExtension + 800);
      if ( v31 == DeviceExtension + 800 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
        ExFreePoolWithTag(v27, 0);
      }
      else
      {
        for ( i = v31 - 816; i; i = v34 - 816 )
        {
          v33 = *(_QWORD *)(i + 8);
          if ( (v33 & 0x20) != 0 )
          {
            v39 = *(_QWORD *)(i + 768);
            if ( v39 )
            {
              if ( ((v33 & 0x2000000000002LL) == 0
                 || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(i + 1000) & 0x200000) != 0)
                && (*(_DWORD *)(i + 1000) & 0x20000000) == 0 )
              {
                if ( v28 >= v6 )
                  break;
                v40 = v28++;
                *(_QWORD *)&v27[2 * v40 + 2] = v39;
                _InterlockedAnd64((volatile signed __int64 *)(i + 8), 0xFFFFFFFFFFFFFEFFuLL);
              }
            }
          }
          if ( v6 == v28 )
            break;
          v34 = *(_QWORD *)(i + 816);
          if ( v34 == DeviceExtension + 800 )
            break;
        }
        *v27 = v28;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v30);
        if ( v5 )
          v35 = *v5;
        else
          v35 = 0;
        if ( v35 < v28 )
        {
          do
          {
            v36 = v35;
            v37 = ObReferenceObjectByPointer(*(PVOID *)&v27[2 * v35 + 2], 0, 0LL, 0);
            if ( v37 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = 2;
                WPP_RECORDER_SF_qD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v38,
                  22,
                  22,
                  (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                  *(_QWORD *)&v27[2 * v35 + 2],
                  v37);
              }
              --*v27;
              --v35;
              v47 = (unsigned int)*v27;
              --v28;
              v48 = *(_QWORD *)&v27[2 * v47 + 2];
              *(_QWORD *)&v27[2 * v47 + 2] = *(_QWORD *)&v27[2 * v36 + 2];
              *(_QWORD *)&v27[2 * v36 + 2] = v48;
            }
            ++v35;
          }
          while ( v35 < v28 );
          v2 = a2;
        }
        if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
        {
          v49 = *v27;
          v50 = 0LL;
          if ( *v27 )
          {
            do
            {
              v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v27[2 * v50 + 2] + 64LL) + 8LL);
              if ( (v51 & 0x12000000000LL) != 0 && (v51 & 0x40000000000000LL) != 0 )
              {
                IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 768));
                v49 = *v27;
              }
              if ( (v51 & 0x3000000000LL) != 0 )
              {
                v52 = 0LL;
                if ( v49 )
                {
                  v53 = v51 & 0x1000000000LL;
                  do
                  {
                    v54 = *(_QWORD *)&v27[2 * v52 + 2];
                    if ( (_DWORD)v52 != (_DWORD)v50
                      && (((-(__int64)(v53 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v54 + 64)
                                                                                                  + 8LL)) != 0
                      && (*(_QWORD *)(*(_QWORD *)(v54 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                    {
                      IoSetDependency(*(_QWORD *)&v27[2 * v50 + 2], v54, 2LL);
                    }
                    v49 = *v27;
                    v52 = (unsigned int)(v52 + 1);
                  }
                  while ( (unsigned int)v52 < *v27 );
                }
              }
              v50 = (unsigned int)(v50 + 1);
            }
            while ( (unsigned int)v50 < v49 );
            v2 = a2;
          }
        }
        if ( v5 )
          ExFreePoolWithTag(*v2, 0);
        *v2 = v27;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( v5 )
    return 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1148216129LL);
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
LABEL_16:
  *v2 = Pool2;
  return 0LL;
}
