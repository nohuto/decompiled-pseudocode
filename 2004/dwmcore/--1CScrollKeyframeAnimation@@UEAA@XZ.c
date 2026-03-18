/*
 * XREFs of ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020DE44
 * Callers:
 *     ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x180203C80 (--_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802041D0 (--_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x18020DEC0 (--_ECScrollKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollKeyframeAnimation::~CScrollKeyframeAnimation(CScrollKeyframeAnimation *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *((_QWORD *)this + 68) = 0LL;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  v2 = *((_QWORD *)this + 87);
  if ( v2 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 77);
  if ( v3 )
  {
    *((_QWORD *)this + 77) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CKeyframeAnimation::~CKeyframeAnimation(this);
}
