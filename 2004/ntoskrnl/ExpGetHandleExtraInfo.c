/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1409495A0
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1405D0990 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x14069AFEC (ExpFreeHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1408D94C4 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
