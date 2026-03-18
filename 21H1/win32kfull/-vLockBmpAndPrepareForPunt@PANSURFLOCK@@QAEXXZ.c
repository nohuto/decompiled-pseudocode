/*
 * XREFs of ?vLockBmpAndPrepareForPunt@PANSURFLOCK@@QAEXXZ @ 0x1F6F63
 * Callers:
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PANSURFLOCK::vLockBmpAndPrepareForPunt(int **this)
{
  int *v2; // eax
  DHSURF v3; // eax

  v2 = (int *)**this;
  this[1] = v2;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2[5] + 412));
  v3 = (DHSURF)this[1];
  if ( !*((_DWORD *)v3 + 3) )
  {
    EngModifySurface(
      (HSURF)(*this)[1],
      *(HDEV *)(*((_DWORD *)v3 + 5) + 44),
      0,
      0,
      v3,
      *((PVOID *)v3 + 1),
      *((_DWORD *)v3 + 2),
      0);
    v3 = (DHSURF)this[1];
  }
  ++*((_DWORD *)v3 + 3);
  EngReleaseSemaphore(*(HSEMAPHORE *)(this[1][5] + 412));
  EngAcquireSemaphore((HSEMAPHORE)this[1][4]);
}
