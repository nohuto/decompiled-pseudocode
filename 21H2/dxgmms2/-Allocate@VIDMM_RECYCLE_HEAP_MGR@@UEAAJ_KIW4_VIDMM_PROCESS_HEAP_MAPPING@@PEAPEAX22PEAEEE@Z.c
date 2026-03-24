/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007CF10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0076D88 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007D130 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  unsigned int v10; // r12d
  struct _KTHREAD **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  int v19; // edi
  unsigned __int64 v20; // rdx
  VIDMM_RECYCLE_HEAP *v21; // rcx
  int v22; // eax
  struct _KTHREAD **v23; // rbx
  int v24; // eax
  int v25; // eax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  VIDMM_RECYCLE_HEAP *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  struct _KTHREAD **v39; // [rsp+40h] [rbp-48h] BYREF
  char v40; // [rsp+48h] [rbp-40h]
  unsigned __int8 v41; // [rsp+90h] [rbp+8h]

  v40 = 0;
  v39 = (struct _KTHREAD **)((char *)a1 + 1328);
  v10 = a3;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v28 = WdLogNewEntry5_WdAssertion(-1328LL, a2, a3);
    *(_QWORD *)(v28 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v28);
    if ( v40 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
      v31[5] = &v39;
      v31[3] = 275LL;
      v31[4] = 4LL;
      v31[6] = 0LL;
      v31[7] = 0LL;
      WdLogEvent5_WdCriticalError(v31);
    }
  }
  v13 = v39;
  KeEnterCriticalRegion();
  if ( v13[2] == KeGetCurrentThread() )
  {
    v32 = *((_DWORD *)v13 + 6);
    if ( v32 <= 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
      *(_QWORD *)(v33 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v33);
      v32 = *((_DWORD *)v13 + 6);
    }
    v18 = v32 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *((_DWORD *)v13 + 7);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v27);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 1);
      ExAcquirePushLockExclusiveEx(v13, 0LL);
    }
    if ( v13[2] )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v17, v16);
      *(_QWORD *)(v34 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( *((_DWORD *)v13 + 6) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v15, v17, v16);
      *(_QWORD *)(v35 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v35);
    }
    v13[2] = KeGetCurrentThread();
    v18 = 1;
  }
  v19 = -1073741823;
  LOBYTE(v15) = 0;
  *((_DWORD *)v13 + 6) = v18;
  v40 = 1;
  while ( 1 )
  {
    v20 = 0x1C0000000uLL;
    v41 = v15;
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 736);
          goto LABEL_13;
        case 2:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 808);
          goto LABEL_13;
        case 3:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 880);
          goto LABEL_13;
        case 4:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 952);
          goto LABEL_13;
        case 5:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1024);
          goto LABEL_13;
        case 6:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1096);
          goto LABEL_13;
        case 7:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1168);
          goto LABEL_13;
        case 8:
          v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 1240);
          goto LABEL_13;
        default:
          break;
      }
    }
    else
    {
      if ( a4 != 2 )
      {
        switch ( a4 )
        {
          case 1:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
            goto LABEL_13;
          case 2:
            goto LABEL_15;
          case 3:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 160);
            goto LABEL_13;
          case 4:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 232);
            goto LABEL_13;
          case 5:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 304);
            goto LABEL_13;
          case 6:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 376);
            goto LABEL_13;
          case 7:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 448);
            goto LABEL_13;
          case 8:
            v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 520);
            goto LABEL_13;
          case 9:
            v36 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 592);
            goto LABEL_55;
          case 10:
            v36 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 664);
LABEL_55:
            v22 = VIDMM_RECYCLE_HEAP::Allocate(v36, a2, v10, a5, a6, a7, a8, a9);
            goto LABEL_14;
          default:
            goto LABEL_16;
        }
      }
      v21 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 88);
LABEL_13:
      v22 = VIDMM_RECYCLE_HEAP::Allocate(v21, a2, v10, a5, a6, 0LL, a8, a9);
LABEL_14:
      v19 = v22;
LABEL_15:
      v15 = v41;
    }
LABEL_16:
    if ( v19 >= 0 || (_BYTE)v15 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    LOBYTE(v15) = 1;
  }
  if ( v40 )
  {
    v23 = v39;
    v40 = 0;
    if ( v39[2] != KeGetCurrentThread() )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v20);
      v37[3] = 275LL;
      v37[4] = 4LL;
      v37[5] = v23;
      v37[6] = 0LL;
      v37[7] = 0LL;
      WdLogEvent5_WdCriticalError(v37);
    }
    v24 = *((_DWORD *)v23 + 6);
    if ( v24 <= 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v15, v20, v16);
      *(_QWORD *)(v38 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v38);
      v24 = *((_DWORD *)v23 + 6);
    }
    v25 = v24 - 1;
    *((_DWORD *)v23 + 6) = v25;
    if ( !v25 )
    {
      v23[2] = 0LL;
      ExReleasePushLockExclusiveEx(v23, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v19;
}
