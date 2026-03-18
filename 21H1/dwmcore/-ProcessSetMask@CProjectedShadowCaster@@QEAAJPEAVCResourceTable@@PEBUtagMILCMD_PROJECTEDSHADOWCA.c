/*
 * XREFs of ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801E7F4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180003D58 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETMASK *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) != 0LL )
  {
    v7 = 0;
    if ( Resource != this[15] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xEAu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
        this[15] = Resource;
        CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
      }
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0x42u, 0LL);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x3Eu, 0LL);
  }
  return (unsigned int)v7;
}
