/*
 * XREFs of ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B0B70
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02B1D60 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004C738 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B0F30 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
        __int64 a1,
        void (__fastcall **a2)(_QWORD, __int64),
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rbp
  __int64 v8; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void (__fastcall ***v15)(_QWORD, __int64); // rdi
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _BYTE v22[40]; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+6Ch] [rbp+14h]

  v23 = HIDWORD(a2);
  v6 = a3;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))operator new[](0x28uLL, 0x4B677844u, PagedPool);
    v15 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      *v10 = (void (__fastcall **)(_QWORD, __int64))&SetElement::`vftable';
      v10[3] = a2;
      *((_DWORD *)v10 + 8) = v6;
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
      LOBYTE(v14) = 1;
      v17 = DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v15, a1, 0LL, v14, a5);
      if ( v17 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *(struct DXGFASTMUTEX *const *)(a1 + 16), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
        if ( !Set<DXGTARGETENTRY>::Add(a1 + 40, (__int64)v15) )
          (**v15)(v15, 1LL);
        if ( v22[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v21);
        return 0LL;
      }
      else
      {
        (**v15)(v15, 1LL);
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
        v20[4] = v23;
        v20[5] = (unsigned int)a2;
        v20[3] = v6;
        WdLogEvent5_WdError(v20);
        return (unsigned int)v17;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = 123LL;
      WdLogEvent5_WdLowResource(v16);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v8 + 24) = 116LL;
    WdLogEvent5_WdError(v8);
    return 2147483685LL;
  }
}
