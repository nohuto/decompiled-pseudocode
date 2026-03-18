/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 * Callees:
 *     CmpQuitNextActiveHive @ 0x14065C900 (CmpQuitNextActiveHive.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpLockKcbStackFlusherLocksExclusive(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = CmpGetNextActiveHive(0LL); ; result = CmpGetNextActiveHive(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    v5 = *(unsigned __int16 *)(a1 + 2);
    if ( (v5 & 0x8000u) == 0LL )
    {
      while ( *(_QWORD *)(CmpGetKcbAtLayerHeight(a1, v5) + 32) != v4 )
      {
        LOWORD(v5) = v5 - 1;
        if ( (v5 & 0x8000u) != 0LL )
          goto LABEL_6;
      }
      HvLockHiveFlusherExclusive();
      --v2;
    }
LABEL_6:
    if ( !v2 )
      return CmpQuitNextActiveHive(v4);
  }
  return result;
}
