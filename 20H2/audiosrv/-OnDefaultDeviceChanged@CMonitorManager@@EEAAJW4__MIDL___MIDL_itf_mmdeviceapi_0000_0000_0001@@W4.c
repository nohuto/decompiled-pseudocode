/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800FD560
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180003DD8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800CB0F0 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x1800F9F6C (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  DefaultChangedContext *v9; // rax
  DefaultChangedContext *v10; // r14
  DefaultChangedContext *v11; // rbx
  signed int v12; // esi
  CAudioSessionManager *v13; // rcx
  __int64 v14; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+40h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
      a4);
  }
  if ( a3 )
    return 0LL;
  v9 = (DefaultChangedContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v9, (__int64)&ATL::g_strmgr);
    *((_QWORD *)v10 + 2) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v10 + 3) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = WPP_GLOBAL_Control;
LABEL_32:
    if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x800000) != 0
      && *((_BYTE *)v13 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x1Du, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v12);
    }
    goto LABEL_36;
  }
  *((_DWORD *)v10 + 2) = a2;
  v12 = 0;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
  }
  else
  {
    LODWORD(v14) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v10, a4, v14);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (signed int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v12 = *v17;
    if ( *v17 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v10);
      v11 = v10;
LABEL_30:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_31;
    }
    v11 = v10;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v10, 0LL);
  *((_QWORD *)v10 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_30;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v12);
    goto LABEL_30;
  }
LABEL_31:
  if ( v12 < 0 )
    goto LABEL_32;
LABEL_36:
  if ( v11 )
    DefaultChangedContext::`scalar deleting destructor'(v11);
  return (unsigned int)v12;
}
