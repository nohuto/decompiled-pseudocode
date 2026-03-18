/*
 * XREFs of MiUnlockDriverPages @ 0x14080C400
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x1405A29F8 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x14080C354 (MiCompleteSecureDriverLoad.c)
 *     MiUnlockEntireDriver @ 0x140970D2C (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140972700 (MiApplySingleSessionPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140256158 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1403A147C (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(unsigned __int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 v7; // r8
  unsigned __int64 SetBits; // rax
  unsigned __int64 v9; // rsi

  v2 = (void *)a1[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[7] = 0LL;
  }
  v3 = (void *)a1[9];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[9] = 0LL;
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[11] = 0LL;
  }
  if ( a1[5] )
  {
    v5 = *a1;
    if ( (a1[12] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 48));
    v7 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 4, 1uLL, v7);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      v7 = v9;
      _bittestandreset64((signed __int64 *)a1[5], v9);
    }
    ExFreePoolWithTag((PVOID)a1[5], 0);
    a1[5] = 0LL;
  }
}
