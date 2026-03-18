/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DA220
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D9BC4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01DA970 (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall Feedback::GetWindowVisualizationSetting(
        Feedback *this,
        const struct tagPOINTER_INFO *a2,
        int a3,
        int a4,
        int *a5)
{
  int *v5; // rsi
  int v7; // eax
  unsigned int PointerVisualization; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  int v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  v5 = a5;
  v15 = 0;
  *a5 = 0;
  v7 = *((_DWORD *)this + 3);
  if ( (v7 & 0x10000) != 0 )
  {
    if ( a3 || a4 )
    {
      PointerVisualization = 1;
      v15 = 1;
    }
    else
    {
      PointerVisualization = (_DWORD)a2 == 0;
      if ( !(_DWORD)a2 && *(_DWORD *)this == 2 )
      {
        v9 = *((_QWORD *)this + 3);
        if ( v9 )
        {
          v10 = ValidateHwnd(v9);
          if ( v10 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v10, 1LL, 1LL, &v16) )
              PointerVisualization = v16;
          }
        }
      }
    }
    if ( PointerVisualization )
    {
      if ( (unsigned int)(*(_DWORD *)this - 2) <= 1 )
      {
        v11 = *((_QWORD *)this + 3);
        if ( v11 )
        {
          v12 = ValidateHwnd(v11);
          if ( v12 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v12, 13LL, 1LL, &v16) && v16 )
            {
              PointerVisualization = 0;
              v15 = 0;
            }
          }
        }
      }
    }
    CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), PointerVisualization, &v15, 0);
  }
  else if ( (v7 & 0x40000) != 0 )
  {
    PointerVisualization = CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5);
    CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), 1, 0LL, 0);
  }
  else
  {
    PointerVisualization = (_DWORD)a2 == 0;
    if ( (v7 & 4) != 0 )
    {
      v13 = CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5);
      PointerVisualization = v13;
      if ( *v5 )
      {
        CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v13, 0LL, 0);
        if ( PointerVisualization )
          *v5 = 0;
      }
    }
  }
  return PointerVisualization;
}
