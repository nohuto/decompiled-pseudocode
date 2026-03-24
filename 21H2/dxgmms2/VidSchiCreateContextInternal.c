/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C00107A8
 * Callers:
 *     VidSchCreateContext @ 0x1C0081600 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C009922C (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007AC0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011100 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C0011550 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C00336A8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     VidSchSetPriorityContext @ 0x1C0081460 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1C0081C30 (VidSchTerminateContext.c)
 */

char *__fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  char *PoolWithTag; // rax
  char *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  char v13; // cl
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r15d
  unsigned int v22; // eax
  int v23; // r13d
  SIZE_T v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // r14
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  bool v37; // cf
  __int64 v38; // r9
  __int64 v39; // rdx
  bool v40; // zf
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // r9
  int v46; // r8d
  unsigned int v47; // r14d
  int v48; // esi
  _DWORD *v49; // rax
  _DWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK *v54; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v56[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3E0uLL, 0x34616956u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3E0uLL);
      *(_DWORD *)v8 = 878799190;
      *((_QWORD *)v8 + 7) = a3;
      *((_QWORD *)v8 + 13) = a1;
      *((_QWORD *)v8 + 10) = KeGetCurrentThread();
      *((_OWORD *)v8 + 7) = *(_OWORD *)a2;
      *((_QWORD *)v8 + 16) = *((_QWORD *)a2 + 2);
      *((_DWORD *)v8 + 34) = a2[6];
      v9 = (unsigned int)a2[1];
      *((_DWORD *)v8 + 22) = v9;
      v10 = *(_QWORD **)(v4 + 624);
      if ( (unsigned int)v9 < *(_DWORD *)(v4 + 696) )
        v10 += v9;
      *((_QWORD *)v8 + 12) = *v10;
      v11 = DxgCoreInterface[6]();
      v12 = *((_QWORD *)v8 + 12);
      v53 = v12;
      v13 = *(_BYTE *)(v11 + 347);
      *((_QWORD *)v8 + 18) = 1LL;
      v8[901] = (v13 & 0x20) != 0;
      *((_OWORD *)v8 + 20) = 0LL;
      *((_OWORD *)v8 + 21) = 0LL;
      *((_OWORD *)v8 + 22) = 0LL;
      *((_QWORD *)v8 + 46) = 0LL;
      KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
      *((_QWORD *)v8 + 48) = v8 + 376;
      *((_QWORD *)v8 + 47) = v8 + 376;
      *((_QWORD *)v8 + 84) = v8 + 664;
      *((_QWORD *)v8 + 83) = v8 + 664;
      *((_QWORD *)v8 + 86) = v8 + 680;
      *((_QWORD *)v8 + 85) = v8 + 680;
      *((_QWORD *)v8 + 88) = v8 + 696;
      *((_QWORD *)v8 + 87) = v8 + 696;
      *((_QWORD *)v8 + 90) = v8 + 712;
      *((_QWORD *)v8 + 89) = v8 + 712;
      if ( (*a2 & 0x100) != 0 )
      {
        *((_QWORD *)v8 + 93) = v8 + 736;
        *((_QWORD *)v8 + 92) = v8 + 736;
      }
      *((_QWORD *)v8 + 96) = v8 + 760;
      *((_QWORD *)v8 + 95) = v8 + 760;
      v8[900] = 1;
      VidSchiIncrementContextReference(v8);
      v8[900] = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1712), &LockHandle);
      if ( *(_BYTE *)(a1 + 1392) || *(_BYTE *)(a1 + 1393) )
      {
        v14 = v12 + 2608;
        *((_DWORD *)v8 + 46) |= 0x100u;
      }
      else
      {
        v14 = v12 + 2576;
      }
      v15 = *(_QWORD **)(v14 + 8);
      v16 = v8 + 8;
      if ( *v15 != v14
        || (*v16 = v14,
            *((_QWORD *)v8 + 2) = v15,
            *v15 = v16,
            *(_QWORD *)(v14 + 8) = v16,
            v17 = *(_QWORD **)(a1 + 80),
            v18 = v8 + 24,
            *v17 != a1 + 72) )
      {
        __fastfail(3u);
      }
      *v18 = a1 + 72;
      *((_QWORD *)v8 + 4) = v17;
      *v17 = v18;
      *(_QWORD *)(a1 + 80) = v18;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v19 = *(_QWORD *)(v4 + 2536);
      *((_QWORD *)v8 + 59) = v19;
      v20 = *(_QWORD *)(v4 + 2584);
      *((_QWORD *)v8 + 55) = v19;
      *((_QWORD *)v8 + 60) = v20;
      KeInitializeTimer((PKTIMER)v8 + 8);
      KeInitializeDpc((PRKDPC)v8 + 9, VidSchiDelayReadyRoutine, v8);
      v21 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          memset(v56, 0, 0x48uLL);
          v34 = *((unsigned int *)v8 + 22);
          v35 = *(_QWORD *)(v4 + 624);
          v36 = v35 + 8 * v34;
          v37 = (unsigned int)v34 < *(_DWORD *)(v4 + 696);
          if ( (unsigned int)v34 >= *(_DWORD *)(v4 + 696) )
            v36 = *(_QWORD *)(v4 + 624);
          DWORD2(v56[0]) = *(unsigned __int16 *)(*(_QWORD *)v36 + 8LL);
          if ( v37 )
            v35 += 8 * v34;
          v38 = *(_QWORD *)(v4 + 8);
          HIDWORD(v56[0]) = 1 << *(_BYTE *)(*(_QWORD *)v35 + 6LL);
          v39 = *(_QWORD *)(a1 + 16);
          LODWORD(v56[1]) = v56[1] & 0xFFFFFFE2 | ((v21 & 4 | ((v21 & 0x200 | (v21 >> 1) & 0x400) >> 4)) >> 2) | (4 * (*(_BYTE *)(360LL * *(unsigned __int16 *)(v53 + 6) + *(_QWORD *)(*(_QWORD *)(v38 + 16) + 2584LL) + 48) & 1));
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[18])(v38, v39, v56) < 0 )
          {
LABEL_49:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v40 = bTracingEnabled == 0;
          v41 = v56[1];
          v42 = *(_QWORD *)&v56[0];
          *(_OWORD *)(v8 + 904) = v56[0];
          *((_QWORD *)v8 + 8) = v42;
          v43 = v56[2];
          *(_OWORD *)(v8 + 920) = v41;
          v44 = v56[3];
          *(_OWORD *)(v8 + 936) = v43;
          *(_QWORD *)&v43 = *(_QWORD *)&v56[4];
          *(_OWORD *)(v8 + 952) = v44;
          *((_QWORD *)v8 + 121) = v43;
          if ( !v40 )
          {
            v45 = *(_QWORD *)(a1 + 8);
            if ( !v45 )
              LODWORD(v45) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v46 = (2 * ((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) >> 4) & 1)) | 1;
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v56[3],
                (unsigned int)&EventCreateContext,
                v46,
                v45,
                SBYTE8(v56[0]),
                SBYTE12(v56[0]),
                SBYTE4(v56[2]),
                SBYTE8(v56[2]),
                SBYTE12(v56[2]),
                v56[3],
                SBYTE4(v56[3]),
                v46,
                (char)v8);
            }
          }
        }
        else if ( bTracingEnabled )
        {
          v30 = *((unsigned int *)v8 + 22);
          if ( (unsigned int)v30 < *(_DWORD *)(v4 + 72) )
          {
            v31 = *(_QWORD *)(a1 + 8);
            v32 = *(_QWORD *)(v4 + 624);
            v33 = v32 + 8 * v30;
            if ( !v31 )
              LODWORD(v31) = a1;
            if ( (unsigned int)v30 >= *(_DWORD *)(v4 + 696) )
              v33 = *(_QWORD *)(v4 + 624);
            else
              v32 += 8 * v30;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                0,
                (unsigned int)&EventCreateContext,
                0,
                v31,
                *(_WORD *)(*(_QWORD *)v32 + 8LL),
                1 << *(_BYTE *)(*(_QWORD *)v33 + 6LL),
                0,
                0,
                0,
                0,
                0,
                (2 * (((*a2 & 0x40) != 0 ? 2 : 0) | ((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0))) | 1,
                (char)v8);
          }
        }
      }
      else
      {
        *((_QWORD *)v8 + 8) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
      {
        v22 = *(_DWORD *)(v4 + 144) * ((*(_DWORD *)(v4 + 68) << 6) + ((8 * *(_DWORD *)(v4 + 68) + 199) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 68) + 108);
        if ( v22 <= 0x430 )
          v22 = 1072;
        v23 = 0;
        v24 = v22;
        do
        {
          v25 = ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
          v28 = v25;
          if ( !v25 )
          {
            v52 = WdLogNewEntry5_WdWarning(v27, v26);
            WdLogEvent5_WdWarning(v52);
            goto LABEL_49;
          }
          memset(v25, 0, v24);
          v54 = (KSPIN_LOCK *)(v4 + 1720);
          VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1720), (__int64)(v8 + 760), v28 + 1, (_DWORD *)v8 + 194);
          VidSchiFreeQueuePacket(v8);
          ++v23;
        }
        while ( v23 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v47 = a2[6];
        if ( v47 )
        {
          v48 = 0;
          while ( 1 )
          {
            v49 = ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
            v50 = v49;
            if ( !v49 )
              break;
            memset(v49, 0, v24);
            v50[16] |= 0x40u;
            VidSchiInterlockedInsertTailList(v54, (__int64)(v8 + 760), (_QWORD *)v50 + 1, (_DWORD *)v8 + 194);
            VidSchiFreeQueuePacket(v8);
            if ( ++v48 >= v47 )
              return v8;
          }
        }
      }
      goto LABEL_49;
    }
  }
  v51 = WdLogNewEntry5_WdWarning(a1, a2);
  WdLogEvent5_WdWarning(v51);
  return 0LL;
}
