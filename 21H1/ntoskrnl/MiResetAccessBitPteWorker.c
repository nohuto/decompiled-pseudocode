/*
 * XREFs of MiResetAccessBitPteWorker @ 0x140535F60
 * Callers:
 *     MiResetAccessBitsEPTCallback @ 0x140536060 (MiResetAccessBitsEPTCallback.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140203350 (MiFlushTbListEarly.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402A0200 (MiGetVaAge.c)
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
  if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(a4) < dword_140C4E76C )
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
        MiFlushTbListEarly(v12, 0);
        return;
      }
      MiLogPageAccess(a1, a2);
    }
    if ( !v12 )
      return;
    goto LABEL_15;
  }
}
