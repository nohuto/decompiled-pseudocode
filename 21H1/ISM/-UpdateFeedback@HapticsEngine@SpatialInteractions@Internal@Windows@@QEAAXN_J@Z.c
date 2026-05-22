/*
 * XREFs of ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x180170070
 * Callers:
 *     ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016D130 (-Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x18016F5B8 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 *     ?StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016F934 (-StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ.c)
 * Callees:
 *     floor @ 0x18003C3F4 (floor.c)
 *     ??R?$_Func_class@XE@std@@QEBAXE@Z @ 0x180069754 (--R-$_Func_class@XE@std@@QEBAXE@Z.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        double a2,
        __int64 a3)
{
  double v5; // xmm7_8
  double v6; // xmm0_8
  __int64 v7; // rcx
  double v8; // xmm0_8
  int v9; // edi

  v5 = 1.0 / (double)*((int *)this + 56);
  v6 = floor(a2 / v5 + 0.5);
  v7 = *((_QWORD *)this + 27);
  v8 = v6 * v5 * 100.0 + 0.5;
  v9 = (int)v8;
  if ( !v7 || a3 - v7 >= *((_QWORD *)this + 26) || (_BYTE)v9 != *((_BYTE *)this + 228) )
  {
    std::_Func_class<void,unsigned char>::operator()((__int64)this + 128, (int)v8);
    *((_BYTE *)this + 228) = v9;
    *((_QWORD *)this + 27) = a3;
  }
}
