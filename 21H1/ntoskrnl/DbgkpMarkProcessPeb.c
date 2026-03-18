/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14088071C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14066FA68 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x14075E490 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140880420 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _DWORD *v3; // r9
  _WORD *v4; // rax
  __int16 v5; // cx
  __int64 v6; // r8
  _DWORD *v7; // r9
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v8, v3);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v4 = *(_WORD **)(BugCheckParameter1 + 1408);
      if ( v4 )
      {
        v5 = v4[4];
        if ( v5 == 332 || v5 == 452 )
        {
          if ( *(_QWORD *)v4 )
            *(_BYTE *)(*(_QWORD *)v4 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)v8, 0LL, v6, v7);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
