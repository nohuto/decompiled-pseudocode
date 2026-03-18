/*
 * XREFs of ?GetWindowBarrelVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@H@Z @ 0x1487B8
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 */

BOOL __fastcall Feedback::GetWindowBarrelVisualizationSetting(int a1, int a2)
{
  int v2; // esi
  int PointerBarrelVisualization; // ecx
  int v5; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = 1;
  if ( !a2 )
  {
    PointerBarrelVisualization = CTouchProcessor::GetPointerBarrelVisualization(_gpTouchProcessor, *(_WORD *)(a1 + 4));
    if ( PointerBarrelVisualization )
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x10000) == 0 )
        return PointerBarrelVisualization == 1;
    }
  }
  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 )
  {
    if ( ValidateHwnd(v5) )
    {
      v7 = 1;
      if ( FeedbackGetWindowSetting(1, &v7) )
        v2 = v7;
    }
  }
  CTouchProcessor::SetPointerBarrelVisualization(_gpTouchProcessor, *(_WORD *)(a1 + 4), v2);
  return v2;
}
