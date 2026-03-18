/*
 * XREFs of ?ProcessSetSource@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSKYBOXBRUSH_SETSOURCE@@@Z @ 0x18020F0EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSKYBOXBRUSH_SETSOURCE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CResource *v11; // rdx
  struct CResource *v12; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x1Fu)) != 0LL )
  {
    if ( Resource != this[11] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1F0u);
      }
      else
      {
        v11 = this[11];
        if ( v11 )
          CResource::UnRegisterNotifierInternal((CResource *)this, v11);
        v12 = *this;
        this[11] = Resource;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v12 + 9))(this, 0LL, 0LL);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x1EAu);
  }
  return v4;
}
