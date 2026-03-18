/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C006A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0060BFC (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14, v4);
  v5 = a2[4];
  v6 = a2[10];
  v15 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(v6 + 88), &v15, v5, v5 + 4096);
  v9 = v15;
  if ( !v15 )
  {
    v12 = a2[4];
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v13[7] = 0LL;
    v13[3] = 270LL;
    v13[4] = 52LL;
    v13[5] = 20LL;
    v13[6] = v12;
    WdLogEvent5_WdCriticalError(v13);
  }
  v10 = v9 << 12;
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v7);
  return v10;
}
