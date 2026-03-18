/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0068854
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0068D8C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  DMMVIDPN *v9; // rax
  DMMVIDPN *v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // xmm0_8
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, __int64); // [rsp+38h] [rbp-20h] BYREF

  v5 = a3;
  v7 = 0;
  v18 = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL, (__int64)a4);
  if ( !v9 || (v10 = DMMVIDPN::DMMVIDPN(v9, a2), (v11 = (__int64)v10) == 0) )
  {
    WdLogSingleEntry2(6LL, 320LL, a2);
    v12 = -1073741801;
    goto LABEL_10;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v10 + 9))((__int64)v10 + 72) )
  {
    WdLogSingleEntry3(2LL, v11, a2, *(int *)(v11 + 80));
    v12 = *(_DWORD *)(v11 + 80);
LABEL_10:
    v7 = v12;
    goto LABEL_11;
  }
  auto_rc<DMMVIDPN>::reset(&v18, v11);
  v19 = 0LL;
  v14 = operator new[](0x48uLL, 0x4E506456u, 256LL, v13);
  if ( v14 )
  {
    v15 = *((_DWORD *)a4 + 2);
    v16 = *(_QWORD *)a4;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 40) = 1833173016;
    *(_QWORD *)v14 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    *(_QWORD *)(v14 + 24) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    *(_QWORD *)(v14 + 32) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    *(_QWORD *)(v14 + 48) = v18;
    *(_QWORD *)(v14 + 60) = v16;
    *(_DWORD *)(v14 + 68) = v15;
    *(_DWORD *)(v14 + 56) = v5;
    v18 = 0LL;
    v19 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue((char *)this + 192);
  }
  else
  {
    WdLogSingleEntry5(6LL, 72LL, a2, (int)(*(_DWORD *)a4 << 28) >> 28, v5, (int)(*(_DWORD *)a4 << 24) >> 28);
    v7 = -1073741801;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v19);
LABEL_11:
  auto_rc<DMMVIDPN>::reset(&v18, 0LL);
  return v7;
}
