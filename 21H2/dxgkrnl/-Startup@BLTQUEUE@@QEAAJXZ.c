/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C016DDE8
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DF854 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C019E668 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AFA4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C016DF18 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 */

__int64 __fastcall BLTQUEUE::Startup(BLTQUEUE *this, __int64 a2)
{
  __int64 v3; // rdi
  DXGDODPRESENT *v4; // rcx
  __int64 Timer; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  LODWORD(v3) = 0;
  v4 = *(DXGDODPRESENT **)this;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 34) == 1 && (*((_DWORD *)DXGDODPRESENT::GetAdapter(v4) + 87) & 0x100) != 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v18 + 24) = 857LL;
      WdLogEvent5_WdAssertion(v18);
      return 3221225659LL;
    }
  }
  else if ( *((_DWORD *)this + 34) == 1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = 851LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  Timer = ExAllocateTimer(0LL, 0LL, 0LL);
  *((_QWORD *)this + 19) = Timer;
  if ( Timer && (v10 = ExAllocateTimer(0LL, 0LL, 4LL), (*((_QWORD *)this + 18) = v10) != 0LL) )
  {
    BLTQUEUE::RecreateVsyncSource(this, 0);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v11 = PsCreateSystemThread(
            (PHANDLE)this + 75,
            0x1FFFFFu,
            &ObjectAttributes,
            0LL,
            0LL,
            BLTQUEUE::BltQueueWorkerThread,
            this);
    v3 = v11;
    if ( v11 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v3;
      WdLogEvent5_WdError(v20);
      v22 = *((_QWORD *)this + 18);
      LODWORD(v3) = -1073741801;
      if ( v22 )
      {
        LOBYTE(v21) = 1;
        ExDeleteTimer(v22, v21, 0LL, 0LL);
        *((_QWORD *)this + 18) = 0LL;
      }
      v23 = *((_QWORD *)this + 19);
      if ( v23 )
      {
        LOBYTE(v21) = 1;
        ExDeleteTimer(v23, v21, 0LL, 0LL);
        *((_QWORD *)this + 19) = 0LL;
      }
    }
    else
    {
      KeWaitForSingleObject((char *)this + 488, Executive, 0, 0, 0LL);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdLowResource(v19);
  }
  return (unsigned int)v3;
}
