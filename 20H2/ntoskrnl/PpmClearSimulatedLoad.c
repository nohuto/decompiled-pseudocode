/*
 * XREFs of PpmClearSimulatedLoad @ 0x1408E88E4
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x14033E1A0 (KeGetProcessorIndexFromNumber.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(PPROCESSOR_NUMBER ProcNumber)
{
  void *v2; // rdi
  __int64 i; // rcx
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  ULONG ProcessorIndexFromNumber; // eax

  v2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      v4 = *(_DWORD *)(i + 200);
      v5 = 0;
      if ( v4 )
      {
        v6 = *(_QWORD *)(i + 216);
        while ( 1 )
        {
          v7 = 136LL * v5;
          if ( *(_DWORD *)(v7 + v6 + 16) == 1 && *(_DWORD *)(v7 + v6 + 20) == (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
            break;
          if ( ++v5 >= v4 )
            goto LABEL_10;
        }
        v8 = *(_QWORD *)(v7 + v6);
        if ( v8 )
          goto LABEL_16;
      }
LABEL_10:
      ;
    }
    goto LABEL_12;
  }
  if ( ProcNumber->Reserved
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
  {
LABEL_12:
    v9 = -1073741811;
    goto LABEL_17;
  }
  v8 = KeGetPrcb(ProcessorIndexFromNumber) + 33128;
LABEL_16:
  v2 = *(void **)(v8 + 24);
  *(_QWORD *)(v8 + 24) = 0LL;
  v9 = 0;
LABEL_17:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5050u);
  return v9;
}
