/*
 * XREFs of MiLockPagableImageSection @ 0x1402248C0
 * Callers:
 *     PoRunDownDeviceObject @ 0x14026F858 (PoRunDownDeviceObject.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     HalpPowerStateCallback @ 0x1403A4210 (HalpPowerStateCallback.c)
 *     IopLiveDumpUnLockPages @ 0x140504D9C (IopLiveDumpUnLockPages.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     MmLockPagableSectionByHandle @ 0x1406F6300 (MmLockPagableSectionByHandle.c)
 *     IopLiveDumpLockPages @ 0x140895448 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1408AAEC4 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8 (PopDirectedDripsNotifyAppsAndServices.c)
 *     KiInitializeMTRR @ 0x140A45684 (KiInitializeMTRR.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MmUnlockLoadedModuleListShared @ 0x140224598 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402247F4 (MmLockLoadedModuleListShared.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x1406D4538 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  ULONG_PTR v6; // r8
  char *v7; // rsi
  PIMAGE_NT_HEADERS v8; // r8
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // r11
  unsigned __int64 SectionAlignment; // r10
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int8 v18; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 == 1 )
    return;
  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS() || (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    return;
  v4 = 0LL;
  v18 = 17;
  MmLockLoadedModuleListShared(&v18);
  v5 = (_QWORD *)qword_140C4CB60;
  if ( !qword_140C4CB60 )
    goto LABEL_10;
  while ( 1 )
  {
    v6 = *(v5 - 23);
    if ( BugCheckParameter2 > v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1) )
    {
      v5 = (_QWORD *)v5[1];
      goto LABEL_21;
    }
    if ( BugCheckParameter2 >= v6 )
      break;
    v5 = (_QWORD *)*v5;
LABEL_21:
    if ( !v5 )
      goto LABEL_10;
  }
  if ( v5 )
    v4 = v5 - 29;
LABEL_10:
  MmUnlockLoadedModuleListShared(v18);
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
  v7 = (char *)v4[6];
  v8 = RtlImageNtHeader(v7);
  BugCheckParameter4 = v8->FileHeader.NumberOfSections;
  v10 = (__int64)(BugCheckParameter2 - v8->FileHeader.SizeOfOptionalHeader - (_QWORD)v8 - 24) / 40;
  if ( (unsigned int)v10 >= (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v10, BugCheckParameter4);
  v11 = *(unsigned int *)(BugCheckParameter2 + 16);
  v12 = v4[28] + 4LL * (unsigned int)v10;
  v13 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (unsigned int)v11 < v13 )
    v11 = v13;
  v14 = (unsigned __int64)&v7[*(unsigned int *)(BugCheckParameter2 + 12)];
  SectionAlignment = v8->OptionalHeader.SectionAlignment;
  v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v17 = (((~(SectionAlignment - 1) & (v14 + SectionAlignment + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
  if ( (_DWORD)v2 == 1 )
    MiLockImageSection(v4, v12, v16, v17 - 0x98000000008LL);
  else
    MiUnlockImageSection(v12, v16, v17 - 0x98000000008LL, BugCheckParameter2);
}
