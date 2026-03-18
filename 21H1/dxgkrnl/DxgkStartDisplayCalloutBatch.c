/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C0166278
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 2672);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v1 + 16)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v9 + 24) = 8515LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(v1 + 456), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *(_BYTE *)(v1 + 496) )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4);
    v11 = *(_QWORD *)(v1 + 16);
    v7 = -1073741811;
    *(_QWORD *)(v10 + 24) = v11;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13, v12);
  }
  else
  {
    v6 = v13[8] == 0;
    *(_BYTE *)(v1 + 496) = 1;
    if ( !v6 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v4);
    return 0;
  }
  return v7;
}
