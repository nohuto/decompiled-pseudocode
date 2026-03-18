/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C007CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001344 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00014D4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C007D258 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v3 = a2[4];
  v4 = a2[10];
  v9 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(v4 + 88), &v9, v3, v3 + 4096);
  v5 = v9;
  if ( !v9 )
    WdLogSingleEntry5(0LL, 270LL, 52LL, 20LL, a2[4], 0LL);
  v6 = v5 << 12;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
