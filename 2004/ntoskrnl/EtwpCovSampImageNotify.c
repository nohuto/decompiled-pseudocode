/*
 * XREFs of EtwpCovSampImageNotify @ 0x140941AC0
 * Callers:
 *     EtwpCovSampEnumerateDriver @ 0x140941490 (EtwpCovSampEnumerateDriver.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409414F0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14093E904 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x14093FE90 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleDereference @ 0x140941D38 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessAddModule @ 0x140941F28 (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140942210 (EtwpCovSampProcessEnsureContext.c)
 */

void __fastcall EtwpCovSampImageNotify(__int64 FullImageName, HANDLE ProcessId, char *ImageInfo)
{
  __int64 v3; // rbx
  char *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdi
  __int64 v10; // rbp
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (*(_DWORD *)ImageInfo & 0x400) == 0 )
    return;
  v7 = ImageInfo - 8;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = qword_140C196D8 + 16;
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( ProcessId )
    {
      if ( ProcessId == *(HANDLE *)(Process + 1088)
        && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
      {
        v10 = *(_QWORD *)(Process + 2544);
        goto LABEL_9;
      }
    }
    else if ( (*(_DWORD *)ImageInfo & 0x100) != 0 )
    {
      v10 = qword_140C196D8 + 752;
LABEL_9:
      if ( (int)EtwpCovSampContextGetModule(v3, Process, v10, FullImageName, (__int64)v7, &v11) >= 0 )
        EtwpCovSampProcessAddModule(v10, v3, v11, *((_QWORD *)ImageInfo + 1));
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(v3);
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C196E0);
    KeLeaveCriticalRegion();
  }
}
