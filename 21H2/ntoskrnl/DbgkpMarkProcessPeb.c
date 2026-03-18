/*
 * XREFs of DbgkpMarkProcessPeb @ 0x1409279CC
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14066D440 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1406E9FB0 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409276D0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409286EC (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _DWORD *v3; // r9
  __int64 *v4; // rdx
  __int16 v5; // ax
  __int64 v7; // rdx
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v8, v3);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v4 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v4 )
      {
        v5 = *(_WORD *)(BugCheckParameter1 + 2412);
        if ( v5 == 332 || v5 == 452 )
        {
          v7 = *v4;
          if ( v7 )
            *(_BYTE *)(v7 + 2) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)v8, 0LL);
    }
    ExReleaseRundownProtection(v2);
  }
}
