/*
 * XREFs of ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C011F85C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C0145144 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0145C00 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B0F30 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetTargetUsage(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !*(_QWORD *)(a1 + 2696) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)(a1 + 2696);
  v7 = *(_QWORD *)(v6 + 88);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, *(_QWORD *)(v6 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
    v8 = *(_QWORD *)(v7 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v4);
    if ( TargetById )
    {
      if ( a3 )
        *a3 = *((_BYTE *)TargetById + 92);
      v11 = *((_DWORD *)TargetById + 22);
    }
    else
    {
      v11 = 0;
    }
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v10);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v15 + 40), v10);
    return v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 0LL;
  }
}
