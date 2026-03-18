/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14094F360
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x14066735C (ExpFreeHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     ExpDuplicateSingleHandle @ 0x1406F5460 (ExpDuplicateSingleHandle.c)
 *     ObpAuditObjectAccess @ 0x1408DF304 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
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
