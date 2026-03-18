/*
 * XREFs of ??1?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ @ 0x18019DA74
 * Callers:
 *     ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x18019EBF0 (--_ECCompositionGlyphRun@@MEAAPEAXI@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x18021018C (--1CCompositionTextLine@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::~CResource((CResource *)this);
}
