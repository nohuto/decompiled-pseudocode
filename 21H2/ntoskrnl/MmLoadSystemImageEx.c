/*
 * XREFs of MmLoadSystemImageEx @ 0x14075BCBC
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1403A75D8 (IopLoadCrashdumpDriver.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     MmLoadSystemImage @ 0x14075BC80 (MmLoadSystemImage.c)
 *     IopLoadCrashdmpImage @ 0x14078EBF0 (IopLoadCrashdmpImage.c)
 *     MiLoadImportDll @ 0x1407AC5E0 (MiLoadImportDll.c)
 *     PnprLoadPluginDriver @ 0x1408ADFA8 (PnprLoadPluginDriver.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiSetImageProtection @ 0x140297B18 (MiSetImageProtection.c)
 *     IoIsDeviceEjectable @ 0x14029AA0C (IoIsDeviceEjectable.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x140535A64 (MiValidateStrongCodeDriverImage.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiFinalizeDriverImage @ 0x14075BC48 (MiFinalizeDriverImage.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x14075C690 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x14075CA08 (MiApplyRequiredDriverHotPatches.c)
 *     MiFinalizeDriverCfgState @ 0x14075CA78 (MiFinalizeDriverCfgState.c)
 *     MiHandleDriverNonPagedSections @ 0x14075CAD0 (MiHandleDriverNonPagedSections.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFinalizeImageRetpolineState @ 0x14075CE48 (MiFinalizeImageRetpolineState.c)
 *     MiProcessLoadConfigForDriver @ 0x14075CEFC (MiProcessLoadConfigForDriver.c)
 *     MiResolveImageImports @ 0x14075D184 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x140771048 (MiUseLargeDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x140780DD4 (MiBackSingleImageWithPagefile.c)
 *     MiCompactServiceTable @ 0x14078A1E8 (MiCompactServiceTable.c)
 *     MiRelocateAmount @ 0x1407D5604 (MiRelocateAmount.c)
 *     MiLogFailedDriverLoad @ 0x1408C7F00 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C812C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiCreatePatchTableProtos @ 0x1408C9A48 (MiCreatePatchTableProtos.c)
 *     MiFreePatchTableProtos @ 0x1408CA024 (MiFreePatchTableProtos.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408DAABC (MiSessionApplyNonPagedImageCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  struct _LIST_ENTRY *v10; // rax
  int v11; // r15d
  signed int active; // ebx
  char v13; // r13
  int v14; // eax
  _QWORD *v15; // rdi
  void *v16; // rcx
  __int64 *v17; // r12
  unsigned int v18; // esi
  char v19; // bl
  unsigned __int64 v20; // r13
  struct _KTHREAD *v21; // rsi
  __int64 v22; // r14
  __int64 *v23; // rcx
  char v24; // dl
  int v25; // eax
  PVOID v26; // r8
  void *v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // esi
  int inserted; // eax
  unsigned __int64 v32; // rax
  void *PatchTableProtos; // rax
  PIMAGE_NT_HEADERS v35; // rsi
  unsigned int TimeDateStamp; // eax
  PVOID v37; // rcx
  ULONG_PTR v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // r15
  _QWORD *v42; // rbx
  char v43; // [rsp+30h] [rbp-D0h]
  char v44[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v45; // [rsp+34h] [rbp-CCh]
  int v46; // [rsp+38h] [rbp-C8h]
  char v47; // [rsp+3Ch] [rbp-C4h]
  int v48; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *Lock; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v51; // [rsp+58h] [rbp-A8h]
  __int64 SystemAddressForImage; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h]
  __int64 *v55; // [rsp+78h] [rbp-88h]
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v57; // [rsp+90h] [rbp-70h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+98h] [rbp-68h]
  PVOID v59[2]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v60[14]; // [rsp+B0h] [rbp-50h] BYREF
  char v63; // [rsp+1B8h] [rbp+B8h]

  v57 = 0LL;
  v51 = 0LL;
  v63 = 0;
  v58 = 0LL;
  v47 = 0;
  v48 = 1;
  v50 = 1;
  *(_OWORD *)v59 = 0LL;
  String1 = 0LL;
  *a6 = 0LL;
  v60[0] = 0LL;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals(a1, a2) + 1176) )
  {
    v10 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v58 = PsAttachSiloToCurrentThread(v10);
    v47 = 1;
  }
  v11 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_10;
LABEL_5:
    active = -1073741582;
    goto LABEL_66;
  }
  if ( (a4 & 2) != 0 || (a4 & 0x80000004) == 4 )
    goto LABEL_5;
  if ( (PsGetCurrentProcess()[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
  {
    active = -1073741801;
    goto LABEL_66;
  }
LABEL_10:
  active = MiGenerateSystemImageNames(a1, a2, a3, &String1, v60, v59);
  if ( active < 0 )
    goto LABEL_66;
  v13 = 0;
  v46 = 1;
  P = 0LL;
  v44[0] = 1;
  v43 = 0;
  v45 = 0;
  Lock = MmAcquireLoadLock();
  v14 = MiObtainSectionForDriver((PCUNICODE_STRING)v59, &P);
  v15 = P;
  active = v14;
  if ( v14 < 0 )
    goto LABEL_116;
  v16 = (void *)*((_QWORD *)P + 14);
  Object = v16;
  if ( v16 )
  {
    v17 = (__int64 *)MiSectionControlArea((__int64)v16);
    v18 = *(_DWORD *)(*v17 + 8);
  }
  else
  {
    v17 = 0LL;
    v18 = 0;
  }
  if ( active )
  {
    v23 = v15 + 6;
    v20 = v15[6];
    SystemAddressForImage = v20;
    v55 = v15 + 6;
    if ( (a4 & 1) != 0 )
    {
      inserted = MiSessionInsertImage(v20, v17);
      active = inserted;
      if ( inserted < 0 )
      {
LABEL_37:
        MmReleaseLoadLock((__int64)Lock);
        goto LABEL_61;
      }
      if ( inserted == 272 )
      {
LABEL_42:
        *a5 = v15;
        *a6 = v20;
        if ( (v15[13] & 0x4000000) != 0 )
          active = -1073741411;
        else
          active = v11 == 0 ? 0xC000010E : 0;
        goto LABEL_37;
      }
      v23 = v55;
      v24 = 1;
      v43 = 1;
    }
    else
    {
      v24 = 0;
    }
    if ( active != 272 )
    {
      ++*((_WORD *)v15 + 54);
      v19 = 0;
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  v19 = 1;
  v63 = 1;
  *((_DWORD *)v15 + 16) = v18 << 12;
  SystemAddressForImage = MiGetSystemAddressForImage(v16, a4, &v50);
  v20 = SystemAddressForImage;
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(Object);
    ExFreePoolWithTag(v15, 0);
    v21 = Lock;
    active = -1073741670;
    v22 = a1;
LABEL_59:
    MmReleaseLoadLock((__int64)v21);
    if ( !v44[0] )
      MiLogFailedDriverLoad(v22, 0LL, 0LL, (unsigned int)active);
    goto LABEL_61;
  }
  MiCheckPurgeAndUpMapCount((__int64)v17);
  v23 = v15 + 6;
  v24 = a4 & 1;
  v55 = v15 + 6;
  v15[6] = v20;
  v43 = a4 & 1;
  if ( !(_BYTE)v11 )
  {
    v25 = MiControlAreaRequiresCharge((__int64)v17, 3LL);
    v46 = v25;
    if ( !v25 )
    {
      active = -1073740277;
LABEL_52:
      v13 = v45;
LABEL_53:
      v21 = Lock;
      v22 = a1;
      goto LABEL_54;
    }
    if ( v25 == 2 )
    {
      active = MiReferenceActiveSubsection(v17 + 16, 136, 0x11u);
      if ( active < 0 )
      {
        v13 = v45;
        v25 = 1;
        v21 = Lock;
        v22 = a1;
        goto LABEL_112;
      }
    }
    v48 = v50;
    goto LABEL_25;
  }
  v48 = v50;
LABEL_46:
  if ( v24 != 1 || !dword_140C4CCF0 )
  {
LABEL_25:
    v26 = v51;
    goto LABEL_26;
  }
  if ( v19 == 1 )
  {
    if ( !(unsigned int)MiCreateSessionDriverProtos(v17, *v23, 0LL)
      || (PatchTableProtos = (void *)MiCreatePatchTableProtos(), (v51 = PatchTableProtos) == 0LL) )
    {
      active = -1073741670;
      goto LABEL_51;
    }
    v26 = PatchTableProtos;
  }
  else
  {
    v26 = (PVOID)v15[36];
    v51 = v26;
  }
LABEL_26:
  active = MiMapSystemImage(Object, v20, v26, a4);
  if ( active < 0 )
  {
LABEL_51:
    v25 = v46;
    goto LABEL_52;
  }
  if ( (a4 & 1) == 0 )
  {
    _InterlockedExchangeAdd(&dword_140C4F010, v18);
    v15 = P;
    v48 = v50;
  }
  v27 = (void *)SystemAddressForImage;
  v28 = 0LL;
  v45 = 1;
  if ( (a4 & 0x21) == 0
    && SystemAddressForImage == *(_QWORD *)(*v17 + 32)
    && (unsigned int)MiUseLargeDriverPage(&String1)
    && (v29 = MiMapSystemImageWithLargePage(Object, v18, v27), (v28 = v29) != 0) )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD88 + 3, -v18);
    v30 = v50;
    v27 = (void *)v29;
    v15 = P;
    SystemAddressForImage = v29;
    v48 = v50;
    *v55 = v29;
  }
  else
  {
    v30 = v48;
  }
  v44[0] = 0;
  if ( v63 != 1 )
    goto LABEL_84;
  v35 = RtlImageNtHeader(v27);
  if ( !v35 )
  {
    active = -1073741279;
    goto LABEL_51;
  }
  if ( v35->FileHeader.Machine != 0x8664 || v35->OptionalHeader.Magic != 523 )
  {
    active = -1073741520;
    goto LABEL_51;
  }
  if ( (MiFlags & 0x10000) == 0 || (active = MiValidateStrongCodeDriverImage((__int64)v35, a4), active >= 0) )
  {
    v30 = v48;
    active = MiConstructLoaderEntry((_DWORD)v15, (unsigned int)&String1, (unsigned int)v59, a4, v48, (__int64)&v57);
    if ( active < 0 )
      goto LABEL_51;
    ExFreePoolWithTag(v15, 0);
    v37 = v51;
    v15 = v57;
    if ( v51 )
    {
      v51 = 0LL;
      v57[36] = v37;
    }
LABEL_84:
    v45 = 5;
    if ( v46 == 2 )
      *((_DWORD *)v15 + 49) |= 0x80u;
    if ( !v28 && (a4 & 1) == 0 )
    {
      if ( !v30 )
        goto LABEL_93;
      v38 = MiReferenceControlAreaFile((__int64)v17);
      if ( IoIsDeviceEjectable(*(_QWORD *)(v38 + 8)) || (*(_DWORD *)(v39 + 52) & 0x11) != 0 )
        v30 = 0;
      MiDereferenceControlAreaFile((__int64)v17, v40);
      if ( !v30 )
LABEL_93:
        MiBackSingleImageWithPagefile(v15);
    }
    active = MiResolveImageImports((_DWORD)v15, a2, (unsigned int)v60, (unsigned int)&String1, (__int64)v44);
    if ( active < 0
      || (active = MiProcessLoadConfigForDriver(v15, v17 + 16), active < 0)
      || (active = MiFinalizeImageRetpolineState(v15), active < 0) )
    {
      v13 = v45;
    }
    else
    {
      v41 = SystemAddressForImage;
      if ( (*(_BYTE *)(*(_QWORD *)(*v17 + 56) + 46LL) & 0x40) == 0 )
      {
        v42 = (_QWORD *)(SystemAddressForImage + *(unsigned int *)(*(_QWORD *)(v17[12] + 32) + 64LL));
        MiSetImageProtection((__int64)v15, (unsigned __int64)v42, 8u);
        *v42 = v41 - MiRelocateAmount(v17);
        if ( v17[18] )
          MiSetImageProtection((__int64)v15, (unsigned __int64)v42, 8u);
      }
      active = MiFinalizeDriverImage((__int64)v15);
      v13 = 23;
      if ( active >= 0 )
      {
        active = MiApplyImportOptimizationToRuntimeDriver(v15, v17, a4);
        if ( active >= 0 )
        {
          if ( v43 != 1 || (a4 & 4) == 0 || (active = MiCompactServiceTable(v15), active >= 0) )
          {
            active = MiHandleDriverNonPagedSections(v15, a4, 1LL);
            if ( active >= 0 )
            {
              v13 = 31;
              if ( v43 == 1 )
                MiSessionApplyNonPagedImageCharges(v41);
              active = MiFinalizeDriverCfgState(v15, a4, v17 + 16);
              if ( active >= 0 )
              {
                active = MiApplyRequiredDriverHotPatches(v15);
                if ( active >= 0 )
                {
                  v22 = a1;
                  MiDriverLoadSucceeded((_DWORD)v15, (_DWORD)Object, a1, (unsigned int)v59, (__int64)&String1, v63);
                  v21 = Lock;
                  MmReleaseLoadLock((__int64)Lock);
                  active = 0;
                  *a5 = v15;
                  *a6 = v41;
                  goto LABEL_111;
                }
              }
            }
          }
        }
      }
    }
LABEL_116:
    v25 = v46;
    goto LABEL_53;
  }
  memset(&v60[1], 0, 0xA0uLL);
  DWORD2(v60[8]) = v35->OptionalHeader.CheckSum;
  TimeDateStamp = v35->FileHeader.TimeDateStamp;
  *(UNICODE_STRING *)((char *)&v60[6] + 8) = String1;
  HIDWORD(v60[10]) = TimeDateStamp;
  MiLogStrongCodeDriverLoadFailure("SectionWXable");
  v13 = v45;
  v21 = Lock;
  v22 = a1;
LABEL_111:
  v25 = v46;
LABEL_112:
  if ( active < 0 )
  {
LABEL_54:
    if ( v15 )
    {
      if ( v25 == 2 && (v13 & 4) == 0 )
      {
        v32 = MiSectionControlArea(v15[14]);
        MiReturnCrossPartitionControlAreaCharges(v32);
      }
      MiUnloadSystemImage((__int64)v15, v13);
    }
    goto LABEL_59;
  }
LABEL_61:
  if ( a2 )
    ExFreePoolWithTag(v59[1], 0);
  if ( v63 == 1 && v51 )
    MiFreePatchTableProtos(v51);
LABEL_66:
  if ( v47 )
    PsDetachSiloFromCurrentThread(v58);
  return (unsigned int)active;
}
