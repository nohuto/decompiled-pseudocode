/*
 * XREFs of _GreSfmRegisterLogicalSurfaceForSignaling@8 @ 0xAB694
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QAEJH@Z @ 0xAB73A (-SignalOnDirty@SFMLOGICALSURFACE@@QAEJH@Z.c)
 */

int __fastcall GreSfmRegisterLogicalSurfaceForSignaling(int a1, int a2)
{
  int v4; // edx
  SFMLOGICALSURFACE *v5; // eax
  int v6; // esi
  int v8[2]; // [esp+10h] [ebp-8h] BYREF

  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( UserIsCurrentProcessDwm() )
  {
    v8[0] = 0;
    v8[1] = 0;
    if ( a1 && (LOBYTE(v4) = 18, v5 = (SFMLOGICALSURFACE *)HmgLock(a1, v4), (v8[0] = (int)v5) != 0) )
      v6 = SFMLOGICALSURFACE::SignalOnDirty(v5, a2);
    else
      v6 = -1073741816;
    SFMLOGICALSURFACEREF_vDestructor(v8);
  }
  else
  {
    v6 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  return v6;
}
