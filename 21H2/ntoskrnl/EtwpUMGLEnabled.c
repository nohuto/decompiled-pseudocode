/*
 * XREFs of EtwpUMGLEnabled @ 0x1409E47C4
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  _DWORD *v4; // r9
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 *v7; // rcx
  _OWORD v9[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(BugCheckParameter1 + 1360);
  if ( !v2 )
    return 0;
  v3 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v9, v4);
  v5 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v6 = 0LL;
  v7 = *(__int64 **)(BugCheckParameter1 + 1408);
  if ( v7 )
    v6 = *v7;
  if ( v6 && (v5 || _bittest((const signed __int32 *)(v6 + 576), 0)) )
    v5 = 1;
  KiUnstackDetachProcess((__int64)v9, 0LL);
  ExReleaseRundownProtection(v3);
  return v5;
}
