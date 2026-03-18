/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0092740
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C014A140 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     FreeObject @ 0x1C003C6B0 (FreeObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( a1 != (struct HOBJ__ *)ghStockColorSpace )
  {
    v3 = HmgRemoveObjectImpl(a1, 0, 0, 1, 9, 0LL);
    if ( !v3 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject(v3, 9);
  }
  return 1;
}
