/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AAEHPAU_FD_XFORM@@KKPAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209428
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285 (-bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

int __thiscall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *Buf1,
        unsigned int a3,
        unsigned int a4,
        struct EXFORMOBJ *a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  int v11; // esi
  int v12; // edi
  unsigned int v13; // edx
  int v14; // eax

  v11 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 80) != a6 )
    return 0;
  if ( a10 != (*(_DWORD *)(v11 + 56) & 6) )
    return 0;
  v12 = *(_DWORD *)(v11 + 12);
  a6 = a3 ^ v12;
  if ( ((a3 ^ v12) & 0xE000) != 0 )
    return 0;
  v13 = (a3 ^ v12) & 0x50010000;
  if ( v13 )
  {
    if ( (v12 & 0x20000) != 0 && (a3 & 0x10000) != 0 )
      v13 = a6 & 0x50000000;
    if ( ((_bittest((const signed __int32 *)&a3, 0x1Cu) & ((v12 & 0x12000000) == 0x2000000)) == 0 ? v13 : 0) != 0 )
      return 0;
  }
  if ( *(_DWORD *)(v11 + 32) == a4
    && !memcmp(Buf1, (const void *)(v11 + 88), 0x10u)
    && a7 == *(_DWORD *)(v11 + 656)
    && (!a5 || EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v11 + 124)))
    && *(_DWORD *)(*(_DWORD *)this + 184) == a8
    && ((v14 = 0, a9) ? (v14 = 1) : (LOBYTE(v14) = *(_DWORD *)(*(_DWORD *)this + 640) == 0), v14) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
