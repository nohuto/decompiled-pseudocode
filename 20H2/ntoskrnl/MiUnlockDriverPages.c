/*
 * XREFs of MiUnlockDriverPages @ 0x1408C7600
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MiMarkKernelImageCfgBits @ 0x14076F114 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x1408CB5F4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408D0EE0 (MiUnapplyDriverHotPatch.c)
 *     MiUnlockEntireDriver @ 0x1408D35B4 (MiUnlockEntireDriver.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     RtlFindSetBitsEx @ 0x1402873C0 (RtlFindSetBitsEx.c)
 *     KeReservePrivilegedPages @ 0x140395030 (KeReservePrivilegedPages.c)
 *     MiUnlockCodePage @ 0x1403A0790 (MiUnlockCodePage.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
