/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x1408C9358
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1408C9274 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 *     VslPrepareDriverForPatch @ 0x1404FCF4C (VslPrepareDriverForPatch.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x14075C690 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x14075CAD0 (MiHandleDriverNonPagedSections.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 *     MiBackSingleImageWithPagefile @ 0x140780DD4 (MiBackSingleImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiApplyHotPatchToLoadedDriver(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char v7; // r12
  __int64 PteAddress; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  NTSTATUS result; // eax
  unsigned int *v12; // rbx
  void *v13; // rsi
  __int64 *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 SystemAddressForImage; // r13
  int active; // edi
  int v19; // r14d
  unsigned __int64 v20; // rax
  int v21; // r13d
  PVOID P; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v25; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int16 *v28; // [rsp+B8h] [rbp+48h]
  unsigned int v29; // [rsp+C8h] [rbp+58h]

  v28 = a2;
  v3 = *(_QWORD *)(a1 + 48);
  P = 0LL;
  v23 = 0LL;
  v27 = 0;
  v7 = 0;
  v25 = 0LL;
  v26 = 0LL;
  String1 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    PteAddress = MiGetPteAddress(v3);
    v10 = PteAddress + 8 * (((v9 >> 12) + ((v9 & 0xFFF) != 0) + 511LL) & 0xFFFFFFFFFFFFFE00uLL);
    if ( !(unsigned int)MiMakeZeroedPageTables(
                          v10,
                          v10 + 8 * (((unsigned int)dword_140C4CCF0 >> 12) + ((dword_140C4CCF0 & 0xFFF) != 0) - 1LL),
                          0,
                          12) )
      return -1073741670;
  }
  result = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v25, &v26, &String1);
  if ( result >= 0 )
  {
    result = MiObtainSectionForDriver(&String1, (__int64)a2, a3, 0x40000000u, (__int64 *)&P);
    if ( result == 272 )
    {
      if ( (*((_DWORD *)P + 49) & 0x20) == 0 )
        return 272;
      if ( *((_QWORD *)P + 35) == a1 )
        return MiApplyDriverHotPatch((__int64)P, a1);
      return -1073741791;
    }
    if ( result < 0 )
      return result;
    v12 = (unsigned int *)P;
    v13 = (void *)*((_QWORD *)P + 14);
    if ( !v13 )
    {
      ExFreePoolWithTag(P, 0);
      return -1073741792;
    }
    v14 = (__int64 *)MiSectionControlArea(*((_QWORD *)P + 14));
    v15 = *(_DWORD *)(*v14 + 8);
    v12[16] = v15 << 12;
    v29 = v15;
    SystemAddressForImage = MiGetSystemAddressForImage(v16, 0, &v27);
    if ( !SystemAddressForImage )
    {
      ObDereferenceObjectDeferDelete(v13);
      ExFreePoolWithTag(v12, 0);
      return -1073741670;
    }
    MiCheckPurgeAndUpMapCount((__int64)v14);
    *((_QWORD *)v12 + 6) = SystemAddressForImage;
    v19 = MiControlAreaRequiresCharge((__int64)v14, 3LL);
    if ( !v19 )
    {
      active = -1073740277;
      goto LABEL_18;
    }
    if ( v19 == 2 )
    {
      active = MiReferenceActiveSubsection(v14 + 16, 136, 0x11u);
      if ( active < 0 )
      {
        v19 = 1;
LABEL_18:
        if ( v12 )
        {
          if ( v19 == 2 && (v7 & 4) == 0 )
          {
            v20 = MiSectionControlArea(*((_QWORD *)v12 + 14));
            MiReturnCrossPartitionControlAreaCharges(v20);
          }
          MiUnloadSystemImage((__int64)v12, v7);
        }
        return active;
      }
    }
    active = MiMapSystemImage((__int64)v13, SystemAddressForImage, 0LL);
    if ( active < 0 )
      goto LABEL_18;
    _InterlockedExchangeAdd(&dword_140C4F010, v29);
    v12 = (unsigned int *)P;
    v21 = v27;
    v7 = 1;
    active = MiConstructLoaderEntry((__int64)P, (const void **)&v25, (const void **)&String1, 0, v27, &v23);
    if ( active < 0 )
      goto LABEL_18;
    ExFreePoolWithTag(v12, 0);
    v12 = v23;
    v7 = 5;
    if ( v19 == 2 )
      v23[49] |= 0x80u;
    active = VslPrepareDriverForPatch(*(_QWORD *)(a1 + 48));
    if ( active < 0 )
      goto LABEL_18;
    if ( !v21 )
      MiBackSingleImageWithPagefile((__int64)v12);
    active = MiHandleDriverNonPagedSections((__int64)v12, 0, 1);
    if ( active < 0 )
      goto LABEL_18;
    active = MiApplyDriverHotPatch((__int64)v12, a1);
    if ( active < 0 )
      goto LABEL_18;
    if ( (MiFlags & 0x80000) != 0 )
      v12[26] |= 0x2100u;
    MiDriverLoadSucceeded((__int64)v12, (__int64)v13, v28, (__int64)&String1, (__int64)&v25, 1);
    return 0;
  }
  return result;
}
