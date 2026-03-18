/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z @ 0x86BE2
 * Callers:
 *     ?ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z @ 0x86B04 (-ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z.c)
 *     ?pjTable@RFONTOBJ@@QAEPAEKPAK@Z @ 0x20988E (-pjTable@RFONTOBJ@@QAEPAEKPAK@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QAEHXZ @ 0x87B4A (-bCheckFntFileInfo@PFFOBJ@@QAEHXZ.c)
 */

int __thiscall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  int v10; // ebx
  int (__stdcall *v11)(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // esi
  _BYTE v13[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !PFFOBJ::bCheckFntFileInfo(this) )
    return -1;
  v10 = -1;
  v11 = *(int (__stdcall **)(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_DWORD *)(*(_DWORD *)this + 60) + 2092);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v13, this);
  if ( a7 )
    *a7 = 0;
  if ( v11 )
    v10 = v11(a2, a3, a4, a5, a6, a7, a8, a9);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v13);
  return v10;
}
