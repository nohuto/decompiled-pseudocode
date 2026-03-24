/*
 * XREFs of VidSchiEnsureRootPageTableUpdated @ 0x1C00D382C
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1C003A050 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C003C1D8 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0016058 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C008B210 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00BA298 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 */

__int64 __fastcall VidSchiEnsureRootPageTableUpdated(char *a1)
{
  __int64 v1; // rbx
  char *v2; // r14
  __int64 v3; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  VIDMM_PROCESS *v8; // rbx
  UINT v9; // edx
  bool v10; // zf
  UINT64 SegmentOffset; // rcx
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v17; // [rsp+58h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = a1 + 248;
  v3 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(v1 + 32);
  ExAcquirePushLockExclusiveEx(a1 + 248, 0LL);
  v6 = *(_QWORD *)(v1 + 40);
  v15 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v13 = 0;
  v8 = *(VIDMM_PROCESS **)(v7 + 64);
  if ( v8 )
    v8 = (VIDMM_PROCESS *)*((_QWORD *)v8 + 1);
  if ( v8 )
  {
    VIDMM_PROCESS::GetPageDirectoryData(
      v8,
      *(_DWORD *)(*(_QWORD *)(v5 + 16) + 232LL),
      *(unsigned __int16 *)(v3 + 6),
      &v15,
      &v13,
      &v14,
      &v16);
    if ( *((_QWORD *)a1 + 32) != v15 )
    {
      v9 = v13;
      if ( v13 )
      {
        *(&v17.Address.SegmentId + 1) = 0;
        *(&v17.NumEntries + 1) = 0;
        v10 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
        SegmentOffset = v16;
        *((_QWORD *)a1 + 32) = v15;
        v17.hContext = (HANDLE)*((_QWORD *)a1 + 6);
        v17.Address.SegmentId = v14;
        v17.Address.SegmentOffset = SegmentOffset;
        v17.NumEntries = v9;
        if ( v10 )
        {
          ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v17);
          SegmentOffset = v17.Address.SegmentOffset;
        }
        *((_QWORD *)a1 + 33) = SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 648LL),
          v8,
          &v17,
          a1);
      }
    }
  }
  return ExReleasePushLockExclusiveEx(v2, 0LL);
}
