/*
 * XREFs of _RtlDispatchAPC@12 @ 0x4B2ABFD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDispatchAPC@12 @ 0x4B2ABFD0 (_RtlDispatchAPC@12.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlDispatchAPC(int (__thiscall *a1)(_DWORD, int), int a2, int a3)
{
  _DWORD v4[9]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v4[0] = 36;
  v4[1] = 1;
  memset(&v4[2], 0, 0x1Cu);
  if ( LdrDelegatedRtlDispatchAPC )
    return LdrDelegatedRtlDispatchAPC(LdrDelegatedRtlDispatchAPC, a1, a2, a3);
  if ( a3 == -1 )
    return a1(a1, a2);
  RtlActivateActivationContextUnsafeFast(v4, a3);
  ms_exc.registration.TryLevel = 0;
  a1(a1, a2);
  ms_exc.registration.TryLevel = -2;
  RtlDeactivateActivationContextUnsafeFast(v4, 1261490901);
  return RtlReleaseActivationContext(a3);
}
