/*
 * XREFs of MiInitializePartialVad @ 0x14079D7A8
 * Callers:
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiAdvanceVadView @ 0x1402ED77C (MiAdvanceVadView.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiResidentPagesForSpan @ 0x1406DD778 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406E97B4 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14096D000 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(volatile signed __int64 *P, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rdi
  int v6; // r12d
  __int64 v7; // r13
  char v8; // dl
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rdi
  int v13; // eax
  __int64 result; // rax
  int PlaceholderStorage; // edi
  unsigned int v16; // eax
  ULONG_PTR *ProcessPartition; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v19 = v4;
  memmove(
    (void *)P,
    (const void *)v2,
    (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  *((_DWORD *)P + 9) = 0;
  v8 = 15;
  *((_QWORD *)P + 7) &= 0xFuLL;
  *((_QWORD *)P + 2) = -2LL;
  v9 = *(unsigned int *)(v2 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  if ( (v9 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    *((_DWORD *)P + 13) = *((_DWORD *)P + 13) & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    *((_DWORD *)P + 13) &= 0x80000000;
    v8 = 0;
  }
  *((_BYTE *)P + 34) = v8;
  v10 = *((_DWORD *)P + 12);
  *((_QWORD *)P + 5) = 0LL;
  if ( (v10 & 0x70) != 0x40 || (unsigned int)MiCreateRotateView((__int64)P) )
  {
    if ( MiLocateVadEvent(v2, 128LL) )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(P);
      if ( PlaceholderStorage < 0 )
      {
        if ( (P[6] & 0x70) == 0x40 )
          MiFreeRotateView(P);
        goto LABEL_33;
      }
      v4 = v19;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( v6 == 1 || v6 == 3 && !*(_QWORD *)a2 )
    {
      v12 = ((unsigned __int64)(v4 + 1) >> 12)
          - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    }
    else
    {
      *((_DWORD *)P + 7) = (unsigned __int64)(v7 - 1) >> 12;
      *((_BYTE *)P + 33) = (unsigned __int64)(v7 - 1) >> 44;
      v12 = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 5), 0LL);
    MiAdvanceVadView((__int64)P, v12);
    if ( (_InterlockedExchangeAdd64(P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 5);
    KeAbPostRelease((ULONG_PTR)(P + 5));
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v16 = P[8] & 0xFDFFFFFF;
      *((_QWORD *)P + 15) = 0LL;
      *((_DWORD *)P + 16) = v16;
    }
    v13 = P[6] & 0x70;
    if ( v13 != 16 && v13 != 64
      || !MiResidentPagesForSpan(
            (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0)
      || (ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process),
          (unsigned int)MiChargeResident(ProcessPartition, v18, 128LL)) )
    {
      *P = *(_QWORD *)a2;
      result = 0LL;
      *(_QWORD *)a2 = P;
      return result;
    }
    if ( (P[6] & 0x70) == 0x40 )
      MiFreeRotateView(P);
    if ( v11 )
      MiFreePlaceholderStorage((__int64)P);
  }
  PlaceholderStorage = -1073741670;
LABEL_33:
  ExFreePoolWithTag((PVOID)P, 0);
  return (unsigned int)PlaceholderStorage;
}
