/*
 * XREFs of MiAllocateEnclavePages @ 0x1405A828C
 * Callers:
 *     MiAllocateEnclavePagesForMdl @ 0x140589410 (MiAllocateEnclavePagesForMdl.c)
 *     MiGetPageForEnclave @ 0x1405A9530 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x1405A9E34 (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x140979A34 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 */

__int64 __fastcall MiAllocateEnclavePages(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rbx
  char v19; // al
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  unsigned int *v30; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+98h] [rbp+10h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v4 = a4;
  v5 = (unsigned int *)(qword_140C506D8 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a2);
  if ( (a3 & 2) != 0 )
    v6 = 1LL;
  else
    v6 = (unsigned __int16)KeNumberNodes;
  v7 = 0LL;
  v8 = 0LL;
  v30 = &v5[v6];
  v29 = 0LL;
  v28 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    if ( v8 == v4 )
      break;
    v11 = *(_QWORD *)(a1 + 16) + 24512LL * *v5;
    while ( 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
      v12 = *(_QWORD *)(v11 + 24400);
      if ( v12 == 0x3FFFFFFFFFLL )
        break;
      v13 = 48 * v12 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        goto LABEL_17;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v14, v15, v16);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
      if ( *(_QWORD *)(v11 + 24400) == v12 )
      {
LABEL_17:
        v17 = *(_QWORD *)v13 & 0xFFFFFFFFFFLL;
        v18 = *(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFLL;
        if ( v17 == 0x3FFFFFFFFFLL )
          *(_QWORD *)(v11 + 24408) = v18;
        else
          MiSetPfnBlink(48 * v17 - 0x220000000000LL, *(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFLL, 0);
        if ( v18 == 0x3FFFFFFFFFLL )
          *(_QWORD *)(v11 + 24400) = v17;
        else
          *(_QWORD *)(48 * v18 - 0x220000000000LL) = v17 | *(_QWORD *)(48 * v18 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
        _InterlockedDecrement64((volatile signed __int64 *)(v11 + 24384));
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
        MiSetPfnBlink(48 * v12 - 0x220000000000LL, v28, 1);
        v19 = *(_BYTE *)(v13 + 35);
        v7 = 48 * v12 - 0x220000000000LL;
        *(_QWORD *)v13 = 0LL;
        v8 = v29 + 1;
        *(_BYTE *)(v13 + 35) = v19 & 0xEF;
        ++v29;
        v28 = v12;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v34;
      if ( v8 == v34 )
        goto LABEL_27;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 24416));
LABEL_27:
    ++v5;
  }
  while ( v5 != v30 );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v8 == v4 || (v33 & 1) == 0 )
    return v7;
  if ( v7 )
  {
    do
    {
      v25 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL;
      if ( v25 == 0x3FFFFFFFFFLL )
        v26 = 0LL;
      else
        v26 = 48 * v25 - 0x220000000000LL;
      MiSetPfnBlink(v7, 0LL, 0);
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
      v7 = v26;
    }
    while ( v26 );
  }
  return 0LL;
}
