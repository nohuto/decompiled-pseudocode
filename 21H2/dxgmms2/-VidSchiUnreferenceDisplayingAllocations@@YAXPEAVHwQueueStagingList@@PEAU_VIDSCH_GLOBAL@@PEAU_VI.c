/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C000FE70
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000F9B4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000E938 (VidSchiUnwaitContext.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001A848 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        __int16 a4)
{
  char v4; // r13
  int v6; // ebx
  int v7; // ebp
  struct HwQueueStagingList *v8; // r12
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // esi
  __int64 v13; // r12
  char *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rbx
  int i; // esi
  __int64 v22; // rcx
  BOOL v23; // edx
  __int64 v24; // rbx
  int v25; // r14d
  _QWORD **v26; // r15
  _QWORD *v27; // rax
  struct HwQueueStagingList ***v28; // rax
  struct HwQueueStagingList **v29; // rcx
  int v30; // r14d
  __int64 v31; // rsi
  __int64 v32; // rbx
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // r15
  __int64 v37; // rdx
  struct HwQueueStagingList **v38; // rdx
  struct HwQueueStagingList **v39; // rcx
  struct HwQueueStagingList **v40; // rdx
  int v41; // edx
  char v42; // cl
  int v43; // eax
  unsigned int v44; // r14d
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rsi
  _QWORD *v48; // r12
  _QWORD *v49; // rsi
  struct _KEVENT *v50; // rax
  struct _KEVENT *v51; // rcx
  int v52; // [rsp+54h] [rbp-64h]
  struct _VIDSCH_SYNC_OBJECT *v53; // [rsp+58h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  int v57; // [rsp+C8h] [rbp+10h]
  char v58; // [rsp+D8h] [rbp+20h]

  if ( a4 )
  {
    v4 = 0;
    LOWORD(v6) = a4;
    LOWORD(v7) = 0;
    v8 = a1;
    do
    {
      v9 = !_BitScanForward((unsigned int *)&v10, (unsigned __int16)v6);
      if ( v9 )
        LOBYTE(v10) = -1;
      v11 = 0;
      v12 = (char)v10;
      v52 = (char)v10;
      if ( *((_WORD *)a3 + 22025) )
      {
        v13 = (__int64)(char)v10 << 6;
        do
        {
          v14 = (char *)a3 + 64 * (v13 + v11);
          v15 = *((_QWORD *)v14 + 387);
          v16 = *(_QWORD *)(v15 + 24);
          if ( v16 )
          {
            if ( *((_QWORD *)v14 + 391) )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(
                          a1,
                          1u,
                          (struct _VIDSCH_SYNC_OBJECT **)(v16 + 8),
                          0,
                          (const unsigned __int64 *)v14 + 391,
                          0LL) < 0 )
              {
                WdLogSingleEntry2(
                  1LL,
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 387) + 24LL) + 8LL),
                  *((_QWORD *)v14 + 391));
                ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to signal FlipFrom fence 0x%p value 0x%I64x",
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 387) + 24LL) + 8LL),
                  *((_QWORD *)v14 + 391),
                  0LL,
                  0LL,
                  0LL);
              }
              v34 = *(_QWORD *)(*((_QWORD *)v14 + 387) + 24LL);
              v35 = 2LL * *(unsigned int *)(v34 + 32);
              *(_OWORD *)(v34 + 8 * v35 + 40) = 0LL;
              *(_DWORD *)(v34 + 32) = ((unsigned __int8)*(_DWORD *)(v34 + 32) + 1) & 7;
              *(_DWORD *)(v34 + 8 * v35 + 40) = 2;
              *(_QWORD *)(v34 + 8 * v35 + 48) = *((_QWORD *)v14 + 391);
            }
          }
          else
          {
            v17 = *(_QWORD *)(v15 + 16);
            if ( v17 )
              _InterlockedDecrement((volatile signed __int32 *)(v17 + 8));
          }
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a3 + 2));
          *((_QWORD *)v14 + 386) = 0LL;
          ++v11;
          *((_QWORD *)v14 + 387) = 0LL;
          *((_WORD *)v14 + 1560) = 0;
          *((_QWORD *)v14 + 389) = 0LL;
        }
        while ( v11 < *((unsigned __int16 *)a3 + 22025) );
        v12 = v52;
        v4 = 1;
        v8 = a1;
      }
      v18 = (char *)a3 + 4096 * (__int64)v12;
      if ( *((_QWORD *)v18 + 392) )
      {
        v36 = v18 + 3144;
        v53 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v18 + 392);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(v8, 1u, &v53, 0, (const unsigned __int64 *)v18 + 393, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *((_QWORD *)v18 + 392), *v36);
          ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to signal RuntimeFlipAwayFence 0x%p value 0x%I64x",
            *((_QWORD *)v18 + 392),
            *v36,
            0LL,
            0LL,
            0LL);
        }
        VidSchiReleaseSyncObjectReference(*((char **)v18 + 392), v37);
        *((_QWORD *)v18 + 392) = 0LL;
        *v36 = 0LL;
      }
      v6 = (unsigned __int16)v6 & ~(1 << v12);
      v7 = (unsigned __int16)v7 | (1 << v12);
      *((_WORD *)a3 + 22024) &= ~(1 << v12);
    }
    while ( (_WORD)v6 );
    if ( v4 )
    {
      v19 = *((_QWORD *)a3 + 2);
      if ( v19 )
      {
        v20 = *(_QWORD **)(v19 + 72);
        for ( i = 0; v20 != (_QWORD *)(v19 + 72); i |= v23 )
        {
          v22 = (__int64)(v20 - 3);
          v23 = 0;
          if ( (v20[20] & 0x10) != 0 )
          {
            *(_DWORD *)(v22 + 184) &= ~0x10u;
            v23 = VidSchiUnwaitContext(v22, 0x580Du);
          }
          v20 = (_QWORD *)*v20;
        }
        v24 = *(_QWORD *)(v19 + 32);
        v25 = 0;
        v26 = (_QWORD **)(v24 + 3520);
        while ( 1 )
        {
          v27 = *v26;
          if ( *v26 == v26 )
            break;
          if ( (_QWORD **)v27[1] != v26 || (v33 = (_QWORD *)*v27, *(_QWORD **)(*v27 + 8LL) != v27) )
LABEL_33:
            __fastfail(3u);
          *v26 = v33;
          v33[1] = v26;
          v27[1] = 0LL;
          *v27 = 0LL;
          v25 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v27 - 5));
        }
        v28 = (struct HwQueueStagingList ***)(v24 + 3536);
        while ( 1 )
        {
          v29 = *v28;
          if ( *v28 == (struct HwQueueStagingList **)v28 )
            break;
          if ( v29[1] != (struct HwQueueStagingList *)v28 )
            goto LABEL_33;
          v38 = (struct HwQueueStagingList **)*v29;
          if ( *((struct HwQueueStagingList ***)*v29 + 1) != v29 )
            goto LABEL_33;
          *v28 = v38;
          v38[1] = (struct HwQueueStagingList *)v28;
          *v29 = 0LL;
          v29[1] = 0LL;
          v39 = v29 + 19;
          if ( !*v39 )
          {
            v40 = (struct HwQueueStagingList **)*((_QWORD *)v8 + 1);
            if ( *v40 != v8 )
              goto LABEL_33;
            *v39 = v8;
            v39[1] = (struct HwQueueStagingList *)v40;
            *v40 = (struct HwQueueStagingList *)v39;
            *((_QWORD *)v8 + 1) = v39;
            *((_BYTE *)v8 + 16) = 0;
          }
        }
        v30 = i | v25;
        v31 = *((_QWORD *)a3 + 2);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 32);
          VidSchiSignalRegisteredEvent(v32, v31 + 120);
          VidSchiSignalRegisteredEvent(v32, v31 + 136);
          VidSchiSignalRegisteredEvent(v32, v32 + 1672);
          VidSchiSignalRegisteredEvent(v32, v32 + 1656);
          *(_QWORD *)(v32 + 1504) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v32 + 1472), 0, 0);
          *(_QWORD *)(v32 + 1616) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v32 + 1584), 0, 0);
          if ( v30 )
          {
            *(_QWORD *)(v32 + 1224) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v32 + 1192), 0, 0);
          }
          VidSchiSignalRegisteredEvent(v32, v32 + 1688);
          if ( *((_WORD *)a3 + 22026) )
          {
            LOWORD(v41) = a4;
            do
            {
              v41 = (unsigned __int16)v41;
              v42 = -1;
              v9 = !_BitScanForward((unsigned int *)&v43, (unsigned __int16)v41);
              v44 = 0;
              v57 = (unsigned __int16)v41;
              if ( !v9 )
                v42 = v43;
              v58 = v42;
              if ( *((_WORD *)a3 + 22025) )
              {
                v45 = (__int64)v42 << 6;
                do
                {
                  v46 = (v45 + v44) << 6;
                  v47 = *(_QWORD *)((char *)a3 + v46 + 3104);
                  if ( v47 )
                  {
                    memset(&LockHandle, 0, sizeof(LockHandle));
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 32), &LockHandle);
                    v48 = (_QWORD *)(v47 + 16);
                    v49 = *(_QWORD **)(v47 + 16);
                    if ( v49 != v48 )
                    {
                      v50 = (struct _KEVENT *)(v32 + 1192);
                      do
                      {
                        v51 = (struct _KEVENT *)v49[2];
                        if ( v51 != v50 )
                        {
                          KeSetEvent(v51, 0, 0);
                          v50 = (struct _KEVENT *)(v32 + 1192);
                        }
                        v49 = (_QWORD *)*v49;
                      }
                      while ( v49 != v48 );
                    }
                    KeReleaseInStackQueuedSpinLock(&LockHandle);
                    *(_QWORD *)((char *)a3 + v46 + 3104) = 0LL;
                  }
                  ++v44;
                }
                while ( v44 < *((unsigned __int16 *)a3 + 22025) );
                v42 = v58;
                v41 = v57;
              }
              v41 &= ~(1 << v42);
            }
            while ( (_WORD)v41 );
          }
        }
      }
      *((_WORD *)a3 + 22026) &= ~(_WORD)v7;
    }
  }
}
