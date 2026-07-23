/*
 * XREFs of PoSetProcessorQoS @ 0x14056E79C
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140398DF4 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmHvSetVirtualProcessorQos @ 0x14057C6D4 (PpmHvSetVirtualProcessorQos.c)
 */

char __fastcall PoSetProcessorQoS(__int64 a1, signed int a2, __int64 a3, __int64 a4)
{
  bool v4; // bp
  char v5; // r15
  char v8; // si
  __int64 v9; // r14
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  signed int v13; // eax
  bool v14; // cl
  unsigned __int64 v15; // rax
  bool v16; // zf
  __int16 v18; // [rsp+30h] [rbp-8h]

  v4 = 0;
  v5 = 0;
  v8 = 1;
  if ( a2 == *(_DWORD *)(a1 + 33264) )
    return v8;
  v9 = *(_QWORD *)(a1 + 33136);
  if ( v9 && *(_BYTE *)(v9 + 125) )
  {
    v5 = 1;
    _disable();
    v4 = (v18 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 128));
  }
  v10 = *(unsigned __int16 *)(a1 + 33272);
  if ( _bittest(&v10, a2) )
    goto LABEL_19;
  v11 = __rdtsc();
  v12 = v11 - *(_QWORD *)(a1 + 33248);
  v13 = *(_DWORD *)(a1 + 33264);
  v14 = a2 == 3 || v13 == 3;
  if ( a2 == 4 && v13 || !a2 || a2 <= v13 && !v14 || v12 >= *(_QWORD *)(a1 + 33256) || *(_BYTE *)(a1 + 33213) )
  {
    v15 = 2LL * *(_QWORD *)(a1 + 33256);
    *(_QWORD *)(a1 + 33248) = v11;
    *(_BYTE *)(a1 + 33213) = v12 >= v15;
LABEL_19:
    v16 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 33264) = a2;
    if ( v16 )
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0, a4);
    else
      PpmHvSetVirtualProcessorQos(a1);
    *(_BYTE *)(a1 + 236) = a2;
    goto LABEL_23;
  }
  v8 = 0;
LABEL_23:
  if ( v5 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v9 + 128));
    if ( v4 )
      _enable();
  }
  return v8;
}
