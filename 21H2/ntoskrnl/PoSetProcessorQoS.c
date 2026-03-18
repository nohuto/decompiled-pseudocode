/*
 * XREFs of PoSetProcessorQoS @ 0x14045E06E
 * Callers:
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KeCheckAndApplyBamQos @ 0x14045AAC0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14023B8E8 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405DC760 (PpmHvSetVirtualProcessorQos.c)
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
  if ( a2 == *(_DWORD *)(a1 + 34112) )
    return v8;
  v9 = *(_QWORD *)(a1 + 33976);
  if ( v9 && *(_BYTE *)(v9 + 125) )
  {
    v5 = 1;
    _disable();
    v4 = (v18 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 128));
  }
  v10 = *(unsigned __int16 *)(a1 + 34120);
  if ( _bittest(&v10, a2) )
    goto LABEL_13;
  v11 = __rdtsc();
  v12 = v11 - *(_QWORD *)(a1 + 34096);
  v13 = *(_DWORD *)(a1 + 34112);
  v14 = a2 == 3 || v13 == 3;
  if ( a2 == 4 )
  {
    if ( v13 )
    {
LABEL_12:
      v15 = 2LL * *(_QWORD *)(a1 + 34104);
      *(_QWORD *)(a1 + 34096) = v11;
      *(_BYTE *)(a1 + 34061) = v12 >= v15;
LABEL_13:
      v16 = PpmPerfVmQosSupported == 0;
      *(_DWORD *)(a1 + 34112) = a2;
      if ( v16 )
        PpmPerfArbitratorApplyProcessorState(a1, 1u, 0, a4);
      else
        PpmHvSetVirtualProcessorQos(a1);
      *(_BYTE *)(a1 + 236) = a2;
      goto LABEL_23;
    }
  }
  else if ( !a2 || a2 <= v13 && !v14 )
  {
    goto LABEL_12;
  }
  if ( v12 >= *(_QWORD *)(a1 + 34104) || *(_BYTE *)(a1 + 34061) )
    goto LABEL_12;
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
