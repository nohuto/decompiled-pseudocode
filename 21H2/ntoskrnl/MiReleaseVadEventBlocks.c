/*
 * XREFs of MiReleaseVadEventBlocks @ 0x1407B97B0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D804C (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406EB238 (MiFreeRotateVadEvent.c)
 *     MiComputeAweCharges @ 0x14097CA4C (MiComputeAweCharges.c)
 *     MiFreePlaceholderVadEvent @ 0x14097EFF0 (MiFreePlaceholderVadEvent.c)
 *     MiFreeLargePageView @ 0x140983198 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  _KPROCESS *Process; // r15
  int v6; // r14d
  _DWORD *VadWakeList; // rsi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // r12
  _QWORD *v11; // rcx
  __int64 v12; // r13
  __int64 ProcessPartition; // rax
  unsigned __int64 v14; // r8

  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0;
  VadWakeList = (_DWORD *)MiGetVadWakeList(a1, -546);
  if ( VadWakeList )
  {
    do
    {
      v9 = VadWakeList[16];
      v10 = *(_DWORD **)VadWakeList;
      if ( (v9 & 0x10) != 0 )
      {
        v6 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
        v9 = VadWakeList[16];
      }
      if ( (v9 & 8) != 0 )
      {
        MiFreeRotateVadEvent((__int64)VadWakeList);
        v9 = VadWakeList[16];
      }
      if ( (v9 & 4) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, (__int64)VadWakeList);
        v9 = VadWakeList[16];
      }
      if ( (v9 & 0x40) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, (__int64)VadWakeList);
        v9 = VadWakeList[16];
      }
      if ( (v9 & 0x100) != 0 )
      {
        v11 = (_QWORD *)*((_QWORD *)VadWakeList + 4);
        v12 = *((_QWORD *)VadWakeList + 5);
        if ( (*v11 != -2LL || v11[1] != -2LL || v11[2] != -2LL) && MiComputeAweCharges(v11, VadWakeList + 2) )
        {
          ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
          MiReturnResident(ProcessPartition, v14);
        }
        if ( (*(_DWORD *)(v12 + 8) & 1) == 0 )
          MiDereferenceControlArea(*(_QWORD *)(v12 + 40));
      }
      if ( (VadWakeList[16] & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag(VadWakeList, 0);
      VadWakeList = v10;
    }
    while ( v10 );
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( (v8 & 0x200000) != 0 && ((v8 & 0x180000u) >= 0x100000 || (v8 & 0x800000) != 0) && (v8 & 0x70) == 0 && !v6 )
  {
    LOBYTE(v3) = a2 != 0;
    MiFreeLargePageView(Process, a1, 0LL, v3);
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
      --*(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 296);
  }
}
