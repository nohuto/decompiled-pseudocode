/*
 * XREFs of _xxxClearWakeMask@0 @ 0x14226B
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 */

int __stdcall xxxClearWakeMask()
{
  int v0; // ebx
  _DWORD *v1; // esi
  __int32 v2; // ecx
  int v3; // edi
  unsigned int v4; // edx

  v0 = MEMORY[0xFFDF0004];
  v1 = (_DWORD *)_gptiCurrent;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v3 = MEMORY[0xFFDF0324];
    v4 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v3 = MEMORY[0xFFDF0324];
        v4 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v1 = (_DWORD *)_gptiCurrent;
      v0 = MEMORY[0xFFDF0004];
    }
    v2 = v0 * (v3 << 8) + (((unsigned int)v0 * (unsigned __int64)v4) >> 24);
  }
  else
  {
    v2 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  _InterlockedExchange((volatile __int32 *)(v1[61] + 12), v2);
  if ( !v1[165] )
    xxxUpdateInputHangInfo(0, 1);
  *(_WORD *)(v1[61] + 10) = 0;
  v1[172] &= ~0x400u;
  return 1;
}
