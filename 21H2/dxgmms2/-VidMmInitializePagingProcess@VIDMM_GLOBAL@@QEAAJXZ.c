/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814
 * Callers:
 *     VidMmInitializePagingProcess @ 0x1C001CAF0 (VidMmInitializePagingProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchCreateSchedulingLogs @ 0x1C00B7950 (VidSchCreateSchedulingLogs.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7E9C (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7F70 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     VidSchCreateSystemDevices @ 0x1C00B80AC (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B8348 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  int inited; // ebx
  unsigned int v3; // esi
  __int64 v5; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384), this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22385LL);
LABEL_16:
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    goto LABEL_9;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22396LL);
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22408LL);
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22419LL);
    goto LABEL_16;
  }
  v3 = 0;
  if ( *((_DWORD *)this + 1754) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v3, 0);
      if ( inited < 0 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 1754) )
        goto LABEL_8;
    }
    WdLogSingleEntry1(1LL, 22431LL);
    goto LABEL_16;
  }
LABEL_8:
  inited = VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry1(1LL, 22439LL);
    goto LABEL_16;
  }
LABEL_9:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
