/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000C7F4
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0145900 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000C934 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C010F170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  DMMVIDPN *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DMMVIDPN *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // xmm0_8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // ecx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v30[0] = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v14 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v24 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v24 + 24) = 320LL;
    *(_QWORD *)(v24 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v24);
    v4 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v14 + 9))((__int64)v14 + 72) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v25[3] = v14;
    v25[4] = a2;
    v25[5] = *((int *)v14 + 20);
    WdLogEvent5_WdError(v25);
    v4 = *((_DWORD *)v14 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v30, (__int64)v14);
  v17 = operator new[](0x48uLL, 0x4E506456u, PagedPool);
  v21 = v17;
  if ( v17 )
  {
    v22 = *(_QWORD *)a4;
    v18 = *((unsigned int *)a4 + 2);
    v17[1] = 0LL;
    v17[2] = 0LL;
    *((_DWORD *)v17 + 10) = 1833173016;
    *v17 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v17[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v17[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v17[6] = v30[0];
    *(_QWORD *)((char *)v17 + 60) = v22;
    *((_DWORD *)v17 + 17) = v18;
    *((_DWORD *)v17 + 14) = v5;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v21 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18, 0LL, v19, v20);
    v27 = *(_DWORD *)a4;
    v28 = v26;
    v26[3] = 72LL;
    v26[4] = a2;
    v26[5] = v27 << 28 >> 28;
    v29 = (char)v27 >> 4;
    v24 = (__int64)v28;
    v28[7] = v29;
    v28[6] = v5;
    goto LABEL_15;
  }
  v30[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue((char *)this + 152);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v30, 0LL);
  return v4;
}
