/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C01E405C
 * Callers:
 *     DxgkDesktopSwitch @ 0x1C01E3FE0 (DxgkDesktopSwitch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden this, unsigned int), _QWORD))
{
  __int64 v7; // r12
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  int v14; // r15d
  struct DXGADAPTER *v15; // rdi
  int OutputDuplManager; // eax
  unsigned int v17; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v19; // al
  int v20; // edi
  struct OUTPUTDUPL_MGR *v22; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v23; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v24; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v26; // [rsp+70h] [rbp-90h]
  char v27; // [rsp+78h] [rbp-88h]
  unsigned __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[144]; // [rsp+90h] [rbp-70h] BYREF

  v7 = (unsigned int)a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1, a2, a3, a4);
  v13 = 0;
  v14 = IsRemoteSessionUsingXddmMonitors;
  v24 = 0LL;
  v15 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
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
LABEL_20:
    v19 = 0;
    goto LABEL_6;
  }
  OutputDuplManager = FindOutputDuplManager(a1, v7, &v24, &v29, &v23, &v28, &v22);
  v17 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v17;
  }
  v15 = v23;
  RemoteOutputDuplMgr = v22;
  if ( !v23 )
    goto LABEL_20;
  v19 = 1;
LABEL_6:
  v26 = v15;
  v27 = 0;
  if ( v19 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    v13 = v27;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v15, 0LL);
  if ( !a1
    || v14
    || (DXGADAPTER::ReleaseReference(v24),
        DXGADAPTER::ReleaseReference(v15),
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL),
        v20 >= 0) )
  {
    if ( (unsigned int)v7 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
      v20 = -1071774972;
    }
    else
    {
      v20 = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  return (unsigned int)v20;
}
