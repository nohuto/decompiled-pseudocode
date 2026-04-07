/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x1800534A8
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x180056980 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800808F4 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 */

void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = xmmword_1800E7CE0;
  if ( (_QWORD)xmmword_1800E7CE0 )
  {
    *(_QWORD *)&xmmword_1800E7CE0 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&qword_1800E7CD8);
  Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800E7CA8);
  v2 = qword_1800E7CA0;
  if ( qword_1800E7CA0 )
  {
    qword_1800E7CA0 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
