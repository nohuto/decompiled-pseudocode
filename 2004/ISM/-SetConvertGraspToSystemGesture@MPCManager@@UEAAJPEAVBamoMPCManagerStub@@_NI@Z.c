/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x180073F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x180072880 (-MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z.c)
 */

__int64 __fastcall MPCManager::SetConvertGraspToSystemGesture(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        char a3,
        int a4)
{
  __int64 v6; // rcx
  ISMTracing *v7; // rcx
  struct MPCHolographicInputManager *Instance; // rax
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rdx

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v6, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(v7, a3, a4);
  }
  Instance = MPCHolographicInputManager::GetInstance();
  v9 = (_QWORD *)*((_QWORD *)Instance + 290);
  for ( i = (_QWORD *)*((_QWORD *)Instance + 289); i != v9; ++i )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 304LL))(*i) == a4 )
    {
      LOBYTE(v11) = a3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 368LL))(*i, v11);
    }
  }
  return 0LL;
}
