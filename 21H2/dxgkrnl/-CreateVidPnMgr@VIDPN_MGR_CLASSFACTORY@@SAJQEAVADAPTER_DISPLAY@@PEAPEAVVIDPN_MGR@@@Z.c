/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211B10
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0011748 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(
        struct ADAPTER_DISPLAY *const a1,
        struct VIDPN_MGR **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  VIDPN_MGR *v7; // rax
  VIDPN_MGR *v8; // rax
  int *v9; // rdi
  int v11; // eax
  VIDPN_MGR *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = (VIDPN_MGR *)operator new[](0x238uLL, 0x4E506456u, 64LL, a4);
  if ( !v7 )
  {
    v12 = 0LL;
    goto LABEL_12;
  }
  v8 = VIDPN_MGR::VIDPN_MGR(v7, a1);
  v12 = v8;
  v9 = (int *)v8;
  if ( !v8 )
  {
LABEL_12:
    WdLogSingleEntry1(6LL, a1);
    v11 = -1073741801;
    goto LABEL_13;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v8 + 11))((__int64)v8 + 88) )
  {
    WdLogSingleEntry3(7LL, v9, a1, v9[24]);
    v11 = v9[24];
LABEL_13:
    v4 = v11;
    goto LABEL_9;
  }
  v12 = 0LL;
  *a2 = (struct VIDPN_MGR *)v9;
LABEL_9:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v12);
  return v4;
}
