/*
 * XREFs of ExpGetHandleExtraInfo @ 0x140948200
 * Callers:
 *     ExpFreeHandleTableEntry @ 0x1405F1ADC (ExpFreeHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpDuplicateSingleHandle @ 0x1406714B0 (ExpDuplicateSingleHandle.c)
 *     ObpAuditObjectAccess @ 0x1408D8154 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
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
