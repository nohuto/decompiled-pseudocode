/*
 * XREFs of ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z @ 0x1F6E6B
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(int **this, int a2)
{
  int *v3; // eax
  DHSURF v4; // eax
  HSEMAPHORE v5; // [esp-4h] [ebp-4h]

  v3 = (int *)**this;
  this[1] = v3;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3[5] + 412));
  v4 = (DHSURF)this[1];
  if ( !*((_DWORD *)v4 + 3) )
  {
    EngModifySurface(
      (HSURF)(*this)[1],
      *(HDEV *)(*((_DWORD *)v4 + 5) + 44),
      0,
      0,
      v4,
      *((PVOID *)v4 + 1),
      *((_DWORD *)v4 + 2),
      0);
    v4 = (DHSURF)this[1];
  }
  ++*((_DWORD *)v4 + 3);
  EngReleaseSemaphore(*(HSEMAPHORE *)(this[1][5] + 412));
  v5 = (HSEMAPHORE)this[1][4];
  if ( a2 )
    EngAcquireSemaphoreShared(v5);
  else
    EngAcquireSemaphore(v5);
}
