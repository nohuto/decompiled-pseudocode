/*
 * XREFs of ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EF45C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EEC34 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C012D938 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0131C28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0144078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(CCD_TOPOLOGY **this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct CCD_BTL *v7; // rax
  int v8; // edi
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int16 v13; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+48h] [rbp-20h]

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_,
              (__int64)this,
              4) < 0 )
    return 3221226021LL;
  v5 = *((_QWORD *)*this + 8);
  if ( !(v5 ? *(_WORD *)(v5 + 20) : 0) )
    return 3221226021LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0;
  v7 = CCD_BTL::Global(v4, v5);
  v8 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v7)(v7, &v10);
  if ( v8 >= 0 )
    v8 = CCD_TOPOLOGY::SetConnectivityHash(*this, (const struct CCD_SET_STRING_ID *)&v10);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v10);
  return (unsigned int)v8;
}
