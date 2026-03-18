/*
 * XREFs of MiReleaseFaultSynchronization @ 0x1405433A4
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x1405428D0 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int64 result; // rax
  _QWORD v4[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) == 0 )
    return MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  memset(v4, 0, 0x80uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)&v4[3] = *(_OWORD *)(a1 + 56);
  v4[5] = v2;
  result = MiUnlockSystemVa((__int64)v4);
  *(_DWORD *)(a1 + 80) &= ~0x10u;
  return result;
}
