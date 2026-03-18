/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14088A520 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x140339960 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1403502F0 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406E0E64 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1406E1510 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14070DC10 (FsRtlNotifyUninitializeSync.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        struct _REAL_NOTIFY_SYNC **a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  const void **v10; // r13
  struct _REAL_NOTIFY_SYNC **v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v14; // rax
  struct _REAL_NOTIFY_SYNC *v15; // r12
  char *v16; // rdi
  __int16 *v17; // rbx
  char v18; // r14
  unsigned __int8 (__fastcall *v19)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v20)(_QWORD); // rax
  __int16 v21; // cx
  unsigned int v22; // r12d
  char *v23; // rdx
  char *v24; // r8
  unsigned int v25; // r14d
  unsigned int v26; // r13d
  _DWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  PVOID PoolWithTag; // rax
  __int64 v32; // rcx
  char *v33; // rbx
  char *v34; // rbx
  __int16 v35; // cx
  __int16 v36; // ax
  char v37; // [rsp+31h] [rbp-A7h]
  struct _REAL_NOTIFY_SYNC *v38; // [rsp+50h] [rbp-88h]
  PNOTIFY_SYNC NotifySync[4]; // [rsp+60h] [rbp-78h] BYREF
  char *v40; // [rsp+80h] [rbp-58h]
  char *v41; // [rsp+88h] [rbp-50h]

  v10 = a4;
  v11 = a2;
  if ( *a2 == (struct _REAL_NOTIFY_SYNC *)a2 || a10 && *(_DWORD *)a10 < 0x50u )
    return;
  if ( !*a1 )
  {
    NotifySync[0] = 0LL;
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v14 = *a1;
  }
  ++*(_DWORD *)(v14 + 64);
  v15 = *v11;
  while ( 1 )
  {
    NotifySync[2] = v15;
    v38 = v15;
    if ( v15 == (struct _REAL_NOTIFY_SYNC *)v11 )
      break;
    v16 = (char *)v15 - 32;
    NotifySync[1] = (struct _REAL_NOTIFY_SYNC *)((char *)v15 - 32);
    v41 = (char *)v15 - 32;
    v17 = (__int16 *)((char *)v15 + 40);
    v18 = (unsigned __int8)*v17 >> 7;
    v37 = v18;
    if ( (*((_DWORD *)v15 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v17 & 1) != 0
       && ((v19 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))*((_QWORD *)v16 + 2)) == 0LL
        || v19(*((_QWORD *)v16 + 1), a7, *((_QWORD *)v16 + 3)))) )
    {
      v20 = (unsigned __int8 (__fastcall *)(_QWORD))*((_QWORD *)v16 + 8);
      if ( !v20 || !a8 || v20(*((_QWORD *)v16 + 1)) )
      {
        v21 = *v17;
        if ( (*v17 & 2) == 0 )
        {
          v22 = *((_DWORD *)v16 + 24);
          if ( v22 )
          {
            v23 = 0LL;
            v40 = 0LL;
            if ( *((_DWORD *)v16 + 25) )
            {
              v22 = *((_DWORD *)v16 + 25);
            }
            else
            {
              v24 = (char *)*((_QWORD *)v16 + 6);
              if ( v24 != v16 + 48 )
              {
                v23 = v24 - 168;
                v40 = v24 - 168;
                v22 = *(_DWORD *)(*((_QWORD *)v24 + 2) + 8LL);
              }
            }
            v25 = *(unsigned __int16 *)a3 + (v18 != 0 ? 84 : 12);
            if ( v10 )
              v25 += *(unsigned __int16 *)v10 + 2;
            v26 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
            if ( v25 > v22 || v25 + v26 > v22 )
            {
              v35 = v21 | 2;
              *v17 = v35;
              v15 = v38;
            }
            else
            {
              v27 = 0LL;
              v28 = *((_QWORD *)v16 + 11);
              if ( v28 )
              {
                *(_DWORD *)(v28 + *((unsigned int *)v16 + 27)) = v26 - *((_DWORD *)v16 + 27);
                *((_DWORD *)v16 + 27) = v26;
                v27 = (_DWORD *)(*((_QWORD *)v16 + 11) + v26);
              }
              else
              {
                if ( !v23 )
                  goto LABEL_30;
                v29 = *((_QWORD *)v23 + 3);
                if ( v29 )
                {
                  v27 = (_DWORD *)*((_QWORD *)v23 + 3);
                  *((_QWORD *)v16 + 11) = v29;
                }
                else
                {
                  v30 = *((_QWORD *)v23 + 1);
                  if ( !v30 )
                    goto LABEL_30;
                  if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
                    v27 = *(_DWORD **)(v30 + 24);
                  else
                    v27 = MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, 0x40000010u);
                  *((_QWORD *)v16 + 11) = v27;
                }
                *((_DWORD *)v16 + 25) = v22;
              }
LABEL_30:
              if ( !*((_QWORD *)v16 + 11) )
              {
                PsChargePoolQuota(*((PEPROCESS *)v16 + 15), PagedPool, v22);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v22, 0x4E725346u);
                *((_QWORD *)v16 + 11) = PoolWithTag;
                *((_QWORD *)v16 + 10) = PoolWithTag;
                *((_DWORD *)v16 + 25) = v22;
                v27 = (_DWORD *)*((_QWORD *)v16 + 11);
              }
              v15 = v38;
              if ( v27 )
              {
                v32 = *((unsigned int *)v16 + 26);
                if ( v26 > (unsigned int)v32 )
                  memset((void *)(*((_QWORD *)v16 + 11) + v32), 0, v26 - (unsigned int)v32);
                *v27 = 0;
                v27[1] = a6;
                if ( v37 )
                {
                  *((_QWORD *)v27 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v27 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v27 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v27 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v27 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v27 + 6) = *(_QWORD *)(a10 + 48);
                  v27[14] = *(_DWORD *)(a10 + 56);
                  v27[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v27 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v27 + 9) = *(_QWORD *)(a10 + 72);
                  v27[20] = v25 - 84;
                  v33 = (char *)(v27 + 21);
                }
                else
                {
                  v27[2] = v25 - 12;
                  v33 = (char *)(v27 + 3);
                }
                memmove(v33, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v34 = &v33[*(unsigned __int16 *)a3];
                  *(_WORD *)v34 = 58;
                  memmove(v34 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v16 + 26) = v25 + v26;
              }
              v17 = (__int16 *)(v41 + 72);
              v35 = *((_WORD *)v41 + 36);
            }
            if ( (v35 & 2) != 0 && *((_QWORD *)v16 + 11) )
            {
              if ( *((_QWORD *)v16 + 10) )
              {
                PsReturnProcessPagedPoolQuota(*((struct _KPROCESS **)v16 + 15), *((unsigned int *)v16 + 25));
                ExFreePoolWithTag(*((PVOID *)v16 + 10), 0);
              }
              *((_QWORD *)v16 + 11) = 0LL;
              *((_QWORD *)v16 + 10) = 0LL;
              *((_QWORD *)v16 + 13) = 0LL;
              *((_DWORD *)v16 + 25) = 0;
            }
            v10 = a4;
          }
          else
          {
            v15 = v38;
          }
        }
        v36 = *v17;
        if ( a6 == 4 )
        {
          *v17 = v36 | 8;
        }
        else
        {
          *v17 = v36 & 0xFFF7;
          if ( *((char **)v16 + 6) != v16 + 48 )
            FsRtlNotifyCompleteIrpList(v16, 0LL);
        }
      }
    }
    v15 = *(struct _REAL_NOTIFY_SYNC **)v15;
    v11 = a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
