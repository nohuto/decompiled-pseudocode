/*
 * XREFs of ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0294984
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0294BB8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0184C1C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(struct DXGFASTMUTEX *const *this, unsigned int a2)
{
  __int64 v4; // rdx
  struct OUTPUTDUPL_MGR **v5; // rbx
  unsigned int OutputDuplManager; // ebx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this[4], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = (struct OUTPUTDUPL_MGR **)(this + 5);
  if ( *v5 )
    OutputDuplManager = 0;
  else
    OutputDuplManager = CreateOutputDuplManager(a2, 0LL, 0LL, 0LL, v5);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v4);
  return OutputDuplManager;
}
