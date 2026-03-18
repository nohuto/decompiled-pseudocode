/*
 * XREFs of EtwpUMGLEnabled @ 0x14092FA3C
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  _DWORD *v4; // r9
  __int64 v5; // r8
  _DWORD *v6; // r9
  unsigned __int8 v7; // bl
  __int64 v8; // rax
  __int64 *v9; // rcx
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_QWORD *)(BugCheckParameter1 + 1360);
  if ( !v2 )
    return 0;
  v3 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v11, v4);
  v7 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v8 = 0LL;
  v9 = *(__int64 **)(BugCheckParameter1 + 1408);
  if ( v9 )
    v8 = *v9;
  if ( v8 && (v7 || _bittest((const signed __int32 *)(v8 + 576), 0)) )
    v7 = 1;
  KiUnstackDetachProcess((__int64)v11, 0LL, v5, v6);
  ExReleaseRundownProtection_0(v3);
  return v7;
}
