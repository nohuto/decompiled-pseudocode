/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14094CD00
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1405E27D0 (ObpReferenceProcessObjectByHandle.c)
 *     ExpFreeHandleTableEntry @ 0x140683A3C (ExpFreeHandleTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x140696010 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1408DCC24 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
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
