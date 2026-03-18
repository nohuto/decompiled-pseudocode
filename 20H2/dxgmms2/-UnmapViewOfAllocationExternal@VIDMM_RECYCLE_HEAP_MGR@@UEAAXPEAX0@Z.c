/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00C3640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C000103C (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006C868 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        void *a3)
{
  __int64 v5; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 CurrentProcess; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), (__int64)a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14, v5);
  if ( a2[5] - a2[4] <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v6, 0) )
  {
    CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
    MmUnmapViewOfSection(CurrentProcess, a3);
  }
  else
  {
    v10 = *(void **)(a2[10] + 56LL);
    v11 = (void *)PsGetCurrentProcess(v8, v7, v9);
    VidMmUnmapViewAsync(v11, v10, a3);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v12);
}
