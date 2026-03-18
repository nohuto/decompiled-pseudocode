/*
 * XREFs of ExpGetHandleExtraInfo @ 0x140883EDC
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1406A6990 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1407A2BDC (ExpFreeHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1409851A4 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
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
