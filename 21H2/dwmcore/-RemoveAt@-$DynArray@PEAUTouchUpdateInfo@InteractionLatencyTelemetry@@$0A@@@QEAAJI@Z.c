/*
 * XREFs of ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C
 * Callers:
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1800193DC (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18003CD8C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1800450A4 (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1800E1C00 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800E47B4 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800E7790 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800EBDC4 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800F7F34 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x1801037BC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___ @ 0x180103A80 (CComposition--ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801937E4 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1801BB190 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloca.c)
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x1801BB24C (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1801BB308 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *(_QWORD *)a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *(_DWORD *)(a1 + 24);
      }
      while ( v4 < v2 - 1 );
    }
    *(_DWORD *)(a1 + 24) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0x19Cu);
  }
  return v3;
}
