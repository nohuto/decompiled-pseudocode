/*
 * XREFs of ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C02642A0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0179600 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AddIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT *a2)
{
  __int64 v4; // rdx
  char *v5; // rbx
  char **v6; // rax
  bool v7; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1320), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = (char *)this + 1360;
  v6 = (char **)*((_QWORD *)v5 + 1);
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = (char *)a2;
  v7 = v9[8] == 0;
  *((_QWORD *)v5 + 1) = a2;
  if ( !v7 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v4);
  return 0LL;
}
