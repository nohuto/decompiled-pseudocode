/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0158BF4
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C0158880 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0158A60 (DxgkSessionConnected.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015DF18 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkSessionReconnected @ 0x1C0173210 (DxgkSessionReconnected.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C029DB14 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C029E838 (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, __int64 a2)
{
  char v2; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v6; // rdx
  struct DXGSESSIONDATA *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  CTTMDEVICE *v11; // rdi
  CTTMDEVICE *v12; // r13
  __int64 v13; // rax
  CTTMDEVICE *v14; // rcx
  int v15; // eax
  __int64 v16; // r15
  _QWORD *v17; // rax
  struct DXGSESSIONDATA *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  CTTMDEVICE *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v7 = this[15];
  if ( v2 )
  {
    if ( v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v8 + 24) = 6578LL;
      WdLogEvent5_WdAssertion(v8);
    }
    this[15] = SessionDataForSpecifiedSession;
    v7 = SessionDataForSpecifiedSession;
    *((_DWORD *)this + 32) = *(_DWORD *)SessionDataForSpecifiedSession;
  }
  if ( v7 && *((_BYTE *)v7 + 18489) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 42, 0LL);
    this[43] = KeGetCurrentThread();
    if ( v2 )
    {
      v11 = this[45];
      while ( v11 != (CTTMDEVICE *)(this + 45) )
      {
        v12 = v11;
        if ( *((_QWORD *)v11 + 4) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v13 + 24) = 6608LL;
          WdLogEvent5_WdAssertion(v13);
        }
        v14 = v11;
        v11 = *(CTTMDEVICE **)v11;
        v15 = CTTMDEVICE::RegisterTtmDevice(v14, this[15]);
        v16 = v15;
        v10 = v15 + 0x80000000;
        if ( (int)v10 >= 0 && v15 != -1073741130 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
          v17[3] = *((unsigned int *)v12 + 20);
          v17[4] = *((_QWORD *)v12 + 8);
          v17[5] = *(unsigned int *)this[15];
          v17[6] = v16;
          WdLogEvent5_WdError(v17);
        }
      }
    }
    else
    {
      v18 = this[15];
      if ( v18 )
      {
        v19 = (_QWORD *)((char *)v18 + 18592);
        v20 = (_QWORD *)*((_QWORD *)v18 + 2324);
        while ( v20 != v19 )
        {
          v21 = (CTTMDEVICE *)(v20 - 2);
          if ( (struct DXGSESSIONDATA *)v20[2] != v18 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v10, v18);
            *(_QWORD *)(v22 + 24) = 6643LL;
            WdLogEvent5_WdAssertion(v22);
          }
          v20 = (_QWORD *)*v20;
          CTTMDEVICE::UnRegisterTtmDevice(v21, 1u);
          v18 = this[15];
          v19 = (_QWORD *)((char *)v18 + 18592);
        }
      }
    }
    this[43] = 0LL;
    ExReleasePushLockExclusiveEx(this + 42, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v2 )
  {
    if ( this[15] != SessionDataForSpecifiedSession )
    {
      v23 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v23 + 24) = 6663LL;
      WdLogEvent5_WdAssertion(v23);
    }
    this[15] = 0LL;
    *((_DWORD *)this + 32) = -1;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v6);
}
