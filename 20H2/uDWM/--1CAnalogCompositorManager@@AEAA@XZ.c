/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x1800534B8
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x180056CD0 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180080094 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 */

void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = xmmword_1800E5CD0;
  if ( (_QWORD)xmmword_1800E5CD0 )
  {
    *(_QWORD *)&xmmword_1800E5CD0 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&qword_1800E5CC8);
  Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800E5C98);
  v2 = qword_1800E5C90;
  if ( qword_1800E5C90 )
  {
    qword_1800E5C90 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
