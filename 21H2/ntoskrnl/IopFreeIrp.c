/*
 * XREFs of IopFreeIrp @ 0x14035E2C0
 * Callers:
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C61D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x140500AA4 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v6; // al
  __int16 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // al

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2636uLL, 0LL, 0LL);
  *(_WORD *)BugCheckParameter1 = 0;
  v3 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v3 & 0x40) != 0 )
  {
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
    v3 = *(_BYTE *)(BugCheckParameter1 + 71);
  }
  if ( (v3 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1, a2);
  }
  else
  {
    v4 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v4];
    }
    v6 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v6 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v6 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      v6 = *(_BYTE *)(BugCheckParameter1 + 71);
    }
    if ( (v6 & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v7 = *(_WORD *)(BugCheckParameter1 + 2), v7 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v7 == 72 * (char)IopMediumIrpStackLocations + 208
       || v7 == 280) )
    {
      v8 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v8 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v8 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v9 = 2064LL;
          v10 = 2072LL;
        }
        else
        {
          v9 = 2048LL;
          v10 = 2056LL;
        }
      }
      else
      {
        v9 = 2080LL;
        v10 = 2088LL;
      }
      *(_QWORD *)(BugCheckParameter1 + 56) = v8;
      v11 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9);
      ++*(_DWORD *)(v11 + 28);
      if ( *(_WORD *)v11 < *(_WORD *)(v11 + 16)
        || (++*(_DWORD *)(v11 + 32),
            v11 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10),
            ++*(_DWORD *)(v11 + 28),
            *(_WORD *)v11 < *(_WORD *)(v11 + 16)) )
      {
        v12 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v12 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v12 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v11, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++*(_DWORD *)(v11 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
