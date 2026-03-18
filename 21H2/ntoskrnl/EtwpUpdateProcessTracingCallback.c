/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1409E4A50
 * Callers:
 *     EtwpEnableDisableUMGL @ 0x1409E4318 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E491C (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  _DWORD *v6; // r9
  char v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 *v10; // rcx
  _OWORD v12[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = *(_QWORD *)(BugCheckParameter1 + 1360);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v12, v6);
      v7 = *(_BYTE *)(a2 + 4);
      v8 = *(_DWORD *)a2;
      if ( v7 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v8);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v8);
      v9 = 0LL;
      v10 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v10 )
        v9 = *v10;
      if ( v9 )
      {
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 576), v8);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v9 + 576), v8);
      }
      KiUnstackDetachProcess((__int64)v12, 0LL);
      ExReleaseRundownProtection(v5);
    }
  }
  return 0LL;
}
