/*
 * XREFs of MiUnlockDriverPages @ 0x1408C4DC0
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F6F8 (MmWriteSystemImageTracepoint.c)
 *     MiMarkKernelImageCfgBits @ 0x1407731A4 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x1408C8DB4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE6A0 (MiUnapplyDriverHotPatch.c)
 *     MiUnlockEntireDriver @ 0x1408D0D74 (MiUnlockEntireDriver.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140228910 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1403954A0 (KeReservePrivilegedPages.c)
 *     MiUnlockCodePage @ 0x1403A1050 (MiUnlockCodePage.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 v4; // r8
  unsigned __int64 SetBits; // rax
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
      SetBits = RtlFindSetBitsEx(a1 + 3, 1uLL, v4);
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
