/*
 * XREFs of MiSessionReferenceImage @ 0x1403A70B4
 * Callers:
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
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
