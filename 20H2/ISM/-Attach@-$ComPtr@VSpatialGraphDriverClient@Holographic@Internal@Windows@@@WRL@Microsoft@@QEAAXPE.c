/*
 * XREFs of ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B7790
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B8050 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B8D50 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014F30C (--$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDrive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
