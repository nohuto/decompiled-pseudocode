/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02EF5CC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0294D8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295AD8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C012C788 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0130A78 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0142EC8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0163894 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  struct CCD_BTL *v6; // rax
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int16 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  v5 = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( v5 >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0;
    v6 = CCD_BTL::Global(v4, v3);
    v5 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v6)(v6, &v8);
    if ( v5 >= 0 )
      v5 = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v8);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v8);
  }
  return (unsigned int)v5;
}
