/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C005142C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C0152970 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     FreeObject @ 0x1C008BB90 (FreeObject.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax

  v1 = 0;
  if ( a1 != (struct HOBJ__ *)ghStockColorSpace )
  {
    v3 = HmgRemoveObjectImpl(a1, 0, 0, 1u, 9, 0LL);
    if ( !v3 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject(v3, 9LL);
  }
  return 1;
}
