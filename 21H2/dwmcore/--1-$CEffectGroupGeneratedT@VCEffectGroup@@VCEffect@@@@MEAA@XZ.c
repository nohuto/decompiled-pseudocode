/*
 * XREFs of ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800E7E74
 * Callers:
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800E7E30 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
