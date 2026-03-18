/*
 * XREFs of ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@MEAA@XZ @ 0x1801F2FA0
 * Callers:
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801F2FEC (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::~CResource((CResource *)this);
}
