/*
 * XREFs of _RtlSetInformationAcl@16 @ 0x4B34B810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlSetInformationAcl(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return -1073741811;
  if ( a4 != 1 )
    return -1073741821;
  if ( a3 < 4 )
    return -1073741789;
  if ( *a2 < (unsigned int)(unsigned __int8)*a1 )
    return -1073741811;
  *a1 = *(_BYTE *)a2;
  return 0;
}
