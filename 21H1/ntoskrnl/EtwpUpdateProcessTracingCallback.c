/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x14092FCD0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x14092FB94 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  _DWORD *v6; // r9
  _DWORD *v7; // r9
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 *v11; // rcx
  _OWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = *(_QWORD *)(BugCheckParameter1 + 1360);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v13, v6);
      LOBYTE(v8) = *(_BYTE *)(a2 + 4);
      v9 = *(_DWORD *)a2;
      if ( (_BYTE)v8 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v9);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v9);
      v10 = 0LL;
      v11 = *(__int64 **)(BugCheckParameter1 + 1408);
      if ( v11 )
        v10 = *v11;
      if ( v10 )
      {
        if ( (_BYTE)v8 )
          _interlockedbittestandset((volatile signed __int32 *)(v10 + 576), v9);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v10 + 576), v9);
      }
      KiUnstackDetachProcess((__int64)v13, 0LL, v8, v7);
      ExReleaseRundownProtection_0(v5);
    }
  }
  return 0LL;
}
