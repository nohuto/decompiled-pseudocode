/*
 * XREFs of _RtlpStackTraceDatabaseHeapEnum@8 @ 0x4B369200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlpStackTraceDatabaseHeapEnum(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  if ( a1[2] != -571548178 )
  {
    v2 = a2[1];
    if ( *a2 )
    {
      a1[16] |= v2;
      a1[17] |= a2[2];
    }
    else
    {
      a1[16] &= ~v2;
      a1[17] &= ~a2[2];
    }
  }
  return 0;
}
