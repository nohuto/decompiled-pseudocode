/*
 * XREFs of VfDeadlockInitializeResource @ 0x1409E11C4
 * Callers:
 *     VerifierKeInitializeMutant @ 0x1409DDBE0 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutex @ 0x1409DDC60 (VerifierKeInitializeMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ViLowerIrql @ 0x1405A0A88 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A0B00 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x1409E1848 (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x1409E1B48 (ViDeadlockAllocate.c)
 *     ViDeadlockCanProceed @ 0x1409E1E18 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x1409E22BC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E22F4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1409E25B8 (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  void *v5; // rdi
  USHORT v6; // ax
  PVOID v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int8 v10; // bl
  unsigned int v11; // esi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  PVOID Entry; // [rsp+30h] [rbp-19h] BYREF
  PVOID v16; // [rsp+38h] [rbp-11h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-9h] BYREF

  Entry = 0LL;
  v16 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  if ( !(unsigned int)ViDeadlockCanProceed(a1) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = BackTrace[0];
  v8 = v6;
  v9 = 1LL;
  if ( v8 )
    v9 = v8;
  else
    v7 = a3;
  BackTrace[0] = v7;
  if ( (unsigned int)v9 < 8 )
    BackTrace[v9] = 0LL;
  v10 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v11 = ViDeadlockAddResource(a1, (__int64)&Entry, (__int64)&v16);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v10);
  if ( !v11 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v12 = v16;
  if ( v16 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      ViDeadlockFree(v12);
      v12 = v13;
    }
    while ( v13 );
  }
  return v11;
}
