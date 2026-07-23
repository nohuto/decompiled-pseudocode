/*
 * XREFs of ExpInitializeSvm @ 0x140A72BE4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  bool v1; // zf
  char *v2; // rdx
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 *result; // rax
  PVOID PoolWithTag; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  (*(void (__fastcall **)(_QWORD, unsigned int *, int *, __int64 *))(HalIommuDispatch + 8))(
    0LL,
    &v9,
    &ExpSvmAgents,
    &ExpSvmIommuSystemContext);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    ExpSvmWorkQueues = (__int64)PoolWithTag;
  }
  if ( v1 || (v2 = (char *)ExpSvmWorkQueues) == 0LL )
  {
    v2 = (char *)&ExpSvmStaticWorkQueue;
    v0 = 1;
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
  }
  ExpSvmNumberOfWorkQueues = v0;
  for ( i = 0; i < v0; *(_DWORD *)&v2[v5 + 96] = 0 )
  {
    v4 = i;
    v5 = 104LL * i++;
    *(_QWORD *)&v2[v5 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&v2[v5 + 24] = v4;
    *(_QWORD *)&v2[v5] = 0LL;
    *(_QWORD *)&v2[v5 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&v2[v5 + 32] = 275;
    *(_QWORD *)&v2[v5 + 64] = v4;
    *(_QWORD *)&v2[v5 + 88] = 0LL;
    *(_QWORD *)&v2[v5 + 48] = 0LL;
  }
  v6 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)(HalIommuDispatch + 96) = ExpSvmFaultRoutine;
  v6[13] = ExpSvmReferenceAsid;
  v6[14] = ExpSvmDereferenceAsid;
  v6[15] = ExpSvmServicePageFault;
  result = &ExpSvmDevices;
  qword_140C16978 = (__int64)&ExpSvmDevices;
  ExpSvmDevices = (__int64)&ExpSvmDevices;
  qword_140C16958 = 0LL;
  ExpSvmDeviceListLock = 0LL;
  return result;
}
