/*
 * XREFs of rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00A2C98
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00A2D3C (rimIsExplicitRimUsagesMatchingUsages.c)
 */

__int64 __fastcall rimAnyExplicitRimUsagesMatchingUsages(unsigned __int16 a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v5; // rcx
  unsigned int v6; // ebx

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  while ( Flink != &gObRimList )
  {
    v5 = Flink - 1;
    Flink = Flink->Flink;
    if ( !BYTE1(v5[5].Flink) && !LOBYTE(v5[5].Flink) && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v5, a1, a2) )
    {
      v6 = 1;
      goto LABEL_8;
    }
  }
  v6 = 0;
LABEL_8:
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
