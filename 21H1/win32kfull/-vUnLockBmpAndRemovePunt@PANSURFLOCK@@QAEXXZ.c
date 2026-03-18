/*
 * XREFs of ?vUnLockBmpAndRemovePunt@PANSURFLOCK@@QAEXXZ @ 0x1F74B4
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 * Callees:
 *     <none>
 */

void __thiscall PANSURFLOCK::vUnLockBmpAndRemovePunt(PANSURFLOCK *this)
{
  DHSURF v2; // eax

  if ( *(_DWORD *)this )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_DWORD *)this + 1) + 16));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 20) + 412));
    --*(_DWORD *)(*((_DWORD *)this + 1) + 12);
    v2 = (DHSURF)*((_DWORD *)this + 1);
    if ( !*((_DWORD *)v2 + 3) )
    {
      EngModifySurface(
        *(HSURF *)(*(_DWORD *)this + 4),
        *(HDEV *)(*((_DWORD *)v2 + 5) + 44),
        (FLONG)&loc_394AB,
        3u,
        v2,
        0,
        0,
        0);
      v2 = (DHSURF)*((_DWORD *)this + 1);
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_DWORD *)v2 + 5) + 412));
    *(_DWORD *)this = 0;
  }
}
