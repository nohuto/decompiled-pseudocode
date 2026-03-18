/*
 * XREFs of _SetDoubleClickTime @ 0x1C011C9B0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     InitTooltipDelay @ 0x1C011CA64 (InitTooltipDelay.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90 (safe_cast_fnid_to_PTOOLTIPWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetDoubleClickTime(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 v8; // rax

  v3 = a1;
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 664);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, v5, v6) )
    return 0LL;
  if ( v3 )
  {
    if ( v3 > 0x1388 )
      v3 = 5000;
  }
  else
  {
    v3 = 500;
  }
  gdtDblClk = v3;
  *(_DWORD *)(gpsi + 4980LL) = 4 * v3;
  *(_DWORD *)(gpsi + 4976LL) = *(_DWORD *)(gpsi + 4980LL) / 5u;
  if ( v4 )
  {
    for ( i = *(_QWORD *)(v4 + 16); i; i = *(_QWORD *)(i + 32) )
    {
      v8 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
      InitTooltipDelay(v8);
    }
  }
  return 1LL;
}
