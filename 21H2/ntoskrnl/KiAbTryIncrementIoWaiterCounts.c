/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x1402FD488
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038FBD4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2)
{
  _BYTE *v4; // r11
  unsigned __int8 v5; // cl
  unsigned int v7; // r10d
  unsigned __int8 *v8; // r8
  int IoPriorityThread; // eax

  if ( (a1[25] & 1) == 0 )
    return 0LL;
  v4 = a1 + 27;
  v5 = a1[27];
  if ( (v5 & 6) == 6 )
    return 0LL;
  v7 = 0;
  v8 = &a1[-16 * a1[24]];
  if ( (v5 & 2) == 0 )
  {
    IoPriorityThread = PsGetIoPriorityThread((__int64)v8);
    if ( IoPriorityThread >= 2 )
      goto LABEL_6;
    if ( *((_DWORD *)v8 + 340) != v7 )
      IoPriorityThread = 2;
    if ( IoPriorityThread >= 2 )
    {
LABEL_6:
      *(_WORD *)(a2 + 90) ^= (*(_WORD *)(a2 + 90) ^ (*(_WORD *)(a2 + 90) + 2)) & 0x1FE;
      *v4 |= 2u;
      if ( (*(_WORD *)(a2 + 90) & 0x1FE) == 2 )
        v7 = 1;
    }
  }
  if ( (*v4 & 4) == 0 && (!*((_DWORD *)v8 + 342) || *((_DWORD *)v8 + 341)) )
  {
    *(_WORD *)(a2 + 90) += 512;
    *v4 |= 4u;
    if ( (*(_WORD *)(a2 + 90) & 0xFE00) == 0x200 )
      v7 |= 2u;
  }
  return v7;
}
