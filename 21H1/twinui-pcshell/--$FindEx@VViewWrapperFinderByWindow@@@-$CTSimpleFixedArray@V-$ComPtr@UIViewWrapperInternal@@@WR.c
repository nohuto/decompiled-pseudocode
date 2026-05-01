/*
 * XREFs of ??$FindEx@VViewWrapperFinderByWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByWindow@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18027C2CC
 * Callers:
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18028AFDC (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_ViewFromWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x18028C154 (-_ViewFromWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByWindow>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  *a4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 8 * v4) + 768LL))(*(_QWORD *)(*a1 + 8 * v4)) != *a2 )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
