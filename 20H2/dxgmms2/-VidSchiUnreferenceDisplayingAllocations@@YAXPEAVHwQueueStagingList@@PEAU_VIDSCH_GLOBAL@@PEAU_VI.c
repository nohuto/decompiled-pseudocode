/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00037A8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0001924 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0002980 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0031EE0 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     VidSchiSignalFlipEvents @ 0x1C0003980 (VidSchiSignalFlipEvents.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0009AF0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUnwaitContext @ 0x1C000FE3C (VidSchiUnwaitContext.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002CBF8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FD8 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList ***a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        unsigned __int16 a4)
{
  unsigned int v4; // ebx
  int v5; // r15d
  int v6; // esi
  char v9; // cl
  bool v10; // zf
  int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbp
  int v20; // r12d
  _QWORD *v21; // rsi
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // r14
  int v25; // ebp
  _QWORD **v26; // rsi
  _QWORD *v27; // rax
  _QWORD **v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  struct HwQueueStagingList *v35; // rax
  struct HwQueueStagingList **v36; // rdx
  unsigned int v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-40h]
  char v40; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v4 = 0;
    v40 = 0;
    LOWORD(v5) = 0;
    LOWORD(v6) = a4;
    do
    {
      v9 = -1;
      v10 = !_BitScanForward((unsigned int *)&v11, (unsigned __int16)v6);
      v37 = 0;
      if ( !v10 )
        v9 = v11;
      v12 = v9;
      v13 = 0;
      if ( *((_WORD *)a3 + 16581) )
      {
        v40 = 1;
        v14 = v12 << 6;
        do
        {
          v38 = v13;
          v15 = 48 * (v14 + v13);
          v16 = *(_QWORD *)((char *)a3 + v15 + 2448);
          v17 = *(_QWORD *)(v16 + 24);
          if ( v17 )
          {
            if ( *(_QWORD *)((char *)a3 + v15 + 2480) )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(
                          (struct HwQueueStagingList *)a1,
                          1u,
                          (struct _VIDSCH_SYNC_OBJECT **)(v17 + 8),
                          0,
                          (const unsigned __int64 *)((char *)a3 + v15 + 2480),
                          0LL) < 0 )
              {
                v30 = WdLogNewEntry5_WdAssertion();
                *(_QWORD *)(v30 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)a3 + v15 + 2448) + 24LL) + 8LL);
                *(_QWORD *)(v30 + 32) = *(_QWORD *)((char *)a3 + v15 + 2480);
                WdLogEvent5_WdAssertion(v30);
              }
              v31 = *(_QWORD *)(*(_QWORD *)((char *)a3 + v15 + 2448) + 24LL);
              v32 = 2LL * *(unsigned int *)(v31 + 32);
              *(_OWORD *)(v31 + 8 * v32 + 40) = 0LL;
              *(_DWORD *)(v31 + 32) = ((unsigned __int8)*(_DWORD *)(v31 + 32) + 1) & 7;
              *(_DWORD *)(v31 + 8 * v32 + 40) = 2;
              *(_QWORD *)(v31 + 8 * v32 + 48) = *(_QWORD *)((char *)a3 + v15 + 2480);
            }
          }
          else
          {
            v18 = *(_QWORD *)(v16 + 16);
            if ( v18 )
              _InterlockedDecrement((volatile signed __int32 *)(v18 + 8));
          }
          VidSchiCheckPendingDeviceCommand(*((_QWORD *)a3 + 2));
          *(_QWORD *)((char *)a3 + v15 + 2440) = 0LL;
          *(_WORD *)((char *)a3 + v15 + 2472) = 0;
          *(_QWORD *)((char *)a3 + v15 + 2464) = 0LL;
          *((_QWORD *)a3 + 6 * v14 + 6 * v38 + 306) = 0LL;
          v13 = v37 + 1;
          v37 = v13;
        }
        while ( v13 < *((unsigned __int16 *)a3 + 16581) );
      }
      v6 = (unsigned __int16)v6 & ~(1 << v12);
      v5 = (unsigned __int16)v5 | (1 << v12);
      *((_WORD *)a3 + 16580) &= ~(1 << v12);
    }
    while ( (_WORD)v6 );
    if ( v40 )
    {
      v19 = *((_QWORD *)a3 + 2);
      if ( v19 )
      {
        v20 = 0;
        v21 = *(_QWORD **)(v19 + 72);
        while ( v21 != (_QWORD *)(v19 + 72) )
        {
          v22 = v21 - 3;
          v23 = 0;
          if ( (v21[20] & 0x10) != 0 )
          {
            *((_DWORD *)v22 + 46) &= ~0x10u;
            v23 = (unsigned __int8)VidSchiUnwaitContext(v22, 21375LL);
          }
          v21 = (_QWORD *)*v21;
          v20 |= v23;
        }
        v24 = *(_QWORD *)(v19 + 32);
        v25 = 0;
        v26 = (_QWORD **)(v24 + 3416);
        while ( 1 )
        {
          v27 = *v26;
          if ( *v26 == v26 )
            break;
          if ( (_QWORD **)v27[1] != v26 || (v33 = (_QWORD *)*v27, *(_QWORD **)(*v27 + 8LL) != v27) )
LABEL_38:
            __fastfail(3u);
          *v26 = v33;
          v33[1] = v26;
          v27[1] = 0LL;
          *v27 = 0LL;
          v25 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v27 - 5));
        }
        v28 = (_QWORD **)(v24 + 3432);
        while ( 1 )
        {
          v29 = *v28;
          if ( *v28 == v28 )
            break;
          if ( (_QWORD **)v29[1] != v28 )
            goto LABEL_38;
          v34 = (_QWORD *)*v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 )
            goto LABEL_38;
          *v28 = v34;
          v34[1] = v28;
          *v29 = 0LL;
          v29[1] = 0LL;
          v35 = (struct HwQueueStagingList *)(v29 + 19);
          if ( !*(_QWORD *)v35 )
          {
            v36 = a1[1];
            if ( *v36 != (struct HwQueueStagingList *)a1 )
              goto LABEL_38;
            *(_QWORD *)v35 = a1;
            *((_QWORD *)v35 + 1) = v36;
            *v36 = v35;
            a1[1] = (struct HwQueueStagingList **)v35;
            *((_BYTE *)a1 + 16) = 0;
          }
        }
        v4 = v20 | v25;
      }
      VidSchiSignalFlipEvents(a3, v4, a4);
      *((_WORD *)a3 + 16582) &= ~(_WORD)v5;
    }
  }
}
