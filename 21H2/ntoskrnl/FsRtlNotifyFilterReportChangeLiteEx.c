/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14088D770 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     PsChargePoolQuota @ 0x140228820 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1405F0BB8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1405F1270 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14061EF30 (FsRtlNotifyUninitializeSync.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  ULONG v21; // r12d
  char *v22; // rcx
  ULONG v23; // r14d
  ULONG v24; // r13d
  NTSTATUS v25; // eax
  __int16 v26; // r9
  __int64 v27; // r10
  _DWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  PVOID PoolWithTag; // rax
  __int64 v33; // rcx
  char *v34; // rbx
  char *v35; // rbx
  __int16 v36; // r9
  __int16 v37; // ax
  char v38; // [rsp+31h] [rbp-A7h]
  ULONG pulResult[2]; // [rsp+48h] [rbp-90h] BYREF
  struct _REAL_NOTIFY_SYNC *v40; // [rsp+50h] [rbp-88h]
  ULONG v41; // [rsp+58h] [rbp-80h]
  PNOTIFY_SYNC NotifySync[3]; // [rsp+60h] [rbp-78h] BYREF
  NTSTATUS v43; // [rsp+78h] [rbp-60h]
  char *v44; // [rsp+80h] [rbp-58h]
  char *v45; // [rsp+88h] [rbp-50h]

  v10 = a4;
  v11 = a2;
  pulResult[1] = 0;
  pulResult[0] = 0;
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
    v40 = v15;
    if ( v15 == (struct _REAL_NOTIFY_SYNC *)v11 )
      break;
    v16 = (char *)v15 - 32;
    NotifySync[1] = (struct _REAL_NOTIFY_SYNC *)((char *)v15 - 32);
    v45 = (char *)v15 - 32;
    v17 = (__int16 *)((char *)v15 + 40);
    v18 = (unsigned __int8)*v17 >> 7;
    v38 = v18;
    if ( (*((_DWORD *)v15 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v17 & 1) != 0
       && ((v19 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))*((_QWORD *)v16 + 2)) == 0LL
        || v19(*((_QWORD *)v16 + 1), a7, *((_QWORD *)v16 + 3)))) )
    {
      v20 = (unsigned __int8 (__fastcall *)(_QWORD))*((_QWORD *)v16 + 8);
      if ( !v20 || !a8 || v20(*((_QWORD *)v16 + 1)) )
      {
        if ( (*v17 & 2) == 0 )
        {
          v21 = *((_DWORD *)v16 + 24);
          if ( v21 )
          {
            v44 = 0LL;
            if ( *((_DWORD *)v16 + 25) )
            {
              v21 = *((_DWORD *)v16 + 25);
            }
            else
            {
              v22 = (char *)*((_QWORD *)v16 + 6);
              if ( v22 != v16 + 48 )
              {
                v44 = v22 - 168;
                v21 = *(_DWORD *)(*((_QWORD *)v22 + 2) + 8LL);
              }
            }
            v23 = *(unsigned __int16 *)a3 + (v18 != 0 ? 84 : 12);
            if ( v10 )
              v23 += *(unsigned __int16 *)v10 + 2;
            v24 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
            v41 = v24;
            v25 = RtlULongAdd(v24, v23, pulResult);
            v43 = v25;
            if ( v23 > v21 || v25 || pulResult[0] > v21 )
            {
              v36 = v26 | 2;
              *v17 = v36;
              v15 = v40;
            }
            else
            {
              v28 = 0LL;
              v29 = *((_QWORD *)v16 + 11);
              if ( v29 )
              {
                *(_DWORD *)(v29 + *((unsigned int *)v16 + 27)) = v24 - *((_DWORD *)v16 + 27);
                *((_DWORD *)v16 + 27) = v24;
                v28 = (_DWORD *)(*((_QWORD *)v16 + 11) + v24);
                goto LABEL_42;
              }
              if ( v27 )
              {
                v30 = *(_QWORD *)(v27 + 24);
                if ( v30 )
                {
                  v28 = *(_DWORD **)(v27 + 24);
                  *((_QWORD *)v16 + 11) = v30;
                  goto LABEL_41;
                }
                v31 = *(_QWORD *)(v27 + 8);
                if ( v31 )
                {
                  if ( (*(_BYTE *)(v31 + 10) & 5) != 0 )
                    v28 = *(_DWORD **)(v31 + 24);
                  else
                    v28 = MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, 0x40000010u);
                  *((_QWORD *)v16 + 11) = v28;
LABEL_41:
                  *((_DWORD *)v16 + 25) = v21;
                }
              }
LABEL_42:
              if ( !*((_QWORD *)v16 + 11) )
              {
                PsChargePoolQuota(*((PEPROCESS *)v16 + 15), PagedPool, v21);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v21, 0x4E725346u);
                *((_QWORD *)v16 + 11) = PoolWithTag;
                *((_QWORD *)v16 + 10) = PoolWithTag;
                *((_DWORD *)v16 + 25) = v21;
                v28 = (_DWORD *)*((_QWORD *)v16 + 11);
              }
              v15 = v40;
              if ( v28 )
              {
                v33 = *((unsigned int *)v16 + 26);
                if ( v24 > (unsigned int)v33 )
                  memset((void *)(*((_QWORD *)v16 + 11) + v33), 0, v24 - (unsigned int)v33);
                *v28 = 0;
                v28[1] = a6;
                if ( v38 )
                {
                  *((_QWORD *)v28 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v28 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v28 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v28 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v28 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v28 + 6) = *(_QWORD *)(a10 + 48);
                  v28[14] = *(_DWORD *)(a10 + 56);
                  v28[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v28 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v28 + 9) = *(_QWORD *)(a10 + 72);
                  v28[20] = v23 - 84;
                  v34 = (char *)(v28 + 21);
                }
                else
                {
                  v28[2] = v23 - 12;
                  v34 = (char *)(v28 + 3);
                }
                memmove(v34, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v35 = &v34[*(unsigned __int16 *)a3];
                  *(_WORD *)v35 = 58;
                  memmove(v35 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v16 + 26) = v23 + v24;
              }
              v17 = (__int16 *)(v45 + 72);
              v36 = *((_WORD *)v45 + 36);
            }
            if ( (v36 & 2) != 0 && *((_QWORD *)v16 + 11) )
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
            v15 = v40;
          }
        }
        v37 = *v17;
        if ( a6 == 4 )
        {
          *v17 = v37 | 8;
        }
        else
        {
          *v17 = v37 & 0xFFF7;
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
