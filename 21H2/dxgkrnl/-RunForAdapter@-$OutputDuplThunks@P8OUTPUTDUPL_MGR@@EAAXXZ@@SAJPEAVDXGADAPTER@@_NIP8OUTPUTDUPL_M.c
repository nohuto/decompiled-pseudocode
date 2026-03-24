/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C029C86C
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C029C030 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0116DF0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0161530 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_CONTEXT **this)))
{
  struct DXGADAPTER *v5; // rbx
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct OUTPUTDUPL_MGR *v22; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGADAPTER *v23; // [rsp+50h] [rbp-B8h] BYREF
  DXGADAPTER *v24; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v26; // [rsp+70h] [rbp-98h]
  unsigned __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v29[144]; // [rsp+88h] [rbp-80h] BYREF

  v24 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
    if ( !RemoteOutputDuplMgr )
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = 90LL;
      WdLogEvent5_WdError(v16);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, 0LL, &v24, &v28, &v23, &v27, &v22);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v23;
    RemoteOutputDuplMgr = v22;
    if ( v23 )
    {
      v13 = 1;
LABEL_9:
      v18 = 0;
      v25[1] = v5;
      v26 = 0;
      if ( v13 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        v18 = v26;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v24),
            DXGADAPTER::ReleaseReference(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL),
            (int)v5 >= 0) )
      {
        if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v20, v19);
          *(_QWORD *)(v21 + 24) = 0LL;
          WdLogEvent5_WdError(v21);
          LODWORD(v5) = -1071774972;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29, v19);
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      return (unsigned int)v5;
    }
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v5;
  WdLogEvent5_WdWarning(v11);
  return (unsigned int)v5;
}
