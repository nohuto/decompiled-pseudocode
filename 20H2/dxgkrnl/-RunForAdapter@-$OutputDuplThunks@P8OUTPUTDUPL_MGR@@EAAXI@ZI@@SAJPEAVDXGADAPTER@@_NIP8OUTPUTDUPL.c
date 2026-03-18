/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C015B0B8
 * Callers:
 *     DxgkDesktopSwitch @ 0x1C015B020 (DxgkDesktopSwitch.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C015B3D0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, __int64 a2), _QWORD))
{
  struct DXGADAPTER *v6; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v14; // al
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct OUTPUTDUPL_MGR *v24; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v25; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v26; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v28; // [rsp+60h] [rbp-A0h]
  char v29; // [rsp+68h] [rbp-98h]
  unsigned __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[144]; // [rsp+80h] [rbp-80h] BYREF

  v26 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v8 = a3;
  v25 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v26, &v31, &v25, &v30, &v24);
    v6 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v22 + 24) = a1;
      *(_QWORD *)(v22 + 32) = v6;
      WdLogEvent5_WdWarning(v22);
      return (unsigned int)v6;
    }
    v6 = v25;
    RemoteOutputDuplMgr = v24;
    if ( v25 )
    {
      v14 = 1;
LABEL_5:
      v15 = 0;
      v28 = v6;
      v29 = 0;
      if ( v14 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        v15 = v29;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v6, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v26),
            DXGADAPTER::ReleaseReference(v6),
            LODWORD(v6) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL),
            (int)v6 >= 0) )
      {
        if ( (unsigned int)v8 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v23 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v23 + 24) = v8;
          WdLogEvent5_WdError(v23);
          LODWORD(v6) = -1071774972;
        }
        else
        {
          LODWORD(v6) = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v16);
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
      return (unsigned int)v6;
    }
LABEL_16:
    v14 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
  if ( RemoteOutputDuplMgr )
    goto LABEL_16;
  v21 = WdLogNewEntry5_WdError(v20, v19);
  *(_QWORD *)(v21 + 24) = 90LL;
  WdLogEvent5_WdError(v21);
  return 3221226021LL;
}
