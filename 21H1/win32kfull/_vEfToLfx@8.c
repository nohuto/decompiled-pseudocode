/*
 * XREFs of _vEfToLfx@8 @ 0xEF2B4
 * Callers:
 *     ??4EPOINTQF@@QAEXAAVEPOINTFL@@@Z @ 0x223A5A (--4EPOINTQF@@QAEXAAVEPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __stdcall vEfToLfx(int *a1, __int64 *a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = a1[1];
  result = *a1;
  if ( !v2 )
    goto LABEL_4;
  if ( v2 >= 0 )
  {
    result <<= v2 & 0x1F;
LABEL_4:
    *a2 = result;
    return result;
  }
  result >>= -(char)v2 & 0x1F;
  *a2 = result;
  return result;
}
