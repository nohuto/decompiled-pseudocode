/*
 * XREFs of ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0060B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0063F58 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::MarkNoZeroNeed(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7, v4);
  for ( i = (VIDMM_RECYCLE_RANGE *)a2[8]; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::AccessZeroTransition(i);
    if ( i == (VIDMM_RECYCLE_RANGE *)a2[9] )
      break;
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, v6);
}
