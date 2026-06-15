/*
 * XREFs of ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012C748
 * Callers:
 *     ?ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180129A30 (-ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ.c)
 *     ?SetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateWriter@@UEAAJAEBU_GUID@@@Z @ 0x180129AB0 (-SetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateWriter@@UEAAJAEBU_GUID@@@Z.c)
 *     ?SetSpatialRendererSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialRendererSelectionMode@@@Z @ 0x180129B60 (-SetSpatialRendererSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialRendererSelectionM.c)
 *     ?SetSpatialVssSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialVssSelectionMode@@@Z @ 0x180129C10 (-SetSpatialVssSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialVssSelectionMode@@@Z.c)
 * Callees:
 *     ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C6F4 (-SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall SpatialAudioStateIO::Store(SpatialAudioStateIO *this)
{
  struct _tagpropertykey v2; // [rsp+20h] [rbp-48h] BYREF
  struct tagPROPVARIANT v3; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)&v3.vt = 0LL;
  v3.vt = 65;
  v3.bstrblobVal.pData = (BYTE *)this + 544;
  v2.pid = 2;
  v3.lVal = 24;
  v2.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_State;
  return SpatialAudioIO::SetPropertyValue(this, &v2, &v3);
}
