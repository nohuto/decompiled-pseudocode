/*
 * XREFs of ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C02DE31C
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C4B58 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 */

void __fastcall PresentQualcommPanelRefreshWorkaround(struct DXGCONTEXT *a1, DXGADAPTER ***a2, unsigned int a3)
{
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rdi
  DXGADAPTER **v7; // rbx
  __int64 v8; // rcx
  _QWORD v9[264]; // [rsp+30h] [rbp-868h] BYREF

  DXGDEVICE::FlushScheduler(*((_QWORD **)a1 + 2), 1u, 0xFFFFFFFD, 0);
  DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(a2[349], a3);
  if ( DisplayedPrimaryAllocation )
  {
    memset(v9, 0, sizeof(v9));
    v7 = a2[350];
    v8 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
    LODWORD(v9[0]) = a3;
    v9[2] = v8;
    (*(void (__fastcall **)(DXGADAPTER *, _QWORD, char *, _QWORD *, _QWORD))(*((_QWORD *)v7[81] + 1) + 224LL))(
      v7[82],
      *((_QWORD *)DisplayedPrimaryAllocation + 1),
      (char *)v9 + 4,
      &v9[1],
      0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*((_QWORD *)v7[78] + 1) + 816LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 632LL),
      v9);
  }
}
