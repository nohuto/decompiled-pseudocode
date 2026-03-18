/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14088758C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140630564 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x14076EE70 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140887290 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140888270 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
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
      KiUnstackDetachProcess((__int64)v5, 0);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
