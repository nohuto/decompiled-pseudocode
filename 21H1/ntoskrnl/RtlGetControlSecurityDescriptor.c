/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x14068ED70
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcesRemoved @ 0x14068E0FC (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
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
