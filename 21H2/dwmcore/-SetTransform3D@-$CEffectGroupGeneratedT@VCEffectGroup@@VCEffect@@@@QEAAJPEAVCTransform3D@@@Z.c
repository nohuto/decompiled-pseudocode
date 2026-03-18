/*
 * XREFs of ?SetTransform3D@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z @ 0x1800E558C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?ProcessLegacyEffectGroupUpdateCommand@@YAJPEAVCEffectGroup@@PEAVCChannelContext@@PEBUtagMILCMD_EFFECTGROUP@@@Z @ 0x1800E54F4 (-ProcessLegacyEffectGroupUpdateCommand@@YAJPEAVCEffectGroup@@PEAVCChannelContext@@PEBUtagMILCMD_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetTransform3D(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( a2 != this[11] )
  {
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x8F3u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
      this[11] = a2;
      CResource::NotifyOnChanged((__int64)this, 2u, (__int64)a2);
    }
  }
  return v2;
}
