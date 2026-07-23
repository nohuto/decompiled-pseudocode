/*
 * XREFs of MiUnlockDriverPages @ 0x1408C4F20
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiMarkKernelImageCfgBits @ 0x140773364 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE800 (MiUnapplyDriverHotPatch.c)
 *     MiUnlockEntireDriver @ 0x1408D0ED4 (MiUnlockEntireDriver.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x1402CD210 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1403955F0 (KeReservePrivilegedPages.c)
 *     MiUnlockCodePage @ 0x1403A11A0 (MiUnlockCodePage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 PteAddress; // r14
  ULONG64 v4; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v6; // rsi
  void *v7; // rcx

  if ( a1[4] )
  {
    v2 = *a1;
    if ( (a1[7] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v2 + 48));
    v4 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(a1 + 3), 1uLL, v4);
      v6 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 14) >> 1) & 1);
      v4 = v6;
      _bittestandreset64((signed __int64 *)a1[4], v6);
    }
    ExFreePoolWithTag((PVOID)a1[4], 0);
    a1[4] = 0LL;
    v7 = (void *)a1[6];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      a1[6] = 0LL;
    }
  }
}
