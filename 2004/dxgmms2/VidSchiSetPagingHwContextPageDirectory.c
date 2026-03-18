/*
 * XREFs of VidSchiSetPagingHwContextPageDirectory @ 0x1C00D45BC
 * Callers:
 *     VidSchSetPagingNodePageDirectory @ 0x1C00D3C20 (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0014478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00880A0 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 */

void __fastcall VidSchiSetPagingHwContextPageDirectory(__int64 a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v5; // rax
  ADAPTER_RENDER *v7; // rcx
  __int64 v8; // rbx
  struct _DXGKARG_SETROOTPAGETABLE v9; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 264);
  v7 = *(ADAPTER_RENDER **)(a1 + 8);
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  *(&v9.Address.SegmentId + 1) = 0;
  *(&v9.NumEntries + 1) = 0;
  v9.hContext = *(HANDLE *)(v8 + 48);
  v9.Address.SegmentOffset = a5;
  v9.Address.SegmentId = a4;
  v9.NumEntries = a3;
  ADAPTER_RENDER::DdiSetRootPageTable(v7, &v9);
  *(_QWORD *)(v8 + 264) = v9.Address.SegmentOffset;
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
    *(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 648LL),
    0LL,
    &v9,
    (void *)v8);
}
