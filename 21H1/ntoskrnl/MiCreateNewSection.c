/*
 * XREFs of MiCreateNewSection @ 0x140643004
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140281F70 (IoSetTopLevelIrp.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x1402C083C (MiReleaseImageSection.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiMakeImageReadOnly @ 0x1403508C0 (MiMakeImageReadOnly.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiRegQueryDWORD @ 0x1405C6D54 (MiRegQueryDWORD.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x14063B5E4 (MiValidateSectionSigningPolicy.c)
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x140643794 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x140643904 (MiCreateDataFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x14064414C (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x140645060 (MiParseComAndCetHeaders.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406DED08 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1408868EC (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(unsigned int *a1, _QWORD *a2)
{
  ULONG_PTR **v3; // rdi
  int v4; // ecx
  struct _FILE_OBJECT *v5; // r15
  char v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rsi
  ULONG_PTR *v9; // rdi
  int v10; // r14d
  int v12; // eax
  int v13; // r15d
  PFILE_OBJECT v14; // r12
  NTSTATUS DataFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v17; // r14
  signed __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r14
  unsigned int v21; // r8d
  int v22; // esi
  _QWORD *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // r12d
  __int64 v29; // rcx
  int v30; // r8d
  int Blink; // r13d
  int v32; // eax
  bool v33; // cf
  unsigned int v34; // eax
  _KPROCESS *CurrentProcess; // rax
  int v36; // r8d
  int v37; // r13d
  int v38; // eax
  unsigned int v39; // ecx
  char v40; // al
  int v41; // edx
  char v42; // r12
  int v43; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  PFILE_OBJECT v49; // r13
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  PMDL v53; // rbx
  struct _MDL *v54; // r15
  ULONG i; // esi
  unsigned int v56; // [rsp+28h] [rbp-D8h]
  char v57; // [rsp+50h] [rbp-B0h]
  char v58; // [rsp+60h] [rbp-A0h]
  char v59; // [rsp+60h] [rbp-A0h]
  char v60; // [rsp+61h] [rbp-9Fh] BYREF
  char v61[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v62; // [rsp+64h] [rbp-9Ch]
  int v63; // [rsp+68h] [rbp-98h]
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h]
  __int128 v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+90h] [rbp-70h] BYREF
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71[14]; // [rsp+B0h] [rbp-50h] BYREF

  v69 = a2;
  *((_QWORD *)&v65 + 1) = 0LL;
  v66 = 0LL;
  memset(v71, 0, sizeof(v71));
  v3 = (ULONG_PTR **)*((_QWORD *)a1 + 22);
  LOBYTE(v4) = 0;
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = *((_BYTE *)a1 + 24);
  v7 = a1[4];
  v8 = *((_QWORD *)a1 + 19);
  v62 = v4;
  v60 = 0;
  FileObject = v5;
  v63 = 0;
  v61[0] = 0;
  v58 = v6;
  LODWORD(v65) = 0;
  if ( v3 )
    v9 = *v3;
  else
    v9 = &MiSystemPartition;
  v10 = MiEnablePartitionMappedWrites(v9);
  if ( v10 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v12 = a1[43];
    v13 = v7 & 0x1000000;
    if ( (v7 & 0x1000000) != 0 )
    {
      v14 = FileObject;
      DataFileMap = MiCreateImageFileMap(
                      FileObject,
                      (__int64)v9,
                      v12,
                      *a1,
                      (__int64 *)&v65 + 1,
                      &MemoryDescriptorList,
                      (__int64)v71,
                      &v65);
    }
    else
    {
      v56 = v7;
      v14 = FileObject;
      DataFileMap = MiCreateDataFileMap(FileObject, a1[7], v56, v12, *a1);
    }
    ImageRequiredSigningLevel = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*((PIRP *)a1 + 23));
        FsRtlReleaseFile(v14);
        *a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v17 = *((_QWORD *)&v65 + 1);
    *v69 = *((_QWORD *)&v65 + 1);
    if ( v8 )
    {
      *((_QWORD *)a1 + 16) = v8;
    }
    else
    {
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), -1LL, -1LL);
      v17 = *((_QWORD *)&v65 + 1);
      *((_QWORD *)a1 + 16) = v18;
    }
    v19 = *a1;
    v20 = *(_QWORD *)v17;
    if ( (*a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v20 + 62) |= 1u;
      v19 = *a1;
    }
    LOWORD(v21) = v19;
    if ( (v19 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v13 || (v71[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v20 + 56) |= 0x20000000u;
      v21 = *a1;
    }
    if ( (v21 & 0x4000) != 0 )
      *(_DWORD *)(v20 + 56) |= 0x20000u;
    v22 = 2;
    v23 = (_QWORD *)MiSectionCreated((__int64)v14, v20, (__int64 *)MemoryDescriptorList);
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(FileObject);
      *a1 &= ~2u;
    }
    if ( !v13 )
      goto LABEL_135;
    v24 = *(_QWORD *)(*((_QWORD *)&v65 + 1) + 56LL);
    v70 = v24;
    if ( !LODWORD(v71[11]) && !HIDWORD(v71[11]) && !*(_BYTE *)(v24 + 50) )
      *(_BYTE *)(*((_QWORD *)&v65 + 1) + 15LL) |= 1u;
    if ( (*(_DWORD *)(v20 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x80000) != 0 )
      {
        dword_140C4CB58 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_138:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v20, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CB58 = 6;
        goto LABEL_138;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v20, v71, v61);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CB58 = 4;
      goto LABEL_138;
    }
    v26 = *a1;
    if ( (*a1 & 0x100) != 0 )
    {
      v27 = 4;
    }
    else if ( (v26 & 0x20) != 0 )
    {
      v27 = 1;
    }
    else if ( (v26 & 0x10) != 0 )
    {
      v27 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v27 = 0;
    }
    v28 = v27 | 0x10;
    v29 = v26 & 0x800;
    if ( !(_DWORD)v29 )
      v28 = v27;
    v67 = 0;
    if ( (int)MiRegQueryDWORD(v29, v25, &v67) >= 0 && v67 )
    {
      if ( (*a1 & 0x8400) != 0 && (*a1 & 0x810) == 0 )
      {
        Blink = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
        if ( v58 )
        {
          LOBYTE(v30) = v58;
          ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v28, v30, 0, (__int64)&v60);
          if ( ImageRequiredSigningLevel < 0 )
          {
LABEL_55:
            dword_140C4CB58 = 7;
            goto LABEL_138;
          }
          v58 = v60;
          *((_BYTE *)a1 + 24) = v60;
          v32 = v63;
          if ( (Blink & 0x800000) != 0 )
            v32 = 1;
          v63 = v32;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          v6 = v58;
          LOBYTE(v30) = 8;
          v62 = v30;
          goto LABEL_81;
        }
        v33 = (Blink & 0x2000000) != 0;
        v6 = v58;
        if ( v33 )
        {
          LOBYTE(v30) = 6;
          v62 = v30;
          goto LABEL_81;
        }
      }
    }
    else
    {
      v34 = *a1;
      if ( ((*a1 & 0x400) != 0 || (v34 & 0x8000) != 0) && (v34 & 0x10) == 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        LOBYTE(v36) = v6;
        v37 = (int)CurrentProcess[2].ReadyListHead.Blink;
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v28, v36, 0, (__int64)&v60);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_55;
        if ( (*a1 & 0x800) != 0 )
        {
          LOBYTE(v30) = v62;
        }
        else
        {
          if ( v58 )
          {
            v38 = v63;
            if ( (v37 & 0x800000) != 0 )
              v38 = 1;
            v63 = v38;
          }
          if ( (v37 & 0x1000000) != 0 )
          {
            LOBYTE(v30) = 8;
          }
          else
          {
            v30 = (unsigned __int8)v62;
            if ( (v37 & 0x2000000) != 0 )
              v30 = 6;
          }
          v62 = v30;
        }
        v6 = v60;
        *((_BYTE *)a1 + 24) = v60;
LABEL_81:
        v39 = *a1;
        if ( (*a1 & 0x80000) != 0 )
        {
          v40 = v6;
          v28 |= 0x40000000u;
          if ( !v6 )
            v40 = 4;
          v6 = v40;
        }
        v41 = v28 | 0x20000000;
        if ( (v39 & 0x400000) == 0 )
          v41 = v28;
        LODWORD(v69) = v41;
        if ( (MiFlags & 0x40000) != 0 )
        {
          v39 |= 0x8000u;
          *a1 = v39;
          if ( !v6 )
            v6 = 1;
        }
        if ( (v39 & 0x400) != 0 && v6 || (v39 & 0x8000) != 0 || (v59 = 0, *(char *)(v70 + 46) < 0) )
          v59 = 1;
        v42 = (v39 & 0x400) != 0 && (_BYTE)v30;
        if ( (v39 & 0x40) == 0 )
          v22 = (v39 & 0x20) != 0;
        v43 = 0;
        if ( (*(_DWORD *)(v20 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v45 = v66;
          }
          else
          {
            if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
            {
              ImageRequiredSigningLevel = 0;
              v45 = -1LL;
              v66 = -1LL;
            }
            else
            {
              v45 = v66;
            }
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140C4CB58 = 8;
              goto LABEL_138;
            }
          }
        }
        else
        {
          v45 = -1LL;
          v66 = -1LL;
        }
        if ( v59 == 1 || v42 == 1 )
        {
          if ( v45 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(DWORD2(v65), (unsigned int)v71, v65, v22, v45, 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140C4CB58 = 9;
              goto LABEL_138;
            }
            v43 = 1;
            if ( v61[0] == 1 )
              MiMakeImageReadOnly(v20, v46, v47, v48);
          }
          v57 = v6;
          v49 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (__int64)FileObject,
                                        v20,
                                        a1[42],
                                        *((_QWORD *)a1 + 20),
                                        (*a1 >> 11) & 1,
                                        (int)v69,
                                        v59,
                                        v42,
                                        v63,
                                        v57,
                                        v62);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140C4CB58 = 10;
            goto LABEL_138;
          }
          if ( v43 )
            goto LABEL_126;
          v45 = v66;
        }
        else
        {
          v49 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(DWORD2(v65), (unsigned int)v71, v65, v22, v45, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CB58 = 11;
          goto LABEL_138;
        }
        if ( v61[0] == 1 )
          MiMakeImageReadOnly(v20, v50, v51, v52);
LABEL_126:
        v53 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          do
          {
            if ( (v53->MdlFlags & 4) == 0 )
            {
              v54 = v53 + 1;
              for ( i = v53->ByteCount >> 12; i; --i )
              {
                if ( v54->Next != (struct _MDL *)-1LL )
                  MiFinalizeImageHeaderPage(48 * (__int64)v54->Next - 0x58000000000LL);
                v54 = (struct _MDL *)((char *)v54 + 8);
              }
            }
            v53 = v53->Next;
          }
          while ( v53 );
          v53 = MemoryDescriptorList;
        }
        MiDeleteImageCreationMdls(v53);
        v23 = (_QWORD *)MiReleaseImageSection((__int64)v49, v20);
LABEL_135:
        MiReleaseControlAreaWaiters(v23);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    LOBYTE(v30) = v62;
    goto LABEL_81;
  }
  if ( (*a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*((PIRP *)a1 + 23));
    FsRtlReleaseFile(v5);
    *a1 &= ~2u;
  }
  return (unsigned int)v10;
}
