/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0185740
 * Callers:
 *     DpiFinishPnPTransitionCallback @ 0x1C0185540 (DpiFinishPnPTransitionCallback.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01857C8 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(
        DXGSESSIONMGR *this,
        struct _PNP_TRANS_TOKEN *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  DXGSESSIONDATA *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( (unsigned int)v4 < *((_DWORD *)this + 18) && (v7 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * v4)) != 0LL )
  {
    if ( (_DWORD)v4 != *((_DWORD *)this + 32) )
      DXGSESSIONDATA::FinishPnPTransitionOnSession(v7, a2);
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = v4;
    WdLogEvent5_WdWarning(v9);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v6);
}
