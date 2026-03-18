/*
 * XREFs of _vRestorePathWrap@8 @ 0x9E50E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct HPATH__ *__stdcall vRestorePathWrap(struct HPATH__ *a1, int a2)
{
  struct HPATH__ *result; // eax
  DC *v3; // ecx

  result = a1;
  v3 = *(DC **)a1;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 136) )
  {
    result = (struct HPATH__ *)*((_DWORD *)v3 + 43);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
      *((_DWORD *)v3 + 43) = (unsigned int)result & 0xFFFFFFFE;
      return DC::hpath(v3, 0);
    }
  }
  return result;
}
