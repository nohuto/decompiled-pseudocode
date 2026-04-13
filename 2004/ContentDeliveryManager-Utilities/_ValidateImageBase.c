/*
 * XREFs of _ValidateImageBase @ 0x1800CDF60
 * Callers:
 *     _IsNonwritableInCurrentImage @ 0x1800CDF00 (_IsNonwritableInCurrentImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateImageBase(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( *(_WORD *)a1 == 23117 )
  {
    v1 = a1 + *(int *)(a1 + 60);
    if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 )
      return 1;
  }
  return result;
}
