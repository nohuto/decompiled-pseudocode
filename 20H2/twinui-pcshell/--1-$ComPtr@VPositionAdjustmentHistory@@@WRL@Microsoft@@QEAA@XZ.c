/*
 * XREFs of ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x180406174
 * Callers:
 *     ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAdjustmentHistory@@@Z @ 0x180405FA4 (--$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositio.c)
 *     _PositionAdjustmentHistory::AddPositionAdjustment_::_1_::dtor$2 @ 0x180406351 (_PositionAdjustmentHistory--AddPositionAdjustment_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
}
