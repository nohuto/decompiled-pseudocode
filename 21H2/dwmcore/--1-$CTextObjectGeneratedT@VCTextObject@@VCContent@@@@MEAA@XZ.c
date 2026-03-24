/*
 * XREFs of ??1?$CTextObjectGeneratedT@VCTextObject@@VCContent@@@@MEAA@XZ @ 0x18016BB40
 * Callers:
 *     ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x18016CE60 (--_ECCompositionGlyphRun@@MEAAPEAXI@Z.c)
 *     ??_ECTextObject@@UEAAPEAXI@Z @ 0x18016E000 (--_ECTextObject@@UEAAPEAXI@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x1801BCD1C (--1CCompositionTextLine@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CTextObjectGeneratedT<CTextObject,CContent>::~CTextObjectGeneratedT<CTextObject,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::~CResource((CResource *)this);
}
