/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1801F8AB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18003D678 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801F8890 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CRenderTargetBitmap **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  struct CVisual *Resource; // rbp
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int CVI; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp+Ch]

  v5 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xC3u);
  wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(this + 8);
  if ( Resource )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition
                                                                             + 11));
        if ( PrimaryMonitorTarget )
        {
          v8 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                       + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 12LL)
                                       + 8);
          (**(void (__fastcall ***)(struct IMonitorTarget *, unsigned int *))v8)(v8, &v15);
          v9 = *((_DWORD *)a3 + 3);
          v10 = v15;
          if ( v15 <= v16 )
            v10 = v16;
          if ( v9 >= v10 )
            v9 = v10;
          *((_DWORD *)this + 18) = v9;
          v11 = *((_DWORD *)a3 + 4);
          if ( v11 >= v10 )
            v11 = v10;
          *((_DWORD *)this + 19) = v11;
          *((_BYTE *)this + 80) = *((_BYTE *)a3 + 20) != 0;
          CVI = CSnapshot::CreateCVI((CSnapshot *)this, Resource);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CVI, 0x8Cu, 0LL);
        }
      }
    }
  }
  return v5;
}
