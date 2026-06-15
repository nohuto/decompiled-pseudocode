/*
 * XREFs of ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18010ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x18010D934 (-OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::SpatialApplicationInfoUpdateCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RTL_CRITICAL_SECTION *a4,
        struct ApplicationSpatialInformationWnf *a5,
        unsigned int a6)
{
  if ( a6 >= 0x90 && a6 >= (unsigned __int64)(unsigned int)(*(_DWORD *)a5 * *((_DWORD *)a5 + 18)) + 144 )
    CExclusiveModeListener::OnExclusiveModeChange(a4, a5);
  return 0LL;
}
