/*
 * XREFs of ?IsCompressedFormat@CAudioMediaType@@UEAAJPEAH@Z @ 0x180047E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::IsCompressedFormat(CAudioMediaType *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_DWORD *)this + 3);
  return result;
}
