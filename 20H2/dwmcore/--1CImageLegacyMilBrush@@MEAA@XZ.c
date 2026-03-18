/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800C74E4
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800C74A0 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800C7740 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(CImageLegacyMilBrush *this)
{
  *(_QWORD *)this = &CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
