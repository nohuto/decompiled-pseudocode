/*
 * XREFs of _IsPseudoPwnd@4 @ 0x2A852
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _NtUserSetWindowBand@12 @ 0x9BCD0 (_NtUserSetWindowBand@12.c)
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 *     ?_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z @ 0x15F954 (-_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z.c)
 *     _NtUserfnOUTCBOXSTRING@28 @ 0x16CD37 (_NtUserfnOUTCBOXSTRING@28.c)
 *     _NtUserfnOUTLBOXSTRING@28 @ 0x16CEF6 (_NtUserfnOUTLBOXSTRING@28.c)
 * Callees:
 *     <none>
 */

int __thiscall IsPseudoPwnd(void *this)
{
  int result; // eax

  result = 0;
  if ( this == (void *)-2 || this == (void *)-1 || !this || this == (void *)1 )
    return 1;
  return result;
}
