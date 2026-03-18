/*
 * XREFs of ApplyPathsModality @ 0x1C00B9B28
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C00B31CC (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B9E20 (DrvNotifyModeChangeStartStop.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        struct _ERESOURCE *a4,
        struct _MDEV *a5,
        _BYTE *a6,
        struct _MDEV **a7,
        __int64 a8)
{
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // esi
  int v22; // ebx
  __int64 v23; // rdx
  int v24; // ebx
  unsigned int v25; // r9d
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // r8
  int v30; // eax
  struct _MDEV *v31; // r8
  struct _MDEV *v32; // rdx
  unsigned int v33; // edi
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  _QWORD *v41; // rax

  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore(a1) )
  {
    LOBYTE(v12) = 1;
    DrvNotifyModeChangeStartStop(v12);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
      WdLogEvent5_WdAssertion(v38);
    }
    v16 = a2;
    LODWORD(v16) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C024C8C0)(v16, a1, a8) < 0 )
    {
      *a6 = 1;
      v24 = -1;
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 36);
      if ( !v20 || !*(_QWORD *)(a1 + 40) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v18, v17, v19);
        WdLogEvent5_WdAssertion(v39);
        v20 = *(_DWORD *)(a1 + 36);
      }
      v21 = 0;
      v22 = (a2 & 0x400000) != 0;
      if ( v20 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        do
        {
          if ( (v22 & 1) != 0 )
          {
            v40 = 336LL * v21;
            if ( *(_DWORD *)(v40 + v23 + 88) != *(_DWORD *)(v40 + v23 + 120) )
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdEvent(v40 + v23, v23, v19);
              v41[3] = *(int *)(v40 + *(_QWORD *)(a1 + 40) + 4);
              v41[4] = *(unsigned int *)(v40 + *(_QWORD *)(a1 + 40));
              v41[5] = *(unsigned int *)(v40 + *(_QWORD *)(a1 + 40) + 88);
              v41[6] = *(unsigned int *)(v40 + *(_QWORD *)(a1 + 40) + 120);
              WdLogEvent5_WdEvent(v41);
              v23 = *(_QWORD *)(a1 + 40);
              v22 &= ~1u;
            }
          }
          if ( *(_BYTE *)(336LL * v21 + v23 + 76) )
            a3 = 1;
          ++v21;
        }
        while ( v21 < *(_DWORD *)(a1 + 36) );
      }
      v24 = DrvChangeDisplaySettingsInternal(
              0LL,
              0LL,
              (struct D3DKMT_GETPATHSMODALITY *)a1,
              a4,
              0,
              1,
              a5,
              a7,
              0,
              1,
              a3,
              1,
              v22);
      if ( v24 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C024C8C8)(a1);
      if ( v24 != 2 )
      {
LABEL_24:
        if ( v24 >= 0 )
        {
          v30 = qword_1C0251600 ? qword_1C0251600() : -1073741637;
          if ( v30 >= 0 && a7 && *a7 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
            EngAcquireSemaphore(ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
            v32 = *a7;
            v33 = 0;
            if ( *((_DWORD *)*a7 + 5) )
            {
              do
              {
                v31 = v32;
                v34 = *((_QWORD *)v32 + 7 * v33 + 5);
                if ( v34 && (*(_DWORD *)(v34 + 40) & 1) != 0 && qword_1C0251608 )
                {
                  qword_1C0251608(v34, 0LL, v32);
                  v31 = *a7;
                }
                ++v33;
                v32 = v31;
              }
              while ( v33 < *((_DWORD *)v31 + 5) );
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, (int)v31);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
              PsLeavePriorityRegion(v36);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v35);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
              PsLeavePriorityRegion(v37);
            }
          }
        }
        goto LABEL_23;
      }
      v25 = *(_DWORD *)(a1 + 36);
      if ( v25 )
      {
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = 0;
          while ( 1 )
          {
            v28 = 336LL * v27;
            if ( *(_DWORD *)(v28 + v26 + 88) || *(_DWORD *)(v28 + v26 + 92) || *(_DWORD *)(v28 + v26 + 124) )
              break;
            if ( ++v27 >= v25 )
              goto LABEL_23;
          }
          *a7 = a5;
          v24 = 0;
          GreIncrementDisplaySettingsUniqueness();
          goto LABEL_24;
        }
      }
    }
LABEL_23:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v24;
  }
  return 0xFFFFFFFFLL;
}
