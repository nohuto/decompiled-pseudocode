/*
 * XREFs of WriteCookAccess @ 0x1C00296A0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     DequeueAndReadyContext @ 0x1C00298F0 (DequeueAndReadyContext.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     QueueContext @ 0x1C0068554 (QueueContext.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // edx
  __int64 v7; // r14
  int v8; // edx
  int v9; // edx
  KIRQL v10; // bl
  _QWORD *v11; // rcx
  char v12; // di
  __int64 v13; // r9
  unsigned int v14; // eax
  char v16; // r12
  KIRQL v17; // r13
  __int32 v18; // edi
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // r8d

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *(_DWORD *)(a2 + 16) += 2;
      goto LABEL_12;
    }
    v16 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v16 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    v18 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
    if ( v18 )
      QueueContext(a1, 0xFFFFLL, v7 + 32);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v17);
    if ( v18 )
      return 32772;
    v19 = *(_QWORD *)(a2 + 40);
    ++*(_DWORD *)(a2 + 16);
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v19 + 16))(
            0LL,
            *(_QWORD *)(a2 + 32) + 120LL,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v19 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v21 = v20;
    if ( (v16 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v20 == 259 )
      return 32772;
    if ( v20 )
    {
      LogError(3222536216LL);
      AcpiDiagTraceAmlError(a1, 3222536216LL);
      v22 = v21;
      goto LABEL_34;
    }
LABEL_11:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_12;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_11;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v3;
    goto LABEL_7;
  }
LABEL_12:
  v12 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v12 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v13 = *(_QWORD *)(a2 + 40);
  ++*(_DWORD *)(a2 + 16);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v13 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v13 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v3 = v14;
  if ( (v12 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v14 == 259 )
    return 32772;
  if ( v14 )
  {
    LogError(3222536216LL);
    AcpiDiagTraceAmlError(a1, 3222536216LL);
    v22 = v3;
LABEL_34:
    PrintDebugMessage(212, *(unsigned __int8 *)(v7 + 12), v22, 0, 0LL);
    return (unsigned int)-1072431080;
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    DequeueAndReadyContext(v7 + 32);
    _InterlockedExchange((volatile __int32 *)(v7 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v10);
  }
  v11 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v11[1];
  HeapFree(v11);
  return v3;
}
