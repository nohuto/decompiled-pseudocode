/*
 * XREFs of DefaultSetInterval @ 0x1404B9880
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerSetTimerBackedProfileInterval @ 0x1404BCAC4 (HalpTimerSetTimerBackedProfileInterval.c)
 */

__int64 __fastcall DefaultSetInterval(int a1, int *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  if ( a1 )
    return 3221225659LL;
  v4 = (unsigned __int8)byte_140C0547C;
  v5 = *a2;
  v6 = HIDWORD(DefaultProfileIntervalLimits[(unsigned __int8)byte_140C0547C]);
  if ( *a2 < v6 )
  {
    *a2 = v6;
    v5 = v6;
  }
  v7 = DefaultProfileIntervalLimits[v4];
  if ( v5 > v7 )
  {
    *a2 = v7;
    v5 = v7;
  }
  v8 = HalpTimerSetTimerBackedProfileInterval(v5);
  *a2 = v8;
  dword_140C05478 = v8;
  return 0LL;
}
