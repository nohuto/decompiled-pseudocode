/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x1406B5B38
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     PspIsParentProcess @ 0x1402FDE64 (PspIsParentProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x140666370 (PsLookupProcessByProcessId.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     SeCreateAccessStateEx @ 0x140668A70 (SeCreateAccessStateEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

void __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  PEPROCESS v3; // rbx
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v9[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v9, 0, sizeof(v9));
  v2 = *(void **)(Object + 1344);
  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) < 0 )
    goto LABEL_17;
  v3 = Process;
  if ( !PspIsParentProcess((__int64)Process, Object) || (HIDWORD(v3[2].Header.WaitListHead.Flink) & 0x400000) == 0 )
    goto LABEL_12;
  _InterlockedOr(v5, 0);
  if ( *(int *)(Object + 2512) < 0 )
  {
LABEL_17:
    v3 = Process;
    goto LABEL_12;
  }
  v3 = Process;
  if ( SLODWORD(Process[2].ReadyListHead.Blink) >= 0
    && (int)SeCreateAccessStateEx(
              0LL,
              Process,
              &PassedAccessState,
              v9,
              0x28u,
              (GENERIC_MAPPING *)((char *)PsProcessType + 76)) >= 0 )
  {
    if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
    {
      *(_QWORD *)(Object + 2536) = *(_QWORD *)&v3[2].ActiveProcessors.Count;
      if ( (LODWORD(v3[2].ReadyListHead.Blink) | *(_DWORD *)(Object + 2512)) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 2172), 0x200000u);
        v4 = _InterlockedIncrement64(&PsNextSecurityDomain);
        *(_QWORD *)(Object + 2528) = v4;
        *(_QWORD *)(Object + 2536) = v4;
      }
      v3 = Process;
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_12:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v3 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v3);
}
