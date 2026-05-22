/*
 * XREFs of ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180199014
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180193C8C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195188 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18004A60B (sqrtf_0.c)
 */

void __fastcall MPCGestureCancelTracker::TrackPosition(
        MPCGestureCancelTracker *this,
        const struct Windows::Foundation::Numerics::float3 *a2)
{
  if ( !*((_BYTE *)this + 16)
    && *((_BYTE *)this + 17)
    && (sqrtf_0(
          (float)((float)((float)(*((float *)a2 + 1) - *((float *)this + 1))
                        * (float)(*((float *)a2 + 1) - *((float *)this + 1)))
                + (float)((float)(*(float *)a2 - *(float *)this) * (float)(*(float *)a2 - *(float *)this)))
        + (float)((float)(*((float *)a2 + 2) - *((float *)this + 2)) * (float)(*((float *)a2 + 2) - *((float *)this + 2)))) > *((float *)this + 3)
     || GetTickCount() - *((_DWORD *)this + 5) > 0x1F4) )
  {
    *((_BYTE *)this + 16) = 1;
  }
}
