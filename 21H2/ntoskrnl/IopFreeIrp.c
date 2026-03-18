/*
 * XREFs of IopFreeIrp @ 0x140348640
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140A80820 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x140556A74 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1)
{
  char v2; // al
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  char v5; // al
  __int16 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // al

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x29CEuLL, 0LL, 0LL);
  *(_WORD *)BugCheckParameter1 = 0;
  v2 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v2 & 0x40) != 0 )
  {
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
    v2 = *(_BYTE *)(BugCheckParameter1 + 71);
  }
  if ( (v2 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
  }
  else
  {
    v3 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    v5 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v5 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      v5 = *(_BYTE *)(BugCheckParameter1 + 71);
    }
    if ( (v5 & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v6 = *(_WORD *)(BugCheckParameter1 + 2), v6 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v6 == 72 * (char)IopMediumIrpStackLocations + 208
       || v6 == 280) )
    {
      v7 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v7 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        v8 = 2080LL;
        v9 = 2088LL;
      }
      else if ( (unsigned __int16)v7 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
      {
        v8 = 2048LL;
        v9 = 2056LL;
      }
      else
      {
        v8 = 2064LL;
        v9 = 2072LL;
      }
      *(_QWORD *)(BugCheckParameter1 + 56) = v7;
      v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8);
      ++*(_DWORD *)(v10 + 28);
      if ( *(_WORD *)v10 < *(_WORD *)(v10 + 16)
        || (++*(_DWORD *)(v10 + 32),
            v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9),
            ++*(_DWORD *)(v10 + 28),
            *(_WORD *)v10 < *(_WORD *)(v10 + 16)) )
      {
        v11 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v11 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v11 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++*(_DWORD *)(v10 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
