/*
 * XREFs of @LdrpFindTlsEntry@4 @ 0x4B2A7D3A
 * Callers:
 *     _LdrpReleaseTlsEntry@8 @ 0x4B2A7CB1 (_LdrpReleaseTlsEntry@8.c)
 * Callees:
 *     <none>
 */

void **__thiscall LdrpFindTlsEntry(void *this)
{
  void **result; // eax

  for ( result = (void **)LdrpTlsList; result != (void **)&LdrpTlsList; result = (void **)*result )
  {
    if ( result[8] == this )
      return result;
  }
  return 0;
}
