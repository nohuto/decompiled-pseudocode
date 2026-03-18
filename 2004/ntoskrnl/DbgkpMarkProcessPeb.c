/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140881A3C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140618348 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x140760860 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140881740 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140882720 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _WORD *v3; // rax
  __int16 v4; // cx
  _OWORD v5[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v5);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v3 = *(_WORD **)(BugCheckParameter1 + 1408);
      if ( v3 )
      {
        v4 = v3[4];
        if ( v4 == 332 || v4 == 452 )
        {
          if ( *(_QWORD *)v3 )
            *(_BYTE *)(*(_QWORD *)v3 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
