/*
 * XREFs of ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180082C70
 * Callers:
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180082B10 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CLivePreview::_GetDesktopWorkArea(
        CLivePreview *this,
        struct tagRECT *__return_ptr retstr,
        HWND *a3)
{
  HMONITOR v5; // rax
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  struct tagRECT *v10; // rdx

  *retstr = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 67) )
    {
      v5 = MonitorFromWindow(a3[5], 0);
      if ( v5 )
      {
        v6 = *((_QWORD *)this + 67);
        v7 = 0;
        if ( *(_DWORD *)(v6 + 40) )
        {
          v8 = 0LL;
          do
          {
            v9 = v8 + *(_QWORD *)(v6 + 16);
            if ( v9 && v5 == *(HMONITOR *)(v9 + 16) )
            {
              if ( v7 >= *(_DWORD *)(v6 + 40) )
                v10 = 0LL;
              else
                v10 = (struct tagRECT *)(v8 + *(_QWORD *)(v6 + 16));
              *retstr = *v10;
            }
            ++v7;
            v8 += 24LL;
          }
          while ( v7 < *(_DWORD *)(v6 + 40) );
        }
      }
    }
  }
  return retstr;
}
