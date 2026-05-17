/*
 * XREFs of _NormalizationList__Lookup@4 @ 0x4B375A65
 * Callers:
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 * Callees:
 *     <none>
 */

void **__thiscall NormalizationList__Lookup(void *this)
{
  void **v1; // eax
  int v2; // edx

  v1 = (void **)NormalizationListHead;
  v2 = 0;
  while ( v1 != (void **)&NormalizationListHead )
  {
    if ( v1[2] == this )
      return v1 + 3;
    v1 = (void **)*v1;
  }
  return (void **)v2;
}
