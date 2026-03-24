/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800DE75C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038E0C (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006E9E8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800DB984 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152AF8 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v4; // eax
  int v6; // ecx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v9; // rax
  int (__fastcall ***v10)(_QWORD, GUID *, struct CResourceTable **); // rcx
  int v11; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[72]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+90h] [rbp+10h] BYREF
  struct CChannelContext *v14; // [rsp+98h] [rbp+18h] BYREF
  struct CResourceTable *v15; // [rsp+A0h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = *((_DWORD *)this + 238);
  v6 = *((_DWORD *)a4 + 1);
  if ( v4 != v6 )
  {
    *((_DWORD *)this + 238) = v6;
    v4 = v6;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qqq_EventWriteTransfer(v6, (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH, 0, v6 >= 3, v6 == 1);
      v4 = *((_DWORD *)this + 238);
    }
    if ( v4 == 6 )
    {
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 11));
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v13,
        (__int64)PrimaryMonitorTarget);
      if ( v13 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13);
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          &v14,
          v9);
        if ( v14 )
        {
          v15 = 0LL;
          v10 = (int (__fastcall ***)(_QWORD, GUID *, struct CResourceTable **))((char *)v14
                                                                               + *(int *)(*((_QWORD *)v14 + 1) + 4LL)
                                                                               + 8);
          if ( (**v10)(v10, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v15) >= 0 )
          {
            v11 = 7;
            memset_0(v12, 0, 0x40uLL);
            (*(void (__fastcall **)(struct CResourceTable *, int *))(*(_QWORD *)v15 + 48LL))(v15, &v11);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
      v4 = *((_DWORD *)this + 238);
    }
  }
  if ( v4 >= 5 )
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this + 11));
  return 0LL;
}
