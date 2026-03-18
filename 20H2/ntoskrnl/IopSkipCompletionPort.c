/*
 * XREFs of IopSkipCompletionPort @ 0x140328304
 * Callers:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSkipCompletionPort(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = *(_DWORD *)(a1 + 80);
  v3 = 0;
  if ( (v2 & 0x2000000) != 0 && !*(_BYTE *)(a2 + 65) )
    return (*(_DWORD *)(a2 + 48) & 0xC0000000) != 0x80000000;
  return v3;
}
