/*
 * XREFs of ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x180235994
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xFu)) != 0LL )
  {
    if ( Resource == this[13] )
    {
      return 0;
    }
    else
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xA6u);
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v8, 0x2Au);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
        this[13] = Resource;
        CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      }
    }
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2003303421, 0x26u);
  }
  return v8;
}
