/*
 * XREFs of ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C01A03F0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C01D7AB4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3E04 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetTargetUsage(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 2792) )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)(a1 + 2792);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, a2);
    if ( TargetById )
    {
      if ( a3 )
        *a3 = *((_BYTE *)TargetById + 96);
      v10 = *((_DWORD *)TargetById + 23);
    }
    else
    {
      v10 = 0;
    }
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to get VidPnMgr on adapter 0x%I64x!",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
