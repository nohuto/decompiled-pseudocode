/*
 * XREFs of ShouldUseLogPixelsForWindowMetrics @ 0x1C0046F40
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall ShouldUseLogPixelsForWindowMetrics(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 TopLevelWindow; // rax
  bool v6; // cf

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v6 = __CFSHR__(*(_DWORD *)(v3 + 232), 29);
    }
    else
    {
      TopLevelWindow = GetTopLevelWindow(v2);
      if ( !TopLevelWindow )
        return v1;
      v6 = __CFSHR__(*(_DWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 232LL), 30);
    }
    return (unsigned int)-v6;
  }
  return v1;
}
