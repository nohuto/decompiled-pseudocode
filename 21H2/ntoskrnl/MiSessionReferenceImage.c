/*
 * XREFs of MiSessionReferenceImage @ 0x1402DC164
 * Callers:
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
