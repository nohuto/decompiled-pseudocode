/*
 * XREFs of ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0019E70
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C009B480 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0019F04 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMap(SURFREFVIEW *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = 0;
  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    if ( gbTouchOnUnmap )
    {
      v6 = *(unsigned int *)(v3 + 64);
      if ( (_DWORD)v6 )
      {
        v7 = *(_QWORD *)(v3 + 72);
        if ( v7 )
        {
          v8 = v7 + v6;
          while ( v7 < v8 )
            v7 += 4096LL;
        }
      }
    }
    v4 = *(_QWORD *)this;
    v2 = 1;
    if ( (*(_QWORD *)(*(_QWORD *)this + 248LL) || (*(_DWORD *)(v4 + 116) & 1) != 0)
      && (*(_WORD *)(v4 + 102) & 0x800) != 0 )
    {
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 312) + 64LL), 0);
      W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(v4 + 272));
    }
  }
  *(_QWORD *)this = 0LL;
  return v2;
}
