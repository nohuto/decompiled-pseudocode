/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128F28
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02DE320 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02E9D90 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0010244 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0129070 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  DMMVIDPN *v12; // rax
  DMMVIDPN *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+40h] [rbp+8h] BYREF

  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v10 = 0;
  *(_QWORD *)(v9 + 24) = a2;
  v11 = *(_QWORD *)(a1 + 8);
  if ( !v11 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v27);
    v11 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v11 + 16);
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v29);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v33 = 0LL;
  v12 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v13 = DMMVIDPN::DMMVIDPN(v12, a2);
  else
    v13 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v33, (__int64)v13);
  v18 = v33;
  if ( v33 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v33 + 72))(v33 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 16LL) != CurrentThread )
      {
        v26 = WdLogNewEntry5_WdAssertion(CurrentThread, v19);
        WdLogEvent5_WdAssertion(v26);
      }
      v22 = v33;
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v22);
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20);
      v31[3] = v18;
      v31[4] = a2;
      v31[5] = *(int *)(v18 + 80);
      WdLogEvent5_WdDmmEvent(v31);
      v10 = *(_DWORD *)(v18 + 80);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v30 + 24) = a2;
    WdLogEvent5_WdLowResource(v30);
    v10 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v33, 0LL);
  return v10;
}
