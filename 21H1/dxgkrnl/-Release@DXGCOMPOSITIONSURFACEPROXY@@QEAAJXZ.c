/*
 * XREFs of ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0289634
 * Callers:
 *     ?CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0287BA0 (-CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0287C00 (-CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0288010 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C0289FF0 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B3ACC (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Release(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    operator delete(this);
  }
  return v1;
}
