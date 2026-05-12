/*
 * XREFs of StorpReleaseMSISpinLock @ 0x1C003C1C0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 */

__int64 __fastcall StorpReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v4 = **(_QWORD **)(a1 - 16);
    if ( !*(_BYTE *)(v4 + 4513) )
      return (unsigned int)-1056964601;
    v5 = *(_QWORD *)(v4 + 4496);
    if ( a2 < *(_DWORD *)(v5 + 4) )
    {
      KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * a2 + 24), a3);
      return v3;
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x38u,
      (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
  }
  return (unsigned int)-1056964602;
}
