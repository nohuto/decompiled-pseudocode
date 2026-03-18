/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0175AC4
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01759F0 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0175B90 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v15 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v15 + 24) = 16LL;
LABEL_14:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v15 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v15 + 24) = 916LL;
    goto LABEL_14;
  }
  v8 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v3);
    *(_QWORD *)(v15 + 24) = 923LL;
    goto LABEL_14;
  }
  *((_DWORD *)this + 2) = *v8;
  v9 = operator new[](0x20uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *((_DWORD *)v9 + 4) = 0;
    *((_DWORD *)v9 + 5) = 19;
    *((_DWORD *)v9 + 6) = 50;
  }
  *((_QWORD *)this + 3) = v9;
  if ( v9 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v16 + 24) = 933LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  return result;
}
