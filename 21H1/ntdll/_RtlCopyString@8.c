/*
 * XREFs of _RtlCopyString@8 @ 0x4B2ABAB0
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void **__stdcall RtlCopyString(void **a1, const void **a2)
{
  void **result; // eax
  size_t v3; // ecx

  result = a1;
  *(_WORD *)a1 = 0;
  if ( a2 )
  {
    v3 = *(unsigned __int16 *)a2;
    if ( v3 > *((unsigned __int16 *)a1 + 1) )
      v3 = *((unsigned __int16 *)a1 + 1);
    *(_WORD *)a1 = v3;
    return (void **)memcpy(a1[1], a2[1], v3);
  }
  return result;
}
