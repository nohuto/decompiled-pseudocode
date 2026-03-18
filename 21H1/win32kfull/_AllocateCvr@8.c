/*
 * XREFs of _AllocateCvr@8 @ 0x9BF80
 * Callers:
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 * Callees:
 *     <none>
 */

int __stdcall AllocateCvr(_DWORD *a1, int a2)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-10h]

  if ( a2 <= 0 || (unsigned int)a2 > 0xFFFFFF )
    return 0;
  v4 = a2 << 7;
  v2 = a1 == (_DWORD *)_gSMWP[0] ? Win32AllocPool(v4, 2004054869) : Win32AllocPoolWithQuota(v4, 2004054869);
  if ( !v2 )
    return 0;
  a1[3] &= ~4u;
  a1[4] = 0;
  a1[6] = v2;
  a1[5] = a2;
  return 1;
}
