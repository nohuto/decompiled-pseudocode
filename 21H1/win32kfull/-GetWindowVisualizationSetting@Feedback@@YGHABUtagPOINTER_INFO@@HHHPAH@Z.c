/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@HHHPAH@Z @ 0x14883A
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 */

int __userpurge Feedback::GetWindowVisualizationSetting@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        Feedback *this,
        const struct tagPOINTER_INFO *a4,
        int *a5,
        int a6,
        int a7,
        int *a8)
{
  int v9; // ecx
  int PointerVisualization; // esi
  int v11; // ecx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h] BYREF

  v15 = 0;
  v14 = 0;
  *a5 = 0;
  v9 = *(_DWORD *)(a2 + 12);
  if ( (v9 & 0x10000) != 0 )
  {
    if ( this || a4 )
    {
      PointerVisualization = 1;
      v14 = 1;
    }
    else
    {
      PointerVisualization = a1 == 0;
      if ( !a1 && *(_DWORD *)a2 == 2 )
      {
        v11 = *(_DWORD *)(a2 + 20);
        if ( v11 )
        {
          if ( ValidateHwnd(v11) && FeedbackGetWindowSetting(1, &v15) )
            PointerVisualization = v15;
        }
      }
    }
    if ( PointerVisualization && (*(_DWORD *)a2 == 2 || *(_DWORD *)a2 == 3) )
    {
      v12 = *(_DWORD *)(a2 + 20);
      if ( v12 && ValidateHwnd(v12) && FeedbackGetWindowSetting(1, &v15) && v15 )
      {
        PointerVisualization = 0;
        v14 = 0;
      }
    }
    CTouchProcessor::SetPointerVisualization(_gpTouchProcessor, *(_WORD *)(a2 + 4), PointerVisualization, &v14, 0);
  }
  else if ( (v9 & 0x40000) != 0 )
  {
    PointerVisualization = CTouchProcessor::GetPointerVisualization(_gpTouchProcessor, *(_WORD *)(a2 + 4), a5);
    CTouchProcessor::SetPointerVisualization(_gpTouchProcessor, *(_WORD *)(a2 + 4), 1, 0, 0);
  }
  else
  {
    PointerVisualization = a1 == 0;
    if ( (v9 & 4) != 0 )
    {
      PointerVisualization = CTouchProcessor::GetPointerVisualization(_gpTouchProcessor, *(_WORD *)(a2 + 4), a5);
      if ( *a5 )
      {
        CTouchProcessor::SetPointerVisualization(_gpTouchProcessor, *(_WORD *)(a2 + 4), PointerVisualization, 0, 0);
        if ( PointerVisualization )
          *a5 = 0;
      }
    }
  }
  return PointerVisualization;
}
