/*
 * XREFs of ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z @ 0x1F6EE6
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(MULTIPANSURFLOCK *this, int a2)
{
  int v3; // eax
  DHSURF v4; // eax
  HSEMAPHORE v5; // [esp-4h] [ebp-4h]

  v3 = **((_DWORD **)this + 2);
  *((_DWORD *)this + 3) = v3;
  EngAcquireSemaphore(*(HSEMAPHORE *)(*(_DWORD *)(v3 + 20) + 412));
  v4 = (DHSURF)*((_DWORD *)this + 3);
  if ( !*((_DWORD *)v4 + 3) )
  {
    EngModifySurface(
      *(HSURF *)(*((_DWORD *)this + 2) + 4),
      *(HDEV *)(*((_DWORD *)v4 + 5) + 44),
      0,
      0,
      v4,
      *((PVOID *)v4 + 1),
      *((_DWORD *)v4 + 2),
      0);
    v4 = (DHSURF)*((_DWORD *)this + 3);
  }
  ++*((_DWORD *)v4 + 3);
  EngReleaseSemaphore(*(HSEMAPHORE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 20) + 412));
  v5 = *(HSEMAPHORE *)(*((_DWORD *)this + 3) + 16);
  if ( a2 )
    EngAcquireSemaphoreShared(v5);
  else
    EngAcquireSemaphore(v5);
}
