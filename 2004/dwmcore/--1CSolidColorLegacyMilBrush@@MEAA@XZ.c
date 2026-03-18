/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800C7A14
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800C79D0 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800C7BC0 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(CSolidColorLegacyMilBrush *this)
{
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
