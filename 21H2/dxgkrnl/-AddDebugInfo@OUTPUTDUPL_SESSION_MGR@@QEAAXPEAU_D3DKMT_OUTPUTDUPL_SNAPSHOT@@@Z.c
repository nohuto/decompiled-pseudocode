/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C031F38C
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0320F7C (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = **((_QWORD **)this + 7);
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 4120LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcesses", 4120LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = *((_DWORD *)this + 1);
  if ( v7 )
  {
    v8 = v7;
    do
    {
      if ( *(_QWORD *)(v6 + 8) && *(_DWORD *)v6 )
      {
        ++v4;
        v5 += *(_DWORD *)v6;
      }
      v6 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  v9 = v10[8] == 0;
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  if ( !v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
