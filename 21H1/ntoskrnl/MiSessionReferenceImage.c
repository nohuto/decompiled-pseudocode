/*
 * XREFs of MiSessionReferenceImage @ 0x1403A4534
 * Callers:
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14031F488 (MiSessionLookupImage.c)
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
