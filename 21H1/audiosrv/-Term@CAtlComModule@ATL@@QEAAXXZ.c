/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x180069D48
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x18007D8F0 (ATL--_dynamic_atexit_destructor_for___AtlComModule__.c)
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x1800B8BD0 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_18019F6B0;
    v2 = qword_18019F6B8;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_18019F6B8;
      }
      ++v1;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&stru_18019F6C0);
    ATL::_AtlComModule = 0;
  }
}
