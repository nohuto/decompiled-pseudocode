/*
 * XREFs of _RtlGetControlSecurityDescriptor@12 @ 0x4B2EBD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return -1073741736;
  *a2 = *((_WORD *)a1 + 1);
  return 0;
}
