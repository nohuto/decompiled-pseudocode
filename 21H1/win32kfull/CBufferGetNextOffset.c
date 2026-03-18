/*
 * XREFs of CBufferGetNextOffset @ 0x1B65C0
 * Callers:
 *     CreateNewEventEntry @ 0x1B66D4 (CreateNewEventEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall CBufferGetNextOffset(int *a1, unsigned int a2)
{
  unsigned int v2; // edi
  int result; // eax

  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v2 = a1[1];
  if ( v2 < a2 )
    return 0;
  result = *a1;
  a1[1] = v2 - a2;
  *a1 = result + a2;
  return result;
}
