/*
 * XREFs of ?AddUFIToBuffer@RFONTOBJ@@AAEXPAVPFE@@AAPAU_UNIVERSAL_FONT_ID@@AAHH@Z @ 0x206D67
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0x207544 (-GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QBEHAAVIFIOBJ@@@Z @ 0x207859 (-bCheckEudcFontCaps@RFONTOBJ@@QBEHAAVIFIOBJ@@@Z.c)
 */

void __thiscall RFONTOBJ::AddUFIToBuffer(
        RFONTOBJ *this,
        struct PFE *a2,
        struct _UNIVERSAL_FONT_ID **a3,
        int *a4,
        int a5)
{
  int v5; // ebx
  _DWORD *v6; // ecx
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a2 )
  {
    v7[0] = *((_DWORD *)a2 + 5);
    if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v7) )
    {
      v5 = *a4;
      if ( *a4 < a5 )
      {
        v6 = *a3;
        *v6 = *((_DWORD *)a2 + 13);
        v6[1] = *((_DWORD *)a2 + 14);
        *a3 = (struct _UNIVERSAL_FONT_ID *)((char *)*a3 + 8);
      }
      *a4 = v5 + 1;
    }
  }
}
