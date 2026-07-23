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
  unsigned int v4; // ecx
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
  int v35; // r13d
  int v36; // eax
  unsigned int v37; // ecx
  char v38; // al
  int v39; // edx
  char v40; // r12
  int v41; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  PFILE_OBJECT v47; // r13
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  PMDL v51; // rbx
  struct _MDL *v52; // r15
  ULONG i; // esi
  unsigned int v54; // [rsp+28h] [rbp-D8h]
  char v55; // [rsp+50h] [rbp-B0h]
  char v56; // [rsp+60h] [rbp-A0h]
  char v57; // [rsp+60h] [rbp-A0h]
  _BYTE v58[15]; // [rsp+61h] [rbp-9Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h]
  __int128 v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+90h] [rbp-70h] BYREF
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66[14]; // [rsp+B0h] [rbp-50h] BYREF

  v64 = a2;
  *((_QWORD *)&v60 + 1) = 0LL;
  v61 = 0LL;
  memset(v66, 0, sizeof(v66));
  v3 = (ULONG_PTR **)*((_QWORD *)a1 + 22);
  LOBYTE(v4) = 0;
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = *((_BYTE *)a1 + 24);
  v7 = a1[4];
  v8 = *((_QWORD *)a1 + 19);
  *(_QWORD *)&v58[3] = v4;
  v58[0] = 0;
  FileObject = v5;
  v58[1] = 0;
  v56 = v6;
  LODWORD(v60) = 0;
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
                      (__int64 *)&v60 + 1,
                      &MemoryDescriptorList,
                      (__int64)v66,
                      &v60);
    }
    else
    {
      v54 = v7;
      v14 = FileObject;
      DataFileMap = MiCreateDataFileMap(FileObject, a1[7], v54, v12, *a1);
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
    v17 = *((_QWORD *)&v60 + 1);
    *v64 = *((_QWORD *)&v60 + 1);
    if ( v8 )
    {
      *((_QWORD *)a1 + 16) = v8;
    }
    else
    {
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), -1LL, -1LL);
      v17 = *((_QWORD *)&v60 + 1);
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
    if ( (v19 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v13 || (v66[1] & 0xFFF) == 0) )
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
      goto LABEL_134;
    v24 = *(_QWORD *)(*((_QWORD *)&v60 + 1) + 56LL);
    v65 = v24;
    if ( !v66[11] && !*(_BYTE *)(v24 + 50) )
      *(_BYTE *)(*((_QWORD *)&v60 + 1) + 15LL) |= 1u;
    if ( (*(_DWORD *)(v20 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x80000) != 0 )
      {
        dword_140C4CB58 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_137:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v20, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CB58 = 6;
        goto LABEL_137;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v20, v66, &v58[1]);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CB58 = 4;
      goto LABEL_137;
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
    v62 = 0;
    if ( (int)MiRegQueryDWORD(v29, v25, &v62) >= 0 && v62 )
    {
      if ( (*a1 & 0x8400) != 0 && (*a1 & 0x810) == 0 )
      {
        Blink = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
        if ( v56 )
        {
          ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v58);
          if ( ImageRequiredSigningLevel < 0 )
          {
LABEL_54:
            dword_140C4CB58 = 7;
            goto LABEL_137;
          }
          v56 = v58[0];
          *((_BYTE *)a1 + 24) = v58[0];
          v32 = *(_DWORD *)&v58[7];
          if ( (Blink & 0x800000) != 0 )
            v32 = 1;
          *(_DWORD *)&v58[7] = v32;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          v6 = v56;
          LOBYTE(v30) = 8;
          *(_DWORD *)&v58[3] = v30;
          goto LABEL_80;
        }
        v33 = (Blink & 0x2000000) != 0;
        v6 = v56;
        if ( v33 )
        {
          LOBYTE(v30) = 6;
          *(_DWORD *)&v58[3] = v30;
          goto LABEL_80;
        }
      }
    }
    else
    {
      v34 = *a1;
      if ( ((*a1 & 0x400) != 0 || (v34 & 0x8000) != 0) && (v34 & 0x10) == 0 )
      {
        v35 = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v58);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_54;
        if ( (*a1 & 0x800) != 0 )
        {
          LOBYTE(v30) = v58[3];
        }
        else
        {
          if ( v56 )
          {
            v36 = *(_DWORD *)&v58[7];
            if ( (v35 & 0x800000) != 0 )
              v36 = 1;
            *(_DWORD *)&v58[7] = v36;
          }
          if ( (v35 & 0x1000000) != 0 )
          {
            LOBYTE(v30) = 8;
          }
          else
          {
            v30 = v58[3];
            if ( (v35 & 0x2000000) != 0 )
              v30 = 6;
          }
          *(_DWORD *)&v58[3] = v30;
        }
        v6 = v58[0];
        *((_BYTE *)a1 + 24) = v58[0];
LABEL_80:
        v37 = *a1;
        if ( (*a1 & 0x80000) != 0 )
        {
          v38 = v6;
          v28 |= 0x40000000u;
          if ( !v6 )
            v38 = 4;
          v6 = v38;
        }
        v39 = v28 | 0x20000000;
        if ( (v37 & 0x400000) == 0 )
          v39 = v28;
        LODWORD(v64) = v39;
        if ( (MiFlags & 0x40000) != 0 )
        {
          v37 |= 0x8000u;
          *a1 = v37;
          if ( !v6 )
            v6 = 1;
        }
        if ( (v37 & 0x400) != 0 && v6 || (v37 & 0x8000) != 0 || (v57 = 0, *(char *)(v65 + 46) < 0) )
          v57 = 1;
        v40 = (v37 & 0x400) != 0 && (_BYTE)v30;
        if ( (v37 & 0x40) == 0 )
          v22 = (v37 & 0x20) != 0;
        v41 = 0;
        if ( (*(_DWORD *)(v20 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v43 = v61;
          }
          else
          {
            if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
            {
              ImageRequiredSigningLevel = 0;
              v43 = -1LL;
              v61 = -1LL;
            }
            else
            {
              v43 = v61;
            }
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140C4CB58 = 8;
              goto LABEL_137;
            }
          }
        }
        else
        {
          v43 = -1LL;
          v61 = -1LL;
        }
        if ( v57 == 1 || v40 == 1 )
        {
          if ( v43 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(DWORD2(v60), (unsigned int)v66, v60, v22, v43, 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140C4CB58 = 9;
              goto LABEL_137;
            }
            v41 = 1;
            if ( v58[1] == 1 )
              MiMakeImageReadOnly(v20, v44, v45, v46);
          }
          v55 = v6;
          v47 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (__int64)FileObject,
                                        v20,
                                        a1[42],
                                        *((_QWORD *)a1 + 20),
                                        (*a1 >> 11) & 1,
                                        (int)v64,
                                        v57,
                                        v40,
                                        *(int *)&v58[7],
                                        v55,
                                        v58[3]);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140C4CB58 = 10;
            goto LABEL_137;
          }
          if ( v41 )
            goto LABEL_125;
          v43 = v61;
        }
        else
        {
          v47 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(DWORD2(v60), (unsigned int)v66, v60, v22, v43, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CB58 = 11;
          goto LABEL_137;
        }
        if ( v58[1] == 1 )
          MiMakeImageReadOnly(v20, v48, v49, v50);
LABEL_125:
        v51 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          do
          {
            if ( (v51->MdlFlags & 4) == 0 )
            {
              v52 = v51 + 1;
              for ( i = v51->ByteCount >> 12; i; --i )
              {
                if ( v52->Next != (struct _MDL *)-1LL )
                  MiFinalizeImageHeaderPage(48 * (__int64)v52->Next - 0x58000000000LL);
                v52 = (struct _MDL *)((char *)v52 + 8);
              }
            }
            v51 = v51->Next;
          }
          while ( v51 );
          v51 = MemoryDescriptorList;
        }
        MiDeleteImageCreationMdls(v51);
        v23 = (_QWORD *)MiReleaseImageSection((__int64)v47, v20);
LABEL_134:
        MiReleaseControlAreaWaiters(v23);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    LOBYTE(v30) = v58[3];
    goto LABEL_80;
  }
  if ( (*a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*((PIRP *)a1 + 23));
    FsRtlReleaseFile(v5);
    *a1 &= ~2u;
  }
  return (unsigned int)v10;
}
