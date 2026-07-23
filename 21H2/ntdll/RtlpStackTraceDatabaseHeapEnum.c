/*
 * XREFs of RtlpStackTraceDatabaseHeapEnum @ 0x180101600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackTraceDatabaseHeapEnum(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  if ( a1[4] != -571548178 )
  {
    v2 = a2[1];
    if ( *a2 )
    {
      a1[28] |= v2;
      a1[29] |= a2[2];
    }
    else
    {
      a1[28] &= ~v2;
      a1[29] &= ~a2[2];
    }
  }
  return 0LL;
}
