/*
 * XREFs of ApplyPathsModality @ 0x1C00B125C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60 (GreIncrementDisplaySettingsUniqueness.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0097784 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // esi
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // ebx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // r8
  int v32; // eax
  struct _MDEV *v33; // r8
  struct _MDEV *v34; // rdx
  unsigned int v35; // edi
  __int64 v36; // rcx
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // rax

  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore(a1) )
  {
    LOBYTE(v12) = 1;
    DrvNotifyModeChangeStartStop(v12);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v40);
    }
    v17 = a2;
    LODWORD(v17) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C02528E0)(v17, a1, a8) < 0 )
    {
      *a6 = 1;
      v26 = -1;
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 36);
      if ( !v22 || !*(_QWORD *)(a1 + 40) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v41);
        v22 = *(_DWORD *)(a1 + 36);
      }
      v23 = 0;
      v24 = (a2 & 0x400000) != 0;
      if ( v22 )
      {
        v25 = *(_QWORD *)(a1 + 40);
        do
        {
          if ( (v24 & 1) != 0 )
          {
            v42 = 336LL * v23;
            if ( *(_DWORD *)(v42 + v25 + 88) != *(_DWORD *)(v42 + v25 + 120) )
            {
              v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v42 + v25, v25, v20);
              v43[3] = *(int *)(v42 + *(_QWORD *)(a1 + 40) + 4);
              v43[4] = *(unsigned int *)(v42 + *(_QWORD *)(a1 + 40));
              v43[5] = *(unsigned int *)(v42 + *(_QWORD *)(a1 + 40) + 88);
              v43[6] = *(unsigned int *)(v42 + *(_QWORD *)(a1 + 40) + 120);
              WdLogEvent5_WdEvent(v43);
              v25 = *(_QWORD *)(a1 + 40);
              v24 &= ~1u;
            }
          }
          if ( *(_BYTE *)(336LL * v23 + v25 + 76) )
            a3 = 1;
          ++v23;
        }
        while ( v23 < *(_DWORD *)(a1 + 36) );
      }
      v26 = DrvChangeDisplaySettingsInternal(
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
              v24);
      if ( v26 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C02528E8)(a1);
      if ( v26 != 2 )
      {
LABEL_24:
        if ( v26 >= 0 )
        {
          v32 = qword_1C02575C0 ? qword_1C02575C0() : -1073741637;
          if ( v32 >= 0 && a7 && *a7 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
            EngAcquireSemaphore(ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
            v34 = *a7;
            v35 = 0;
            if ( *((_DWORD *)*a7 + 5) )
            {
              do
              {
                v33 = v34;
                v36 = *((_QWORD *)v34 + 7 * v35 + 5);
                if ( v36 && (*(_DWORD *)(v36 + 40) & 1) != 0 && qword_1C02575C8 )
                {
                  qword_1C02575C8(v36, 0LL, v34);
                  v33 = *a7;
                }
                ++v35;
                v34 = v33;
              }
              while ( v35 < *((_DWORD *)v33 + 5) );
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, (int)v33);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
              PsLeavePriorityRegion(v38);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v37);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
              PsLeavePriorityRegion(v39);
            }
          }
        }
        goto LABEL_23;
      }
      v27 = *(_DWORD *)(a1 + 36);
      if ( v27 )
      {
        v28 = *(_QWORD *)(a1 + 40);
        if ( v28 )
        {
          v29 = 0;
          while ( 1 )
          {
            v30 = 336LL * v29;
            if ( *(_DWORD *)(v30 + v28 + 88) || *(_DWORD *)(v30 + v28 + 92) || *(_DWORD *)(v30 + v28 + 124) )
              break;
            if ( ++v29 >= v27 )
              goto LABEL_23;
          }
          *a7 = a5;
          v26 = 0;
          GreIncrementDisplaySettingsUniqueness();
          goto LABEL_24;
        }
      }
    }
LABEL_23:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v26;
  }
  return 0xFFFFFFFFLL;
}
