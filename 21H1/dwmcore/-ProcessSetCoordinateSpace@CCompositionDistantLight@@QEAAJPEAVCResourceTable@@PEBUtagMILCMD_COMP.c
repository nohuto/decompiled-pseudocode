/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800D11E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800932BC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetCoordinateSpace(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xC3u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xC8u, 0LL);
  }
  else if ( Resource != this[31] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCEu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = Resource;
      CCompositionLight::IssueLightChangedNotification((CCompositionLight *)this);
    }
  }
  return v4;
}
