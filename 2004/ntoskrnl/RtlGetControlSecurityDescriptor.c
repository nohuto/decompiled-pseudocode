/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x14063EC50
 * Callers:
 *     SepHasCriticalAcesRemoved @ 0x14063C470 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return 3221225560LL;
  *a2 = *((_WORD *)a1 + 1);
  return 0LL;
}
