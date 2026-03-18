/*
 * XREFs of ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x180237238
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1802373B0 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetLightSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *v6; // rsi
  __int64 Resource; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( !v5
    || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x22u), (v6 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 56LL))(Resource, 32LL) )
  {
    if ( v6 != this[12] )
    {
      v10 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x14Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
        this[13] = 0LL;
        this[12] = v6;
        CProjectedShadowScene::RequestRedrawAll((CProjectedShadowScene *)this);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2003303421, 0x149u);
  }
  return v4;
}
