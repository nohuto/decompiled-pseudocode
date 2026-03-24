/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0015E24
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00155F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001ED50 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00198D8 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C002C784 (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004CCCC (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitRemovePowerNodes @ 0x1C00567A8 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C0063534 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        _QWORD *BugCheckParameter2,
        __int64 *BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v9; // r13d
  unsigned int v10; // esi
  _BYTE *PoolWithTag; // rax
  _BYTE *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // r14
  __int64 v22; // rdx
  _QWORD *v23; // r9
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 **v27; // r8
  ULONG_PTR v28; // rbp
  __int64 v29; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  void *v33; // rdx
  unsigned int v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+54h] [rbp-44h]
  unsigned __int64 v36[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v35 = 0;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *v4);
    v9 = 2;
    v10 -= 2;
    v35 = 2;
  }
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v10, 0x50706341u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v10);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      BugCheckParameter2[v6 + 46] = v13;
      v34 = 0;
      do
      {
        v36[0] = 0LL;
        v14 = 5LL * v9;
        v15 = *(_QWORD *)(a3 + 32);
        if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v15 + 40LL * v9 + 40), BugCheckParameter3, v36, 0) < 0 )
        {
          v33 = &unk_1C00701BA;
          if ( BugCheckParameter2 )
          {
            v17 = BugCheckParameter2[1];
            if ( (v17 & 0x200000000000LL) != 0 && (v17 & 0x400000000000LL) != 0 )
              v33 = (void *)BugCheckParameter2[72];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v33, v17, 13);
          KeBugCheckEx(
            0xA5u,
            6uLL,
            (ULONG_PTR)BugCheckParameter2,
            (ULONG_PTR)BugCheckParameter3,
            *(_QWORD *)(v15 + 40LL * v9 + 40));
        }
        v18 = v36[0];
        if ( !v36[0] || *(_WORD *)(*(_QWORD *)v36[0] + 66LL) != 11 )
        {
          if ( BugCheckParameter2 )
            v16 = BugCheckParameter2[1];
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = 2;
            WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v16, 10, 14);
          }
          KeBugCheckEx(
            0xA5u,
            0x12uLL,
            (ULONG_PTR)BugCheckParameter2,
            (ULONG_PTR)BugCheckParameter3,
            *(_QWORD *)(v15 + 8 * v14 + 40));
        }
        v19 = *(_QWORD *)(*(_QWORD *)v36[0] + 104LL);
        v20 = v34;
        v21 = 56LL * v34;
        *(_QWORD *)&v13[v21 + 8] = v19;
        *(_DWORD *)&v13[v21 + 16] = *(_DWORD *)(v19 + 44);
        *(_QWORD *)&v13[v21 + 32] = BugCheckParameter2;
        *(_DWORD *)&v13[v21 + 20] = a4;
        if ( !a4 )
          v13[v21 + 24] = 1;
        v22 = v19;
        if ( a4 == 1 && (BugCheckParameter2[1] & 0x400000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v19 + 16), 0x220uLL);
          v22 = *(_QWORD *)&v13[v21 + 8];
          v18 = v36[0];
        }
        v23 = (_QWORD *)(v22 + 48);
        v24 = *(_QWORD **)(v22 + 48);
        if ( v24 != (_QWORD *)(v22 + 48) )
        {
          while ( 1 )
          {
            v28 = *(v24 - 1);
            if ( (_QWORD *)v28 != BugCheckParameter2
              && (unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(v28 + 720), BugCheckParameter2[90])
              && ((*(_DWORD *)(v28 + 960) & 0x20000) == 0 || *(_DWORD *)(v28 + 856) == *(_DWORD *)(*(_QWORD *)v29 + 40LL)) )
            {
              break;
            }
            v24 = (_QWORD *)*v24;
            if ( v24 == v23 )
              goto LABEL_33;
          }
          ACPIInitRemovePowerNodes(v28);
          if ( (*(_DWORD *)(v28 + 960) & 0x20000) != 0 )
          {
            KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
            v31 = *(_QWORD *)(v28 + 840);
            if ( *(_QWORD *)(v31 + 8) != v28 + 840 || (v32 = *(_QWORD **)(v28 + 848), *v32 != v28 + 840) )
LABEL_34:
              __fastfail(3u);
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            ACPIInitDereferenceDeviceExtensionLocked(v28);
            KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
          }
LABEL_33:
          v20 = v34;
        }
        v25 = *(_QWORD *)&v13[v21 + 8] + 48LL;
        v26 = (__int64 *)&v13[v21 + 40];
        v27 = *(__int64 ***)(*(_QWORD *)&v13[v21 + 8] + 56LL);
        if ( *v27 != (__int64 *)v25 )
          goto LABEL_34;
        *v26 = v25;
        v26[1] = (__int64)v27;
        *v27 = v26;
        *(_QWORD *)(v25 + 8) = v26;
        *(_QWORD *)&v13[v21] = (unsigned __int64)&v13[v21 + 56] & -(__int64)(v20 < v10 - 1);
        AMLIDereferenceHandleEx(v18);
        v9 = v35 + 1;
        v34 = v20 + 1;
        ++v35;
      }
      while ( v20 + 1 < v10 );
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
