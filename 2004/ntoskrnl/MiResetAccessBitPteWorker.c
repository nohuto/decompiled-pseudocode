/*
 * XREFs of MiResetAccessBitPteWorker @ 0x1405365B0
 * Callers:
 *     MiResetAccessBitsEPTCallback @ 0x1405366B0 (MiResetAccessBitsEPTCallback.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402471D0 (MiGetVaAge.c)
 *     MiFlushTbListEarly @ 0x14027C660 (MiFlushTbListEarly.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 */

void __fastcall MiResetAccessBitPteWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int VaAge; // r10d
  int v11; // ebp
  __int64 v12; // rbx

  VaAge = (unsigned __int8)MiGetVaAge(a1, a3);
  if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(a4) < dword_140C4E62C )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( (unsigned int)(VaAge - 1) <= 5 )
      MiSetVaAgeList(a1, a3, 1u, 0);
  }
  v12 = 0LL;
  if ( (a6 & 4) == 0 )
    v12 = *(_QWORD *)(a5 + 8);
  if ( (unsigned int)MiClearPteAccessed(a1, a4, a2, v12, *(_DWORD *)a5, (a6 & 4) != 0) )
  {
    if ( v11 == 1 && (a6 & 4) == 0 && *(_DWORD *)a5 )
    {
      if ( v12 )
      {
LABEL_15:
        MiFlushTbListEarly(v12, 0LL);
        return;
      }
      MiLogPageAccess(a1, a2);
    }
    if ( !v12 )
      return;
    goto LABEL_15;
  }
}
