/*
 * XREFs of FindDirectoryEntry @ 0x18006C0B4
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BE30 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18006C074 (ValidatePointer.c)
 */

int *__fastcall FindDirectoryEntry(unsigned __int64 *a1, int *a2, int a3, __int64 a4)
{
  __int64 v6; // r8
  int v8; // r10d
  unsigned int v9; // r11d

  if ( !a3 )
    return 0LL;
  v6 = 2LL;
  while ( *a2 < 0 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( !ValidatePointer(a1, (unsigned __int64)&a2[v6], v6 * 4) || v8 + 1 >= v9 )
      return 0LL;
  }
  if ( a2[1] < 0 )
    return a2;
  else
    return 0LL;
}
