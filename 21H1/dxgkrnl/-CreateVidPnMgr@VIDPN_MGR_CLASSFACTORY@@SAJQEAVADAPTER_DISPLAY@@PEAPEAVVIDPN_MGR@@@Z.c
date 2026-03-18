/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C017CE40
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0179600 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017BB64 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  VIDPN_MGR *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  VIDPN_MGR *v9; // rdi
  VIDPN_MGR *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = (VIDPN_MGR *)operator new[](0x200uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v4 )
    v9 = VIDPN_MGR::VIDPN_MGR(v4, a1);
  else
    v9 = 0LL;
  v10 = v9;
  if ( v9 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 6))((__int64)v9 + 48) )
    {
      v10 = 0LL;
      *a2 = v9;
      v12 = 0;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
      v17[3] = v9;
      v17[4] = a1;
      v17[5] = *((int *)v9 + 14);
      WdLogEvent5_WdDmmEvent(v17);
      v12 = *((_DWORD *)v9 + 14);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdLowResource(v16);
    v12 = -1073741801;
  }
  if ( v10 )
    (**(void (__fastcall ***)(VIDPN_MGR *, __int64))v10)(v10, 1LL);
  return v12;
}
