/*
 * XREFs of ?vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F751F
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(MULTIPANSURFLOCK *this)
{
  DHSURF v2; // eax

  if ( *((_DWORD *)this + 2) )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_DWORD *)this + 3) + 16));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 20) + 412));
    --*(_DWORD *)(*((_DWORD *)this + 3) + 12);
    v2 = (DHSURF)*((_DWORD *)this + 3);
    if ( !*((_DWORD *)v2 + 3) )
    {
      EngModifySurface(
        *(HSURF *)(*((_DWORD *)this + 2) + 4),
        *(HDEV *)(*((_DWORD *)v2 + 5) + 44),
        (FLONG)&loc_394AB,
        3u,
        v2,
        0,
        0,
        0);
      v2 = (DHSURF)*((_DWORD *)this + 3);
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_DWORD *)v2 + 5) + 412));
    *((_DWORD *)this + 2) = 0;
  }
}
