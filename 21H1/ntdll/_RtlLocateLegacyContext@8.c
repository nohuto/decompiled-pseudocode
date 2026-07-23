/*
 * XREFs of _RtlLocateLegacyContext@8 @ 0x4B35BC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCONTEXT __cdecl RtlLocateLegacyContext(PCONTEXT_EX ContextEx, PULONG Length)
{
  LONG Offset; // esi
  ULONG v3; // edi

  Offset = ContextEx->Legacy.Offset;
  if ( ContextEx->All.Offset > Offset )
    return 0;
  v3 = ContextEx->Legacy.Length;
  if ( (signed __int32)(ContextEx->All.Offset + ContextEx->All.Length) < (int)(v3 + Offset) )
    return 0;
  if ( Length )
  {
    *Length = v3;
    Offset = ContextEx->Legacy.Offset;
  }
  return (PCONTEXT)((char *)ContextEx + Offset);
}
