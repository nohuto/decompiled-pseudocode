/*
 * XREFs of VidSchiEnsureRootPageTableUpdated @ 0x1C00D4B6C
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1C003A0B0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C003C238 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0014478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00880A0 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00BB68C (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 */

__int64 __fastcall VidSchiEnsureRootPageTableUpdated(char *a1)
{
  __int64 v1; // rbx
  char *v2; // rsi
  __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  VIDMM_PROCESS *v8; // rbx
  UINT v9; // ecx
  ADAPTER_RENDER *v10; // rcx
  unsigned int v12; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v16; // [rsp+58h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = a1 + 248;
  v3 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(v1 + 32);
  ExAcquirePushLockExclusiveEx(a1 + 248, 0LL);
  v6 = *(_QWORD *)(v1 + 40);
  v14 = 0LL;
  v13 = 0;
  v15 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v12 = 0;
  v8 = *(VIDMM_PROCESS **)(v7 + 64);
  if ( v8 )
    v8 = (VIDMM_PROCESS *)*((_QWORD *)v8 + 1);
  if ( v8 )
  {
    VIDMM_PROCESS::GetPageDirectoryData(
      v8,
      *(_DWORD *)(*(_QWORD *)(v5 + 16) + 232LL),
      *(unsigned __int16 *)(v3 + 6),
      &v14,
      &v12,
      &v13,
      &v15);
    if ( *((_QWORD *)a1 + 32) != v14 )
    {
      v9 = v12;
      if ( v12 )
      {
        *(&v16.Address.SegmentId + 1) = 0;
        *(&v16.NumEntries + 1) = 0;
        *((_QWORD *)a1 + 32) = v14;
        v16.hContext = (HANDLE)*((_QWORD *)a1 + 6);
        v16.Address.SegmentId = v13;
        v16.NumEntries = v9;
        v10 = *(ADAPTER_RENDER **)(v5 + 8);
        v16.Address.SegmentOffset = v15;
        ADAPTER_RENDER::DdiSetRootPageTable(v10, &v16);
        *((_QWORD *)a1 + 33) = v16.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 648LL),
          v8,
          &v16,
          a1);
      }
    }
  }
  return ExReleasePushLockExclusiveEx(v2, 0LL);
}
