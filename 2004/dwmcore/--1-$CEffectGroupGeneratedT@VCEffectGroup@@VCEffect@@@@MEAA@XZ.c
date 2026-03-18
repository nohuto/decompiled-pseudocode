/*
 * XREFs of ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800CCA54
 * Callers:
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800CCA10 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
