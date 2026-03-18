/*
 * XREFs of ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0082384
 * Callers:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00815DC (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0081CDC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011A54 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 */

__int64 __fastcall VIDMM_PAGING_QUEUE::InitializePagingQueue(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  struct _KEVENT *v8; // rax
  char v9; // bl
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // r8
  bool v15; // cl
  __int64 v16; // rcx

  *(_QWORD *)(a1 + 80) = *(_QWORD *)a4;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 130) = *(_BYTE *)(a4 + 4624);
  *(_DWORD *)(a1 + 132) = dword_1C005143C;
  *(_DWORD *)(a1 + 116) = a5;
  v6 = *(_QWORD *)(a4 + 24);
  if ( *(int *)(v6 + 2304) < 0x2000 )
    v7 = 1;
  else
    v7 = *(_DWORD *)(v6 + 280);
  if ( v7 > 1 )
    *(_DWORD *)(a1 + 144) = a3;
  v8 = (struct _KEVENT *)operator new[](0x18uLL, 0x38346956u, (POOL_TYPE)512);
  v9 = 0;
  *(_QWORD *)(a1 + 120) = v8;
  if ( v8 )
  {
    KeInitializeEvent(v8, SynchronizationEvent, 0);
    v10 = 0;
    while ( 1 )
    {
      v11 = operator new[](0xA0uLL, 0x38346956u, PagedPool);
      v12 = v11;
      if ( !v11 )
        break;
      memset(v11, 0, 0xA0uLL);
      v13 = *(_QWORD **)(a1 + 24);
      if ( *v13 != a1 + 16 )
        __fastfail(3u);
      *v12 = a1 + 16;
      ++v10;
      v12[1] = v13;
      *v13 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      if ( v10 >= 2 )
      {
        v14 = *(_QWORD *)(a1 + 136);
        v15 = (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 96LL) & 2) != 0;
        *(_BYTE *)(a1 + 129) = 0;
        *(_BYTE *)(a1 + 128) = v15;
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 32LL);
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 344) || *(_BYTE *)(v16 + 346) )
            v9 = 1;
          *(_BYTE *)(a1 + 129) = v9;
        }
        VIDMM_DEVICE::InsertPagingQueueList((__int64 **)v14, (struct VIDMM_PAGING_QUEUE *)a1);
        return 0LL;
      }
    }
  }
  return 3221225495LL;
}
