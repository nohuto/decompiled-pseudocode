/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029CA48
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C029CE08 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
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

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rax
  struct OUTPUTDUPL_MGR *v26; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v27; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v30; // [rsp+60h] [rbp-A0h]
  char v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v34[144]; // [rsp+80h] [rbp-80h] BYREF

  v28 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  v8 = a3;
  v27 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
    if ( !RemoteOutputDuplMgr )
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = 90LL;
      WdLogEvent5_WdError(v20);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v28, &v33, &v27, &v32, &v26);
  v13 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v13;
  }
  v5 = v27;
  RemoteOutputDuplMgr = v26;
  if ( !v27 )
  {
LABEL_8:
    v17 = 0;
    goto LABEL_9;
  }
  v17 = 1;
LABEL_9:
  v21 = 0;
  v30 = v5;
  v31 = 0;
  if ( v17 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    v21 = v31;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v5, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v28),
        DXGADAPTER::ReleaseReference(v5),
        v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL),
        v24 >= 0) )
  {
    if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v24 = a5(RemoteOutputDuplMgr, a4);
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v25 + 24) = v8;
      WdLogEvent5_WdError(v25);
      v24 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34, v22);
  if ( v21 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  return (unsigned int)v24;
}
