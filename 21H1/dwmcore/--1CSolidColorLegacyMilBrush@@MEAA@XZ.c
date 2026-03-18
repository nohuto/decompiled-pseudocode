/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800B62E4
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800B62A0 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800B6B00 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(CSolidColorLegacyMilBrush *this)
{
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
