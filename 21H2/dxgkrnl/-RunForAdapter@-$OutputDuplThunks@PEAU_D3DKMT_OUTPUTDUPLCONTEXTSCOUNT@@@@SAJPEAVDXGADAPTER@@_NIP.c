/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0324078
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r14
  struct DXGADAPTER *v7; // rsi
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rdi
  int v14; // r15d
  int OutputDuplManager; // eax
  unsigned int v16; // ebx
  struct OUTPUTDUPL_MGR *v17; // rbx
  char v18; // al
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v21; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v24; // [rsp+70h] [rbp-90h]
  char v25; // [rsp+78h] [rbp-88h]
  unsigned __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = (unsigned int)a3;
  v7 = a1;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1, a2, a3, a4);
  v22 = 0LL;
  v13 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v14 = IsRemoteSessionUsingXddmMonitors;
  v21 = 0LL;
  if ( !v7 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v10, v9, v11, v12) )
    {
      WdLogSingleEntry1(1LL, 80LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
        80LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v17 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(2LL, 86LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find remote output duplication manager",
        86LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221226021LL;
    }
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(v7, v6, &v22, &v27, &v21, &v26, &RemoteOutputDuplMgr);
  v16 = OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v13 = v21;
    v17 = RemoteOutputDuplMgr;
    if ( v21 )
    {
      v18 = 1;
      goto LABEL_12;
    }
LABEL_11:
    v18 = 0;
LABEL_12:
    v24 = v13;
    v25 = 0;
    if ( v18 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v13, 0LL);
    if ( v7 )
    {
      v7 = 0LL;
      if ( !v14 )
      {
        DXGADAPTER::ReleaseReference(v22);
        DXGADAPTER::ReleaseReference(v13);
        if ( *((_DWORD *)v13 + 50) != 1 )
        {
          v16 = -1073741130;
LABEL_22:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
          if ( v25 != (_BYTE)v7 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
          return v16;
        }
        v17 = RemoteOutputDuplMgr;
      }
    }
    if ( (unsigned int)v6 < *((_DWORD *)v17 + 19) )
    {
      v16 = a5(v17, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid source ID 0x%I64x",
        v6,
        (__int64)v7,
        (__int64)v7,
        (__int64)v7,
        (__int64)v7);
      v16 = -1071774972;
    }
    goto LABEL_22;
  }
  WdLogSingleEntry2(3LL, v7, OutputDuplManager);
  return v16;
}
