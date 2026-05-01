/*
 * XREFs of ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x180413014
 * Callers:
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1804133A4 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18041429C (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppResizeView::MapResizeDropLocationToResizeAction(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  if ( a2 == -1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x265,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 == 1 )
                  *a3 = 5;
              }
              else
              {
                *a3 = 2;
              }
            }
          }
          else
          {
            *a3 = 3;
          }
        }
      }
      else
      {
        *a3 = 1;
      }
    }
    else
    {
      *a3 = 4;
    }
    return 0LL;
  }
}
