/*
 * XREFs of MiSessionCreateInternal @ 0x1407F336C
 * Callers:
 *     MiSessionCreate @ 0x1407F3718 (MiSessionCreate.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     MiMarkSessionMasterProcess @ 0x14036D9B8 (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiGetNewSessionId @ 0x1407F3534 (MiGetNewSessionId.c)
 *     MiFreeSessionId @ 0x14096DC98 (MiFreeSessionId.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  void *v2; // rbp
  _KPROCESS *Process; // r15
  unsigned __int32 NewSessionId; // eax
  unsigned __int32 v5; // esi
  unsigned __int64 v6; // rdi
  __int64 *Pool; // rbx
  PVOID v8; // rax
  int v9; // eax
  void *CurrentServerSilo; // rax
  LARGE_INTEGER v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int32 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+44h] [rbp-34h]
  __int64 **v16; // [rsp+48h] [rbp-30h] BYREF
  int v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  NewSessionId = MiGetNewSessionId();
  v5 = NewSessionId;
  if ( NewSessionId == -1 )
    return 3221225495LL;
  v6 = NewSessionId != 0 ? 1024LL : 20LL;
  if ( !(unsigned int)MiChargeResident(a1, v6, 0LL) )
  {
LABEL_15:
    MiFreeSessionId(v5);
    return 3221225495LL;
  }
  Pool = (__int64 *)MiAllocatePool(64, 0x3C0uLL, 0x7353694Du);
  if ( !Pool || (v8 = MiAllocatePool(64, 0x4000uLL, 0x7353694Du), (v2 = v8) == 0LL) )
  {
    MiReturnResident((__int64)a1, v6);
    if ( Pool )
    {
      ExFreePoolWithTag(Pool, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
    goto LABEL_15;
  }
  Pool[112] = (__int64)v8;
  v9 = PsDefaultSystemLocaleId;
  *(_DWORD *)Pool = 1;
  *((_DWORD *)Pool + 22) = v9;
  *((_DWORD *)Pool + 2) = v5;
  Pool[111] = RtlGetInterruptTimePrecise(&v12);
  *((_WORD *)Pool + 183) = *(_WORD *)a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24)) <= 1 )
    __fastfail(0xEu);
  Pool[38] = v6;
  Pool[94] = 0LL;
  Pool[10] = 0LL;
  Pool[3] = (__int64)(Pool + 2);
  Pool[2] = (__int64)(Pool + 2);
  *((_DWORD *)Pool + 3) = 1;
  Pool[23] = _InterlockedIncrement64(&PsNextSecurityDomain);
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  Pool[110] = (__int64)CurrentServerSilo;
  if ( CurrentServerSilo )
  {
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
    _InterlockedCompareExchange(*((volatile signed __int32 **)PsGetServerSiloGlobals(Pool[110]) + 165), v5, -1);
  }
  MiMarkSessionMasterProcess((__int64)Process, (__int64)Pool);
  *((_BYTE *)Pool + 376) = Pool[47] & 0xF8 | 1;
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
  {
    v15 = 0;
    v18 = 0;
    v16 = &v13;
    v14 = v5;
    v13 = Pool;
    v17 = 12;
    EtwTraceKernelEvent((__int64)&v16, 1u, 0x20400000u, 0x24Bu, 0x401803u);
  }
  return 0LL;
}
