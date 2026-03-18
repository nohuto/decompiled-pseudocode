/*
 * XREFs of PspCombineSecurityDomains @ 0x140699828
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCreateAccessStateEx @ 0x1405FDD90 (SeCreateAccessStateEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall PspCombineSecurityDomains(PVOID Object, struct _KPROCESS *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  NTSTATUS v7; // eax
  signed __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v14, 0, sizeof(v14));
  if ( (*((_DWORD *)Object + 543) & 0x400000) == 0 || (HIDWORD(a2[2].Header.WaitListHead.Flink) & 0x400000) == 0 )
    return 3221225596LL;
  _InterlockedOr(v10, 0);
  v4 = *((_QWORD *)Object + 316);
  v5 = *(_QWORD *)&a2[2].ActiveProcessors.Count;
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || *((int *)Object + 628) < 0 || SLODWORD(a2[2].ReadyListHead.Blink) < 0 )
    return 3221226597LL;
  Handle = 0LL;
  v11 = 0LL;
  v6 = SeCreateAccessStateEx(0LL, a2, &PassedAccessState, v14, 0x28u, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
  if ( v6 >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v6 = v7;
    if ( v7 >= 0 )
    {
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      v6 = SeCreateAccessStateEx(
             0LL,
             (struct _KPROCESS *)Object,
             &PassedAccessState,
             v14,
             0x28u,
             (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v6 < 0 )
        goto LABEL_14;
      v7 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v11);
      v6 = v7;
      if ( v7 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
        *((_QWORD *)Object + 316) = *(_QWORD *)&a2[2].ActiveProcessors.Count;
        if ( (*((_DWORD *)Object + 628) | LODWORD(a2[2].ReadyListHead.Blink)) < 0 )
        {
          v9 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v6 = -1073740699;
          *((_QWORD *)Object + 316) = v9;
          *((_QWORD *)Object + 317) = v9;
        }
        KeSynchronizeSecurityDomain((_KPROCESS *)Object);
        goto LABEL_13;
      }
      v11 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v7 == -1073741790 )
      v6 = -1073740699;
LABEL_13:
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_14:
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
