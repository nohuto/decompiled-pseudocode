/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180244DC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180244B2C (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  __int64 Resource; // rax
  __int64 v7; // rcx
  struct CVisual *v8; // rbp
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int CVI; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+44h] [rbp+Ch]

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xC3u);
  v7 = *((_QWORD *)this + 9);
  v8 = (struct CVisual *)Resource;
  *((_QWORD *)this + 9) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition
                                                                             + 27));
        if ( PrimaryMonitorTarget )
        {
          v10 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                        + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 12LL)
                                        + 8);
          (**(void (__fastcall ***)(struct IMonitorTarget *, unsigned int *))v10)(v10, &v16);
          v11 = v16;
          if ( v16 <= v17 )
            v11 = v17;
          v12 = v11;
          if ( *((_DWORD *)a3 + 3) < v11 )
            v12 = *((_DWORD *)a3 + 3);
          *((_DWORD *)this + 20) = v12;
          if ( *((_DWORD *)a3 + 4) < v11 )
            v11 = *((_DWORD *)a3 + 4);
          *((_DWORD *)this + 21) = v11;
          *((_BYTE *)this + 88) = *((_BYTE *)a3 + 20) != 0;
          CVI = CSnapshot::CreateCVI(this, v8);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, CVI, 0x8Cu);
        }
      }
    }
  }
  return v5;
}
