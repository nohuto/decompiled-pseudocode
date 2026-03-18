/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x1403691DC
 * Callers:
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpQuitNextActiveHive @ 0x1407164D0 (CmpQuitNextActiveHive.c)
 */

__int64 __fastcall CmpLockKcbStackFlusherLocksExclusive(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // rbx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = CmpGetNextActiveHive(0LL); ; result = CmpGetNextActiveHive(v6) )
  {
    v6 = result;
    if ( !result )
      break;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(CmpGetKcbAtLayerHeight(a1) + 32);
        if ( v5 == v6 )
          break;
        if ( (__int16)(v4 - 1) < 0 )
          goto LABEL_5;
      }
      HvLockHiveFlusherExclusive(v5);
      --v2;
    }
LABEL_5:
    if ( !v2 )
      return CmpQuitNextActiveHive(v6);
  }
  return result;
}
