/*
 * XREFs of MiSessionReferenceImage @ 0x1403A4CB4
 * Callers:
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
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
