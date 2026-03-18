/*
 * XREFs of MiReleaseVadEventBlocks @ 0x140624980
 * Callers:
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiFreePhysicalView @ 0x140230018 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiGetAweInfoPartition @ 0x14054A894 (MiGetAweInfoPartition.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D3850 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406E15D8 (MiFreeRotateVadEvent.c)
 *     MiComputeAweCharges @ 0x1408D8140 (MiComputeAweCharges.c)
 *     MiFreePlaceholderVadEvent @ 0x1408DACA8 (MiFreePlaceholderVadEvent.c)
 *     MiFreeLargePageView @ 0x1408DCB50 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // r15d
  int v6; // r12d
  _KPROCESS *Process; // rsi
  __int64 *VadWakeList; // rbx
  int v9; // eax
  __int64 *v10; // rbp
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 AweInfoPartition; // rax
  unsigned __int64 v14; // r8
  int v15; // ecx

  v4 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadWakeList = MiGetVadWakeList(a1, -34, a3);
  if ( VadWakeList )
  {
    do
    {
      v9 = *((_DWORD *)VadWakeList + 16);
      v10 = (__int64 *)*VadWakeList;
      if ( (v9 & 0x10) != 0 )
      {
        v6 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
        v9 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v9 & 8) != 0 )
      {
        MiFreeRotateVadEvent(VadWakeList);
        v9 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v9 & 4) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
        v9 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v9 & 0x40) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
        v9 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v9 & 0x100) != 0 )
      {
        v11 = (_QWORD *)VadWakeList[4];
        v12 = VadWakeList[5];
        if ( (*v11 != -2LL || v11[1] != -2LL || v11[2] != -2LL) && MiComputeAweCharges(v11, VadWakeList + 1) )
        {
          AweInfoPartition = MiGetAweInfoPartition(v12);
          MiReturnResident(AweInfoPartition, v14);
        }
        if ( (*(_DWORD *)v12 & 1) == 0 )
          MiDereferenceControlArea(*(_QWORD *)(v12 + 32));
      }
      if ( (*((_DWORD *)VadWakeList + 16) & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag(VadWakeList, 0);
      VadWakeList = v10;
    }
    while ( v10 );
  }
  v15 = *(_DWORD *)(a1 + 48);
  if ( (v15 & 0x100000) != 0 && ((v15 & 0xC0000u) >= 0x80000 || (v15 & 0x400000) != 0) && (v15 & 0x70) == 0 && !v6 )
  {
    LOBYTE(v4) = a2 != 0;
    MiFreeLargePageView(Process, a1, 0LL, v4);
  }
  return MiFreePhysicalView((__int64)Process, a1);
}
