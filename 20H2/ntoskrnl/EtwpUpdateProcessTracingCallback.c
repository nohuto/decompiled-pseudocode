/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x140936DB0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x140936C74 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  _OWORD v11[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = *(_QWORD *)(BugCheckParameter1 + 1360);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v11);
      v6 = *(_BYTE *)(a2 + 4);
      v7 = *(_DWORD *)a2;
      if ( v6 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v7);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v7);
      v8 = 0LL;
      v9 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v9 )
        v8 = *v9;
      if ( v8 )
      {
        if ( v6 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 576), v7);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v8 + 576), v7);
      }
      KiUnstackDetachProcess((__int64)v11, 0);
      ExReleaseRundownProtection_0(v5);
    }
  }
  return 0LL;
}
