/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x140930090 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406ABBF4 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1406AC3A0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406E5920 (FsRtlNotifyUninitializeSync.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  unsigned __int16 *v23; // rdx
  unsigned int v24; // r14d
  unsigned int v25; // r13d
  _DWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 Pool2; // rax
  __int64 v31; // rcx
  char *v32; // rbx
  char *v33; // rbx
  __int16 v34; // cx
  __int16 v35; // ax
  char v36; // [rsp+31h] [rbp-A7h]
  struct _REAL_NOTIFY_SYNC *v37; // [rsp+50h] [rbp-88h]
  PNOTIFY_SYNC NotifySync[4]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int16 *v39; // [rsp+80h] [rbp-58h]
  char *v40; // [rsp+88h] [rbp-50h]
  const void **v42; // [rsp+F0h] [rbp+18h]

  v42 = a3;
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
    v37 = v15;
    if ( v15 == (struct _REAL_NOTIFY_SYNC *)v11 )
      break;
    v16 = (char *)v15 - 32;
    NotifySync[1] = (struct _REAL_NOTIFY_SYNC *)((char *)v15 - 32);
    v40 = (char *)v15 - 32;
    v17 = (__int16 *)((char *)v15 + 40);
    v18 = (unsigned __int8)*v17 >> 7;
    v36 = v18;
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
            v39 = 0LL;
            if ( *((_DWORD *)v16 + 25) )
            {
              v22 = *((_DWORD *)v16 + 25);
            }
            else
            {
              a3 = (const void **)*((_QWORD *)v16 + 6);
              if ( a3 != (const void **)(v16 + 48) )
              {
                v23 = (unsigned __int16 *)(a3 - 21);
                v39 = (unsigned __int16 *)(a3 - 21);
                v22 = *((_DWORD *)a3[2] + 2);
              }
            }
            v24 = *(unsigned __int16 *)v42 + (v18 != 0 ? 84 : 12);
            if ( v10 )
              v24 += *(unsigned __int16 *)v10 + 2;
            v25 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
            if ( v24 > v22 || v24 + v25 > v22 )
            {
              v34 = v21 | 2;
              *v17 = v34;
              v15 = v37;
            }
            else
            {
              v26 = 0LL;
              v27 = *((_QWORD *)v16 + 11);
              if ( v27 )
              {
                *(_DWORD *)(v27 + *((unsigned int *)v16 + 27)) = v25 - *((_DWORD *)v16 + 27);
                *((_DWORD *)v16 + 27) = v25;
                v26 = (_DWORD *)(*((_QWORD *)v16 + 11) + v25);
              }
              else
              {
                if ( !v23 )
                  goto LABEL_30;
                v28 = *((_QWORD *)v23 + 3);
                if ( v28 )
                {
                  v26 = (_DWORD *)*((_QWORD *)v23 + 3);
                  *((_QWORD *)v16 + 11) = v28;
                }
                else
                {
                  v29 = *((_QWORD *)v23 + 1);
                  if ( !v29 )
                    goto LABEL_30;
                  if ( (*(_BYTE *)(v29 + 10) & 5) != 0 )
                    v26 = *(_DWORD **)(v29 + 24);
                  else
                    v26 = MmMapLockedPagesSpecifyCache((PMDL)v29, 0, MmCached, 0LL, 0, 0x40000010u);
                  *((_QWORD *)v16 + 11) = v26;
                }
                *((_DWORD *)v16 + 25) = v22;
              }
LABEL_30:
              if ( !*((_QWORD *)v16 + 11) )
              {
                PsChargePoolQuota(*((PEPROCESS *)v16 + 15), PagedPool, v22);
                Pool2 = ExAllocatePool2(290LL, v22, 1316115270LL);
                *((_QWORD *)v16 + 11) = Pool2;
                *((_QWORD *)v16 + 10) = Pool2;
                *((_DWORD *)v16 + 25) = v22;
                v26 = (_DWORD *)*((_QWORD *)v16 + 11);
              }
              v15 = v37;
              if ( v26 )
              {
                v31 = *((unsigned int *)v16 + 26);
                if ( v25 > (unsigned int)v31 )
                  memset((void *)(*((_QWORD *)v16 + 11) + v31), 0, v25 - (unsigned int)v31);
                *v26 = 0;
                v26[1] = a6;
                if ( v36 )
                {
                  *((_QWORD *)v26 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v26 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v26 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v26 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v26 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v26 + 6) = *(_QWORD *)(a10 + 48);
                  v26[14] = *(_DWORD *)(a10 + 56);
                  v26[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v26 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v26 + 9) = *(_QWORD *)(a10 + 72);
                  v26[20] = v24 - 84;
                  v32 = (char *)(v26 + 21);
                }
                else
                {
                  v26[2] = v24 - 12;
                  v32 = (char *)(v26 + 3);
                }
                memmove(v32, v42[1], *(unsigned __int16 *)v42);
                if ( a4 )
                {
                  v33 = &v32[*(unsigned __int16 *)v42];
                  *(_WORD *)v33 = 58;
                  memmove(v33 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v16 + 26) = v24 + v25;
              }
              v17 = (__int16 *)(v40 + 72);
              v34 = *((_WORD *)v40 + 36);
            }
            if ( (v34 & 2) != 0 && *((_QWORD *)v16 + 11) )
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
            v15 = v37;
          }
        }
        v35 = *v17;
        if ( a6 == 4 )
        {
          *v17 = v35 | 8;
        }
        else
        {
          *v17 = v35 & 0xFFF7;
          if ( *((char **)v16 + 6) != v16 + 48 )
            FsRtlNotifyCompleteIrpList(v16, 0LL, a3);
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
