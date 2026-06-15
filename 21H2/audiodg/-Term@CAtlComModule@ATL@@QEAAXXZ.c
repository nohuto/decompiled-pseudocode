/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14001C900
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001CB08 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x14002DC00 (ATL--_dynamic_atexit_destructor_for___AtlComModule__.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x14003DB08 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_14008FFB0;
    v2 = qword_14008FFB8;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_14008FFB8;
      }
      ++v1;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
    ATL::_AtlComModule = 0;
  }
}
