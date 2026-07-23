/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x14093F380
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwpGetCurrentSiloState @ 0x1405AA954 (EtwpGetCurrentSiloState.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     EtwpGetPidDemuxList @ 0x14093F310 (EtwpGetPidDemuxList.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409416A8 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v3; // r15d
  __int64 CurrentSiloState; // rax
  unsigned int v6; // ebx
  char v7; // r12
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned __int16 v12; // di
  unsigned int i; // esi
  int v14; // ecx
  unsigned __int64 PidDemuxList; // rax
  __int64 *j; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-40h]
  ULONG Seed; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 *v21; // [rsp+80h] [rbp+18h]
  PEPROCESS Process; // [rsp+88h] [rbp+20h] BYREF

  v21 = a3;
  v3 = a2;
  CurrentSiloState = EtwpGetCurrentSiloState(a1, a2);
  v6 = 0;
  Process = 0LL;
  v7 = 0;
  v8 = CurrentSiloState + 4080;
  CurrentThread = KeGetCurrentThread();
  v18 = v8;
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v3 )
  {
    v10 = (_DWORD *)a1;
    v11 = v3;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v10, &Process) )
      {
        *v10 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process) )
          *v10 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v10 += 2;
      --v11;
    }
    while ( v11 );
  }
  do
LABEL_9:
    v12 = RtlRandomEx(&Seed) & 0x7FFF;
  while ( v12 < 0x40u );
  for ( i = 0; i < v3; ++i )
  {
    v14 = *(_DWORD *)(a1 + 8LL * i);
    if ( v14 )
    {
      PidDemuxList = EtwpGetPidDemuxList(v14, v18);
      if ( PidDemuxList )
      {
        for ( j = *(__int64 **)(PidDemuxList + 32); j != (__int64 *)(PidDemuxList + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 9) == v12 )
            goto LABEL_9;
          if ( *((_WORD *)j + 8) == *(_WORD *)(a1 + 8LL * i + 4) )
          {
            if ( *((_WORD *)j + 10) != *(_WORD *)(a1 + 8LL * i + 6) )
              break;
            *((_WORD *)j + 9) = v12;
            v7 = 1;
          }
        }
      }
    }
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
    *v21 = v12;
  else
    return (unsigned int)-1073741275;
  return v6;
}
