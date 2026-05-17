/*
 * XREFs of _RtlEnumerateGenericTableAvl@8 @ 0x4B2AB820
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEnumerateGenericTableWithoutSplayingAvl@8 @ 0x4B2AB850 (_RtlEnumerateGenericTableWithoutSplayingAvl@8.c)
 */

int __stdcall RtlEnumerateGenericTableAvl(int a1, char a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)(a1 + 32);
  if ( a2 )
    *v2 = 0;
  return RtlEnumerateGenericTableWithoutSplayingAvl(a1, v2);
}
