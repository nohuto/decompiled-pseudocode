/*
 * XREFs of ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x14003D978
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$0 @ 0x14002D650 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$0.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140013DC8 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14001C920 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x14003E750 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::~CAtlExeModuleT<CAudioDGModule>(ATL::CAtlModule *this)
{
  ATL::CAtlComModule *v2; // rcx

  ATL::CAtlComModule::ExecuteObjectMain(this, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term(v2);
  if ( *((_BYTE *)this + 98) )
    CoUninitialize();
  ATL::CAtlModule::Term(this);
}
