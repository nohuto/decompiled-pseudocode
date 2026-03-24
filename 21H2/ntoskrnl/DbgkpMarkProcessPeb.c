/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140884B2C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1406079BC (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x140772F90 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140884830 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140885810 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _DWORD *v3; // r9
  _WORD *v4; // rax
  __int16 v5; // cx
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v6, v3);
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
      KiUnstackDetachProcess((__int64)v6, 0);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
