/*
 * XREFs of MiSessionReferenceImage @ 0x1403A7AC4
 * Callers:
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
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
