/*
 * XREFs of ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0082670
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00122A0 (-VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C008167C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0082558 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C00B7D3C (-VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA50 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Flush(VIDMM_PAGING_QUEUE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // bl
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    VIDMM_DEVICE::EnsureSchedulable(*((VIDMM_DEVICE **)this + 17), 0LL, a3);
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 10);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 144, 0LL);
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      v5 = *((_DWORD *)this + 28);
      v6 = !v5 || v5 == 2 && *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32);
      v7 = *((_QWORD *)this + 10) + 144LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( v6 )
        break;
      KeWaitForSingleObject(*((PVOID *)this + 15), Executive, 0, 0, 0LL);
    }
  }
}
