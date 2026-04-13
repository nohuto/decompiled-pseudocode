/*
 * XREFs of ??1?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800A2140
 * Callers:
 *     _ShellMRTHelper::MRTHelperBase::InitializeMRTObjects_::_1_::dtor$0 @ 0x1800D6E67 (_ShellMRTHelper--MRTHelperBase--InitializeMRTObjects_--_1_--dtor$0.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$3 @ 0x1800D6E8B (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::~NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
