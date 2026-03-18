/*
 * XREFs of __SetDoubleClickTime@4 @ 0xE49D2
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2 (_safe_cast_fnid_to_PTOOLTIPWND@4.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _InitTooltipDelay@4 @ 0xE4A64 (_InitTooltipDelay@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _SetDoubleClickTime(unsigned int a1)
{
  int v1; // esi
  int v2; // ecx
  int i; // esi
  int v4; // eax

  v1 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356);
  if ( !CheckWinstaAttributeAccess(0x10u) )
    return 0;
  v2 = a1;
  if ( a1 )
  {
    if ( a1 > 0x1388 )
      v2 = 5000;
  }
  else
  {
    v2 = 500;
  }
  _gdtDblClk = v2;
  *(_DWORD *)(_gpsi + 4448) = 4 * v2;
  *(_DWORD *)(_gpsi + 4444) = *(_DWORD *)(_gpsi + 4448) / 5u;
  if ( v1 )
  {
    for ( i = *(_DWORD *)(v1 + 8); i; i = *(_DWORD *)(i + 16) )
    {
      v4 = safe_cast_fnid_to_PTOOLTIPWND(*(_DWORD **)(i + 56));
      InitTooltipDelay(v4);
    }
  }
  return 1;
}
