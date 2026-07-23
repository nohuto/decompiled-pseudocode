/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x14036C058
 * Callers:
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpQuitNextActiveHive @ 0x14072A81C (CmpQuitNextActiveHive.c)
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
