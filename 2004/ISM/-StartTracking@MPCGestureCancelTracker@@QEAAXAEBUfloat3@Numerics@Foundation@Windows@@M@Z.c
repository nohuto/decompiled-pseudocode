/*
 * XREFs of ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180199064
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180193D1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195218 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCGestureCancelTracker::StartTracking(
        MPCGestureCancelTracker *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        float a3)
{
  int v3; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  *((float *)this + 3) = a3;
  *((_DWORD *)this + 2) = v3;
  *((_WORD *)this + 8) = 256;
  *((_DWORD *)this + 5) = GetTickCount();
}
