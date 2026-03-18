/*
 * XREFs of ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0269FE4
 * Callers:
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C020F448 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RemoveIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT ***a2)
{
  __int64 v3; // rdx
  struct OUTPUTDUPL_MGR_INDIRECT **v4; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 1432), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = *a2;
  if ( (*a2)[1] != (struct OUTPUTDUPL_MGR_INDIRECT *)a2 || (v5 = a2[1], *v5 != (struct OUTPUTDUPL_MGR_INDIRECT *)a2) )
    __fastfail(3u);
  *v5 = (struct OUTPUTDUPL_MGR_INDIRECT *)v4;
  v4[1] = (struct OUTPUTDUPL_MGR_INDIRECT *)v5;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, v3);
  return 0LL;
}
