/*
 * XREFs of ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x14003E750
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001CB28 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x14003D978 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x14003DCFC (-AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z.c)
 */

void __fastcall ATL::CAtlModule::Term(ATL::CAtlModule *this, unsigned int a2)
{
  _DWORD *v2; // rdi
  __int64 v4; // rcx

  v2 = (_DWORD *)((char *)this + 8);
  if ( *((_DWORD *)this + 2) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      ATL::AtlCallTermFunc((ATL::CAtlModule *)((char *)this + 8), a2);
      *((_QWORD *)this + 2) = 0LL;
    }
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    *v2 = 0;
  }
}
