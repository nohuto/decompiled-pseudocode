/*
 * XREFs of ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C022E2FC
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0190FD4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C0148D18 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 */

void __fastcall PresentQualcommPanelRefreshWorkaround(struct DXGCONTEXT *a1, DXGADAPTER ***a2, unsigned int a3)
{
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rdi
  DXGADAPTER **v7; // rbx
  __int64 v8; // rcx
  _QWORD v9[264]; // [rsp+30h] [rbp-868h] BYREF

  DXGDEVICE::FlushScheduler(*((_QWORD **)a1 + 2), 1u);
  DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(a2[337], a3);
  if ( DisplayedPrimaryAllocation )
  {
    memset(v9, 0, sizeof(v9));
    v7 = a2[338];
    v8 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
    LODWORD(v9[0]) = a3;
    v9[2] = v8;
    (*(void (__fastcall **)(DXGADAPTER *, _QWORD, char *, _QWORD *, _QWORD))(*((_QWORD *)v7[80] + 1) + 224LL))(
      v7[81],
      *((_QWORD *)DisplayedPrimaryAllocation + 1),
      (char *)v9 + 4,
      &v9[1],
      0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*((_QWORD *)v7[77] + 1) + 816LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 624LL),
      v9);
  }
}
