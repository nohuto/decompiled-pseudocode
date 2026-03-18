/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01224A4
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01223E0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02E18E0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0008BE4 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C010F170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  DMMVIDPN *v12; // rax
  unsigned __int8 v13; // r8
  DMMVIDPN *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+40h] [rbp+8h] BYREF

  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v10 = 0;
  *(_QWORD *)(v9 + 24) = a2;
  v11 = *(_QWORD *)(a1 + 8);
  if ( !v11 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v28);
    v11 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v11 + 16);
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v30);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v34 = 0LL;
  v12 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v14 = DMMVIDPN::DMMVIDPN(v12, a2, v13);
  else
    v14 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v34, (__int64)v14);
  v19 = v34;
  if ( v34 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v34 + 72))(v34 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 16LL) != CurrentThread )
      {
        v23 = WdLogNewEntry5_WdAssertion(CurrentThread, v20);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = v34;
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v24);
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v20);
      v32[3] = v19;
      v32[4] = a2;
      v32[5] = *(int *)(v19 + 80);
      WdLogEvent5_WdDmmEvent(v32);
      v10 = *(_DWORD *)(v19 + 80);
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v31 + 24) = a2;
    WdLogEvent5_WdLowResource(v31);
    v10 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v34, 0LL);
  return v10;
}
