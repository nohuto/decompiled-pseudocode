/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800FF36C
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FE3C0 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FE6F0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800FE760 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057F34 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x1800F4820 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x1800FABA0 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(char *pv, int a2, const unsigned __int16 *a3)
{
  char *v5; // rsi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  CMonitorManager::DeviceStateChangedContext *v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rax
  struct _TP_WORK *ThreadpoolWork; // r15
  signed int LastError; // eax
  __int64 *v12; // rax
  __int64 **v13; // rcx
  unsigned int *v15; // rbx
  unsigned int *v16; // rbx
  CMonitorManager::DeviceStateChangedContext *v17; // [rsp+20h] [rbp-48h]
  CMonitorManager::DeviceStateChangedContext *v18; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v19; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v20; // [rsp+38h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v22; // [rsp+48h] [rbp-20h]

  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v6, (__int64)&ATL::g_strmgr);
    *((_DWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v17 = v7;
  v18 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_31;
  }
  if ( a3 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a3[v9] );
  }
  else
  {
    LODWORD(v9) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v7, a3, v9);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = (unsigned int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v8 = *v15;
    if ( (*v15 & 0x80000000) != 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v17);
      goto LABEL_31;
    }
    v5 = pv;
    v7 = v17;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v7 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v8);
    }
    goto LABEL_31;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 160);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v8 = 0;
    v12 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
            (__int64)(v5 + 200),
            (__int64 *)&v18,
            *((_QWORD *)v5 + 26));
    v13 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v13 )
      *v13 = v12;
    else
      *((_QWORD *)v5 + 25) = v12;
    *((_QWORD *)v5 + 26) = v12;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = (unsigned int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    v8 = *v16;
    if ( (*v16 & 0x80000000) != 0 )
      goto LABEL_29;
    v5 = pv;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_29:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_31:
  if ( v18 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v18);
  return v8;
}
