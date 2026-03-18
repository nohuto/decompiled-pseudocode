/*
 * XREFs of EditionConvertPseudoToUserWindow @ 0x1C011ECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionConvertPseudoToUserWindow(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  *a2 = 0LL;
  v4 = -1073741811;
  v5 = ValidateHwnd(a1);
  if ( v5 && *(_QWORD *)(v5 + 16) == gptiCurrent )
  {
    *a2 = a1;
    return 0;
  }
  return v4;
}
