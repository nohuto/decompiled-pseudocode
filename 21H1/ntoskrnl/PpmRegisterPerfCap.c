/*
 * XREFs of PpmRegisterPerfCap @ 0x14038F650
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14038F78C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14038F830 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14038F8BC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140573D14 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140573E1C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventThermalCapChange @ 0x140574BA8 (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x14076697C (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(_DWORD *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // r13d
  __int64 Prcb; // rax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !a1[5] )
  {
    v3 = a1[1];
    if ( v3 != -1 )
    {
      Prcb = KeGetPrcb(v3);
      v5 = *(__int64 **)(Prcb + 33136);
      v6 = *(_QWORD *)(Prcb + 33128);
      goto LABEL_4;
    }
LABEL_33:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return (unsigned int)-1073741811;
  }
  v12 = PpmPerfDomainHead;
  v3 = -1;
  v5 = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_33;
  do
  {
    v13 = *(_DWORD *)(v12 + 200);
    v6 = v12;
    v14 = 0;
    if ( v13 )
    {
      v15 = *(_QWORD *)(v12 + 216);
      while ( 1 )
      {
        v16 = v15 + 136LL * v14;
        if ( *(_DWORD *)(v16 + 16) )
        {
          if ( *(_DWORD *)(v16 + 20) == a1[1] )
            break;
        }
        if ( ++v14 >= v13 )
          goto LABEL_25;
      }
      v5 = (__int64 *)(v15 + 136LL * v14);
      if ( v16 )
        break;
    }
LABEL_25:
    v12 = *(_QWORD *)v12;
  }
  while ( (__int64 *)v12 != &PpmPerfDomainHead );
LABEL_4:
  if ( !v6 || !v5 )
    goto LABEL_33;
  v7 = a1[2];
  v8 = a1[3];
  *((_DWORD *)v5 + 8) = a1[4];
  v9 = *((_DWORD *)v5 + 6);
  if ( v9 != v7 )
  {
    if ( v9 == 100 )
    {
      v5[5] = MEMORY[0xFFFFF78000000008];
    }
    else if ( v7 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack((MEMORY[0xFFFFF78000000008] - v5[5]) / 0x2710uLL, v3);
      v5[5] = 0LL;
    }
    v11 = *v5;
    *((_DWORD *)v5 + 6) = v7;
    if ( v11 )
    {
      PpmEventBiosCapChange(v11, v7);
    }
    else if ( !*(_DWORD *)(v6 + 208) )
    {
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v6 + 16) - 33128LL, (unsigned int)a1[1], v7);
    }
    PopDiagTraceProcessorThrottlePerfTrack(100 - v7, v3);
  }
  if ( *((_DWORD *)v5 + 7) != v8 )
  {
    v17 = *v5;
    *((_DWORD *)v5 + 7) = v8;
    if ( v17 )
    {
      PpmEventThermalCapChange(v17, v8);
    }
    else if ( !*(_DWORD *)(v6 + 208) )
    {
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v6 + 16) - 33128LL, (unsigned int)a1[1], v8);
    }
  }
  *(_BYTE *)(v6 + 765) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v2;
}
