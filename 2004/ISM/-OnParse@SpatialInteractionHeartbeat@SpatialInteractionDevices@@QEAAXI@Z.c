/*
 * XREFs of ?OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z @ 0x18016D2C4
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D620 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     <none>
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionHeartbeat::OnParse(
        SpatialInteractionDevices::SpatialInteractionHeartbeat *this,
        int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r8

  ++*((_DWORD *)this + 8);
  v2 = (_DWORD *)((char *)this + 36);
  v3 = 7LL;
  do
  {
    if ( (a2 & *(_DWORD *)((char *)v2
                         + &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest
                         - (_UNKNOWN *)this
                         - 36)) != 0 )
      ++*v2;
    ++v2;
    --v3;
  }
  while ( v3 );
  SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(this, 0);
}
