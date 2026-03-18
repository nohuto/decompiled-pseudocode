/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1800CCA88
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18009C78C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, int a3)
{
  char v3; // r9
  char v4; // al
  char v5; // r9
  char v6; // al
  char v7; // r9
  char v8; // al
  char result; // al
  char v10; // r8
  char v11; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( a1[148] >> 7 != a2 )
    {
      v3 = a1[148] & 0x7E;
      v4 = a2 << 7;
LABEL_5:
      a1[148] = v4 | v3 | 1;
    }
  }
  else if ( ((a1[148] & 0x40) != 0) != a2 )
  {
    v3 = a1[148] & 0xBF;
    v4 = a2 << 6;
    goto LABEL_5;
  }
  if ( a3 )
  {
    if ( a1[308] >> 7 == a2 )
      goto LABEL_10;
    v5 = a1[308] & 0x7E;
    v6 = a2 << 7;
    goto LABEL_9;
  }
  if ( ((a1[308] & 0x40) != 0) != a2 )
  {
    v5 = a1[308] & 0xBF;
    v6 = a2 << 6;
LABEL_9:
    a1[308] = v6 | v5 | 1;
  }
LABEL_10:
  if ( a3 )
  {
    if ( a1[468] >> 7 == a2 )
      goto LABEL_14;
    v7 = a1[468] & 0x7E;
    v8 = a2 << 7;
    goto LABEL_13;
  }
  if ( ((a1[468] & 0x40) != 0) != a2 )
  {
    v7 = a1[468] & 0xBF;
    v8 = a2 << 6;
LABEL_13:
    a1[468] = v8 | v7 | 1;
  }
LABEL_14:
  if ( a3 )
  {
    result = a1[628] >> 7;
    if ( result == a2 )
      return result;
    v10 = a1[628] & 0x7E;
    v11 = a2 << 7;
    goto LABEL_17;
  }
  result = (a1[628] & 0x40) != 0;
  if ( result != a2 )
  {
    v10 = a1[628] & 0xBF;
    v11 = a2 << 6;
LABEL_17:
    a1[628] = v11 | v10 | 1;
  }
  return result;
}
