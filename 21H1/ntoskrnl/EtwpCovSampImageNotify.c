/*
 * XREFs of EtwpCovSampImageNotify @ 0x140940840
 * Callers:
 *     EtwpCovSampEnumerateDriver @ 0x140940210 (EtwpCovSampEnumerateDriver.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940270 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14093D684 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x14093EC10 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleDereference @ 0x140940AB8 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessAddModule @ 0x140940CA8 (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140940F90 (EtwpCovSampProcessEnsureContext.c)
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
    v3 = qword_140C19858 + 16;
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
      v10 = qword_140C19858 + 752;
LABEL_9:
      if ( (int)EtwpCovSampContextGetModule(v3, Process, v10, FullImageName, (__int64)v7, &v11) >= 0 )
        EtwpCovSampProcessAddModule(v10, v3, v11, *((_QWORD *)ImageInfo + 1));
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(v3);
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C19860);
    KeLeaveCriticalRegion();
  }
}
