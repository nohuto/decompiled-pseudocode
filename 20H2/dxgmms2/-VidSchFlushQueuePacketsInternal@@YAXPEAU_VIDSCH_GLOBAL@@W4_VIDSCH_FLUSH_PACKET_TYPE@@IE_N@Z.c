/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0016C9C
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0016C80 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00D2700 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0001924 (VidSchiSetFlipDevice.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00104EC (VidSchiDecrementDeviceReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0010B08 (VidSchiClearFlipDevice.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiFlushQueuePacket @ 0x1C002FA1C (VidSchiFlushQueuePacket.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0032EB8 (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  KSPIN_LOCK *v7; // r12
  _QWORD *v8; // rsi
  int v9; // r14d
  _QWORD *i; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // edi
  __int64 v17; // r14
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  _QWORD *j; // r10
  _QWORD *v22; // rdi
  _QWORD *k; // r11
  _QWORD *v24; // rdi
  _QWORD *m; // r11
  _QWORD *v26; // rax
  _QWORD *v27; // r10
  _QWORD **v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *ii; // rbx
  _QWORD *jj; // r14
  _QWORD *kk; // r14
  _QWORD *v34; // r13
  _QWORD *mm; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // r11
  _QWORD *v40; // r11
  unsigned int v41; // r8d
  _QWORD *v42; // r12
  _QWORD *v43; // r11
  _QWORD *v44; // r13
  _QWORD *n; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  _QWORD *v51; // r12
  _QWORD *v52; // [rsp+40h] [rbp-71h] BYREF
  _QWORD **v53; // [rsp+48h] [rbp-69h]
  int v54; // [rsp+50h] [rbp-61h]
  _QWORD v55[2]; // [rsp+58h] [rbp-59h] BYREF
  char v56; // [rsp+68h] [rbp-49h]
  _QWORD *v57; // [rsp+70h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v59[4]; // [rsp+90h] [rbp-21h] BYREF
  __int16 v60; // [rsp+B0h] [rbp-1h]
  int v61; // [rsp+110h] [rbp+5Fh]
  unsigned int v63; // [rsp+120h] [rbp+6Fh]
  char v64; // [rsp+128h] [rbp+77h]

  v5 = -1;
  if ( a3 < *(_DWORD *)(a1 + 40) )
    v5 = a3;
  v63 = v5;
  if ( ((*(_DWORD *)(a1 + 304) - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = (KSPIN_LOCK *)(a1 + 1712);
    v8 = (_QWORD *)(a1 + 288);
    if ( a2 == 1 )
    {
      v54 = 0;
      v53 = &v52;
      v52 = &v52;
      v9 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
      for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      {
        _m_prefetchw(i - 10);
        v11 = *(i - 10);
        while ( v11 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(i - 10, v11 + 1, v11);
          if ( v12 == v11 )
          {
            v54 = ++v9;
            goto LABEL_10;
          }
        }
        v36 = (_QWORD *)*i;
        if ( *(_QWORD **)(*i + 8LL) != i
          || (v37 = (_QWORD *)i[1], (_QWORD *)*v37 != i)
          || (*v37 = v36, v36[1] = v37, v38 = v53, *v53 != &v52) )
        {
LABEL_74:
          __fastfail(3u);
        }
        i[1] = v53;
        *i = &v52;
        *v38 = i;
        v53 = (_QWORD **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v15 = (_QWORD *)*v8;
      v16 = 0;
      if ( (_QWORD *)*v8 != v8 )
      {
        do
        {
          v17 = (__int64)(v15 - 13);
          v64 = 0;
          v57 = (_QWORD *)*v15;
          v61 = v16 + 1;
          KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
          v18 = *(_DWORD *)(a1 + 40);
          v19 = 0;
          if ( v18 )
          {
            v20 = a1 + 3104;
            while ( v5 != v19 && v5 != -1 || *(_QWORD *)(*(_QWORD *)v20 + 16LL) != v17 )
            {
              ++v19;
              v20 += 8LL;
              if ( v19 >= v18 )
                goto LABEL_18;
            }
            v64 = 1;
          }
LABEL_18:
          for ( j = *(_QWORD **)(v17 + 72); j != (_QWORD *)(v17 + 72); j = (_QWORD *)*j )
          {
            v22 = j + 80;
            for ( k = (_QWORD *)j[80]; k != v22; k = (_QWORD *)*v39 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), (struct _VIDSCH_DEVICE *)v17, v5);
            v24 = j + 82;
            for ( m = (_QWORD *)j[82]; m != v24; m = (_QWORD *)*v40 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(m - 4), (struct _VIDSCH_DEVICE *)v17, v5);
          }
          v26 = (_QWORD *)(v17 + 88);
          v27 = *(_QWORD **)(v17 + 88);
          if ( v27 != (_QWORD *)(v17 + 88) )
          {
            v41 = v63;
            do
            {
              v42 = v27 + 4;
              v43 = (_QWORD *)v27[4];
              if ( v43 != v27 + 4 )
              {
                do
                {
                  v44 = v43 + 19;
                  for ( n = (_QWORD *)v43[19]; n != v44; n = (_QWORD *)*n )
                    VidSchiAbortMmIoFlipPacket(
                      (struct _VIDSCH_QUEUE_PACKET *)(n - 4),
                      (struct _VIDSCH_DEVICE *)v17,
                      v41);
                  v43 = (_QWORD *)*v43;
                }
                while ( v43 != v42 );
                v26 = (_QWORD *)(v17 + 88);
              }
              v27 = (_QWORD *)*v27;
            }
            while ( v27 != v26 );
            v5 = v41;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v64 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _KEVENT *)a1, v17, 6u);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, v17, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)v17, 0);
          v15 = v57;
          v7 = (KSPIN_LOCK *)(a1 + 1712);
          v16 = v61;
        }
        while ( v57 != v8 );
        v9 = v54;
        v7 = (KSPIN_LOCK *)(a1 + 1712);
      }
      if ( v16 != v9 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
        v46[5] = v9;
        v46[6] = v16;
        v46[3] = 281LL;
        v46[4] = 2304LL;
        v46[7] = a1;
        v28 = (_QWORD **)WdLogEvent5_WdCriticalError(v46);
        __debugbreak();
        goto LABEL_70;
      }
      KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
      while ( 1 )
      {
        v28 = (_QWORD **)v52;
        if ( v52 == &v52 )
          break;
LABEL_70:
        if ( v28[1] != &v52 )
          goto LABEL_74;
        v47 = *v28;
        if ( (_QWORD **)(*v28)[1] != v28 )
          goto LABEL_74;
        v52 = *v28;
        v47[1] = &v52;
        v48 = (_QWORD *)v8[1];
        if ( (_QWORD *)*v48 != v8 )
          goto LABEL_74;
        *v28 = v8;
        v28[1] = v48;
        *v48 = v28;
        v8[1] = v28;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v59[0] = a1 + 1712;
      v60 = 0;
      AcquireSpinLock::Acquire((Acquire *)v59);
      v30 = (_QWORD *)*v8;
      v55[1] = v55;
      v55[0] = v55;
      v56 = 0;
      if ( v30 == v8 )
        goto LABEL_46;
      do
      {
        for ( ii = (_QWORD *)*(v30 - 4); ii != v30 - 4; ii = (_QWORD *)*ii )
        {
          for ( jj = (_QWORD *)ii[80]; jj != ii + 80; jj = (_QWORD *)*jj )
            VidSchiFlushQueuePacket(v55, v29, jj - 4, a2);
          for ( kk = (_QWORD *)ii[82]; kk != ii + 82; kk = (_QWORD *)*kk )
            VidSchiFlushQueuePacket(v55, v29, kk - 4, a2);
        }
        v34 = v30 - 2;
        for ( mm = (_QWORD *)*(v30 - 2); mm != v34; mm = (_QWORD *)*mm )
        {
          v49 = mm + 4;
          v50 = (_QWORD *)mm[4];
          if ( v50 != mm + 4 )
          {
            do
            {
              v51 = (_QWORD *)v50[19];
              if ( v51 != v50 + 19 )
              {
                do
                {
                  VidSchiFlushQueuePacket(v55, v29, v51 - 4, a2);
                  v51 = (_QWORD *)*v51;
                }
                while ( v51 != v50 + 19 );
                v49 = mm + 4;
              }
              v50 = (_QWORD *)*v50;
            }
            while ( v50 != v49 );
            v34 = v30 - 2;
          }
        }
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v8 );
      if ( !v56 )
LABEL_46:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v55);
      AcquireSpinLock::Release((AcquireSpinLock *)v59);
    }
  }
}
