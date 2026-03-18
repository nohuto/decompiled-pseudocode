/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C002A088
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000DA40 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     WPP_RECORDER_SF_sqss @ 0x1C0004B98 (WPP_RECORDER_SF_sqss.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0007270 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIIsEqualHandle @ 0x1C000C8F0 (AMLIIsEqualHandle.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004BA74 (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0056E28 (ACPIInitRemovePowerNodes.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        __int64 *BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 *v7; // r12
  unsigned int v9; // r14d
  unsigned int v10; // esi
  __int64 Pool2; // r15
  unsigned int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r8
  volatile signed __int32 *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r14
  _QWORD *v21; // r9
  _QWORD *i; // r8
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 **v25; // rdx
  __int64 v26; // rax
  ULONG_PTR v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  const char *v31; // rax
  const char *v32; // r8
  __int64 v33; // rdx
  void *v34; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+50h] [rbp-48h]
  volatile signed __int32 *v37; // [rsp+58h] [rbp-40h] BYREF

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v7 = BugCheckParameter3;
  v36 = 0;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *v4);
    v9 = 2;
    v10 -= 2;
    v36 = 2;
  }
  if ( v10 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL * v10, 1349542721LL);
    if ( Pool2 )
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 408) = Pool2;
      v13 = 0;
      while ( 1 )
      {
        v37 = 0LL;
        v14 = 5LL * v9;
        v15 = *(_QWORD *)(a3 + 32);
        if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v15 + 8 * v14 + 40), v7, &v37, 0) < 0 )
        {
          v34 = &unk_1C006FB8B;
          if ( BugCheckParameter2 )
          {
            v16 = *(_QWORD *)(BugCheckParameter2 + 8);
            if ( (v16 & 0x200000000000LL) != 0 && (v16 & 0x400000000000LL) != 0 )
              v34 = *(void **)(BugCheckParameter2 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v34, v16, 13);
          KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, (ULONG_PTR)v7, *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v17 = v37;
        if ( !v37 || *(_WORD *)(*(_QWORD *)v37 + 66LL) != 11 )
        {
          v31 = (const char *)&unk_1C006FB8B;
          v32 = (const char *)&unk_1C006FB8B;
          if ( BugCheckParameter2 )
          {
            v33 = *(_QWORD *)(BugCheckParameter2 + 8);
            LOBYTE(v5) = BugCheckParameter2;
            if ( (v33 & 0x200000000000LL) != 0 )
            {
              v31 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v33 & 0x400000000000LL) != 0 )
                v32 = *(const char **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xAu,
              0xEu,
              BugCheckParameter4,
              *(const char **)(v15 + 8 * v14 + 40),
              v5,
              v31,
              v32);
          KeBugCheckEx(
            0xA5u,
            0x12uLL,
            BugCheckParameter2,
            (ULONG_PTR)BugCheckParameter3,
            *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v18 = *(_QWORD *)(*(_QWORD *)v37 + 104LL);
        v19 = v18;
        v20 = 56LL * v13;
        *(_QWORD *)(v20 + Pool2 + 8) = v18;
        *(_DWORD *)(v20 + Pool2 + 16) = *(_DWORD *)(v18 + 44);
        *(_QWORD *)(v20 + Pool2 + 32) = BugCheckParameter2;
        *(_DWORD *)(v20 + Pool2 + 20) = a4;
        if ( a4 )
        {
          if ( a4 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x400000) != 0 )
          {
            _InterlockedOr64((volatile signed __int64 *)(v18 + 16), 0x220uLL);
            v19 = *(_QWORD *)(v20 + Pool2 + 8);
            v17 = v37;
          }
        }
        else
        {
          *(_BYTE *)(v20 + Pool2 + 24) = 1;
        }
        v21 = (_QWORD *)(v19 + 48);
        for ( i = *(_QWORD **)(v19 + 48); ; i = (_QWORD *)*i )
        {
          if ( i == v21 )
            goto LABEL_17;
          v27 = *(i - 1);
          if ( v27 != BugCheckParameter2
            && AMLIIsEqualHandle(*(_QWORD **)(v27 + 760), *(_QWORD **)(BugCheckParameter2 + 760))
            && ((*(_DWORD *)(v27 + 1000) & 0x20000) == 0 || *(_DWORD *)(v27 + 896) == *(_DWORD *)(*(_QWORD *)v28 + 40LL)) )
          {
            break;
          }
        }
        ACPIInitRemovePowerNodes(v27);
        if ( (*(_DWORD *)(v27 + 1000) & 0x20000) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
          v29 = *(_QWORD *)(v27 + 880);
          if ( *(_QWORD *)(v29 + 8) != v27 + 880 || (v30 = *(_QWORD **)(v27 + 888), *v30 != v27 + 880) )
LABEL_36:
            __fastfail(3u);
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          ACPIInitDereferenceDeviceExtensionLocked(v27);
          KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
        }
LABEL_17:
        v23 = *(_QWORD *)(v20 + Pool2 + 8) + 48LL;
        v24 = (__int64 *)(v20 + Pool2 + 40);
        v25 = *(__int64 ***)(*(_QWORD *)(v20 + Pool2 + 8) + 56LL);
        if ( *v25 != (__int64 *)v23 )
          goto LABEL_36;
        *v24 = v23;
        v24[1] = (__int64)v25;
        *v25 = v24;
        *(_QWORD *)(v23 + 8) = v24;
        v26 = v13 < v10 - 1 ? v20 + Pool2 + 56 : 0LL;
        *(_QWORD *)(v20 + Pool2) = v26;
        AMLIDereferenceHandleEx(v17);
        ++v13;
        v9 = ++v36;
        if ( v13 >= v10 )
          break;
        v7 = BugCheckParameter3;
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
