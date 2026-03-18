/*
 * XREFs of _SetWindowState@8 @ 0x1A01E8
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?ValidateState@@YGHK@Z @ 0x1A0184 (-ValidateState@@YGHK@Z.c)
 */

int __stdcall SetWindowState(int a1, __int16 a2)
{
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) == *(_DWORD *)(_gptiCurrent + 232) && ValidateState(a2) )
    SetOrClrWF(1, a1, a2, 1);
  return 1;
}
