/*
 * XREFs of ??1CAtlWinModule@ATL@@QEAA@XZ @ 0x14001C984
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x14002DC40 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x14005074C (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlWinModule::~CAtlWinModule(ATL::CAtlWinModule *this)
{
  if ( ATL::_AtlWinModule == 72 )
  {
    ATL::CSimpleArray<unsigned short,ATL::CSimpleArrayEqualHelper<unsigned short>>::RemoveAll(&qword_140090088);
    DeleteCriticalSection((LPCRITICAL_SECTION)&stru_140090058);
    ATL::_AtlWinModule = 0;
  }
  ATL::CSimpleArray<unsigned short,ATL::CSimpleArrayEqualHelper<unsigned short>>::RemoveAll(&qword_140090088);
}
