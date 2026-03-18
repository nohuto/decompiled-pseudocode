/*
 * XREFs of VidSchiEnsureRootPageTableUpdated @ 0x1C00B8EE8
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1C0041CD0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0018D8C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00A71B8 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00DFC84 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 */

__int64 __fastcall VidSchiEnsureRootPageTableUpdated(char *a1)
{
  __int64 v1; // rbx
  char *v2; // r14
  __int64 v3; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  VIDMM_PROCESS *v9; // rbx
  UINT v10; // edx
  bool v11; // zf
  UINT64 SegmentOffset; // rcx
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v18; // [rsp+58h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = a1 + 248;
  v3 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(v1 + 32);
  ExAcquirePushLockExclusiveEx(a1 + 248, 0LL);
  v6 = *(_QWORD *)(v1 + 40);
  v16 = 0LL;
  v15 = 0;
  v17 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v14 = 0;
  v8 = *(_QWORD *)(v7 + 64);
  if ( v8 )
  {
    v9 = *(VIDMM_PROCESS **)(v8 + 8);
    if ( v9 )
    {
      VIDMM_PROCESS::GetPageDirectoryData(
        v9,
        *(_DWORD *)(*(_QWORD *)(v5 + 16) + 240LL),
        *(unsigned __int16 *)(v3 + 6),
        &v16,
        &v14,
        &v15,
        &v17);
      if ( *((_QWORD *)a1 + 32) != v16 )
      {
        v10 = v14;
        if ( v14 )
        {
          *(&v18.Address.SegmentId + 1) = 0;
          *(&v18.NumEntries + 1) = 0;
          v11 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
          SegmentOffset = v17;
          *((_QWORD *)a1 + 32) = v16;
          v18.hContext = (HANDLE)*((_QWORD *)a1 + 6);
          v18.Address.SegmentId = v15;
          v18.Address.SegmentOffset = SegmentOffset;
          v18.NumEntries = v10;
          if ( v11 )
          {
            ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v18);
            SegmentOffset = v18.Address.SegmentOffset;
          }
          *((_QWORD *)a1 + 33) = SegmentOffset;
          VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
            *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 656LL),
            v9,
            &v18,
            a1);
        }
      }
    }
  }
  return ExReleasePushLockExclusiveEx(v2, 0LL);
}
