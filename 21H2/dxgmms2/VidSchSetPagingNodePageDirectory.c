/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x1C00B843C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0018D8C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00A71B8 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00F5C88 (VidSchiSetPagingHwContextPageDirectory.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(_QWORD *a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v6; // rdi
  char i; // si
  __int64 v10; // rax
  __int64 v11; // rbp
  ADAPTER_RENDER *v12; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v13; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1[34] + 8LL * a2) )
  {
    VidSchiSetPagingHwContextPageDirectory((_DWORD)a1, a2, a3, a4, a5);
  }
  else
  {
    for ( i = 0; ; i = 1 )
    {
      v10 = i ? a1[36] : a1[33];
      v11 = *(_QWORD *)(v10 + 8 * v6);
      *(&v13.Address.SegmentId + 1) = 0;
      *(&v13.NumEntries + 1) = 0;
      v12 = (ADAPTER_RENDER *)a1[1];
      v13.hContext = *(HANDLE *)(v11 + 64);
      v13.Address.SegmentId = a4;
      v13.Address.SegmentOffset = a5;
      v13.NumEntries = a3;
      ADAPTER_RENDER::DdiSetRootPageTable(v12, &v13);
      *(_QWORD *)(v11 + 824) = v13.Address.SegmentOffset;
      VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(*(VIDMM_GLOBAL **)(a1[1] + 656LL), 0LL, &v13, (void *)v11);
      if ( i || (*(_BYTE *)(*(_QWORD *)(a1[2] + 2680LL) + 344 * v6 + 16) & 0xC) != 0xC )
        break;
    }
  }
}
