/*
 * XREFs of MiReleaseVadEventBlocks @ 0x1406ED390
 * Callers:
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x1406ED1F0 (MiRemoveVadCharges.c)
 * Callees:
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiDereferenceControlArea @ 0x1402D38B8 (MiDereferenceControlArea.c)
 *     MiFreePhysicalView @ 0x140317FB8 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiGetAweInfoPartition @ 0x14054C394 (MiGetAweInfoPartition.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406B1774 (MiFreeVadEventBitmapCharges.c)
 *     MiFreeRotateVadEvent @ 0x1406C1A28 (MiFreeRotateVadEvent.c)
 *     MiComputeAweCharges @ 0x1408D5900 (MiComputeAweCharges.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D8468 (MiFreePlaceholderVadEvent.c)
 *     MiFreeLargePageView @ 0x1408DA310 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r15d
  int v7; // r12d
  struct _KPROCESS *Process; // rsi
  __int64 *VadWakeList; // rbx
  int v10; // eax
  __int64 *v11; // rbp
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  __int64 AweInfoPartition; // rax
  unsigned __int64 v15; // r8
  int v16; // ecx

  v5 = 0;
  v7 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadWakeList = MiGetVadWakeList(a1, -34, a3, a4);
  if ( VadWakeList )
  {
    do
    {
      v10 = *((_DWORD *)VadWakeList + 16);
      v11 = (__int64 *)*VadWakeList;
      if ( (v10 & 0x10) != 0 )
      {
        v7 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
        v10 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v10 & 8) != 0 )
      {
        MiFreeRotateVadEvent((__int64)VadWakeList);
        v10 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v10 & 4) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, (__int64)VadWakeList);
        v10 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v10 & 0x40) != 0 )
      {
        MiFreeVadEventBitmapCharges(Process, (__int64)VadWakeList);
        v10 = *((_DWORD *)VadWakeList + 16);
      }
      if ( (v10 & 0x100) != 0 )
      {
        v12 = (_QWORD *)VadWakeList[4];
        v13 = VadWakeList[5];
        if ( (*v12 != -2LL || v12[1] != -2LL || v12[2] != -2LL) && MiComputeAweCharges(v12, VadWakeList + 1) )
        {
          AweInfoPartition = MiGetAweInfoPartition(v13);
          MiReturnResident(AweInfoPartition, v15);
        }
        if ( (*(_DWORD *)v13 & 1) == 0 )
          MiDereferenceControlArea(*(_QWORD *)(v13 + 32));
      }
      if ( (*((_DWORD *)VadWakeList + 16) & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag(VadWakeList, 0);
      VadWakeList = v11;
    }
    while ( v11 );
  }
  v16 = *(_DWORD *)(a1 + 48);
  if ( (v16 & 0x100000) != 0 && ((v16 & 0xC0000u) >= 0x80000 || (v16 & 0x400000) != 0) && (v16 & 0x70) == 0 && !v7 )
  {
    LOBYTE(v5) = a2 != 0;
    MiFreeLargePageView(Process, a1, 0LL, v5);
  }
  MiFreePhysicalView((__int64)Process, a1);
}
