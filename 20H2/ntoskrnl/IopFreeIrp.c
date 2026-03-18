/*
 * XREFs of IopFreeIrp @ 0x140218F70
 * Callers:
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C81E0 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x14030E6FC (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1404FEFA0 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  char v7; // al
  __int16 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // al

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2980uLL, 0LL, 0LL);
  *(_WORD *)BugCheckParameter1 = 0;
  v4 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v4 & 0x40) != 0 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3);
    v4 = *(_BYTE *)(BugCheckParameter1 + 71);
  }
  if ( (v4 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
  }
  else
  {
    v5 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v5];
    }
    v7 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v7 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v7 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      v7 = *(_BYTE *)(BugCheckParameter1 + 71);
    }
    if ( (v7 & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v8 = *(_WORD *)(BugCheckParameter1 + 2), v8 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v8 == 72 * (char)IopMediumIrpStackLocations + 208
       || v8 == 280) )
    {
      v9 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v9 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        v10 = 2080LL;
        v11 = 2088LL;
      }
      else if ( (unsigned __int16)v9 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
      {
        v10 = 2048LL;
        v11 = 2056LL;
      }
      else
      {
        v10 = 2064LL;
        v11 = 2072LL;
      }
      *(_QWORD *)(BugCheckParameter1 + 56) = v9;
      v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10);
      ++*(_DWORD *)(v12 + 28);
      if ( *(_WORD *)v12 < *(_WORD *)(v12 + 16)
        || (++*(_DWORD *)(v12 + 32),
            v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v11),
            ++*(_DWORD *)(v12 + 28),
            *(_WORD *)v12 < *(_WORD *)(v12 + 16)) )
      {
        v13 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v13 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v13 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v12, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++*(_DWORD *)(v12 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
