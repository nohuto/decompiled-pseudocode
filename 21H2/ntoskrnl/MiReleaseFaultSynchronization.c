/*
 * XREFs of MiReleaseFaultSynchronization @ 0x140548EC4
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x1405483F0 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  _QWORD v3[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    memset(v3, 0, 0x80uLL);
    v2 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)&v3[3] = *(_OWORD *)(a1 + 56);
    v3[5] = v2;
    MiUnlockSystemVa((__int64)v3);
    *(_DWORD *)(a1 + 80) &= ~0x10u;
  }
  else
  {
    MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  }
}
