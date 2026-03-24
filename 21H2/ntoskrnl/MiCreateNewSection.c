/*
 * XREFs of MiCreateNewSection @ 0x1406D2BC0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiMakeImageReadOnly @ 0x1402694F0 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x1402E93C0 (MiReleaseImageSection.c)
 *     IoSetTopLevelIrp @ 0x140356C20 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MiCreateDataFileMap @ 0x14061BFD4 (MiCreateDataFileMap.c)
 *     MiParseComAndCetHeaders @ 0x1406D27F4 (MiParseComAndCetHeaders.c)
 *     MiEnablePartitionMappedWrites @ 0x1406D3284 (MiEnablePartitionMappedWrites.c)
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x1406D4ED4 (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     FsRtlReleaseFile @ 0x140707A70 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x140714144 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x140714ACC (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088ACFC (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, _QWORD *a2)
{
  ULONG_PTR **v4; // rdi
  struct _FILE_OBJECT *v5; // r12
  int v6; // r15d
  LARGE_INTEGER v7; // rsi
  ULONG_PTR *v8; // rdi
  int v9; // r14d
  int v11; // r12d
  NTSTATUS ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  struct _FILE_OBJECT *v18; // r13
  int v19; // r8d
  int v20; // esi
  __int64 v21; // r8
  _DWORD *v22; // r9
  _QWORD *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r12d
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // r15d
  int v31; // ecx
  int Blink; // r13d
  int v33; // eax
  int v34; // eax
  char v35; // al
  int v36; // edx
  int v37; // edx
  char v38; // r12
  int v39; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v41; // rax
  PMDL v42; // rbx
  struct _MDL *v43; // r15
  ULONG i; // esi
  char v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+61h] [rbp-9Fh]
  char v47; // [rsp+62h] [rbp-9Eh] BYREF
  char v48; // [rsp+63h] [rbp-9Dh] BYREF
  int v49; // [rsp+64h] [rbp-9Ch]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+70h] [rbp-90h]
  _DWORD v52[3]; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56[14]; // [rsp+A0h] [rbp-60h] BYREF

  v53 = 0LL;
  memset(v56, 0, sizeof(v56));
  v4 = *(ULONG_PTR ***)(a1 + 176);
  v5 = *(struct _FILE_OBJECT **)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(LARGE_INTEGER *)(a1 + 152);
  v45 = *(_BYTE *)(a1 + 24);
  v48 = 0;
  FileObject = v5;
  v51 = 0;
  v47 = 0;
  LOBYTE(v49) = 0;
  memset(v52, 0, sizeof(v52));
  if ( v4 )
    v8 = *v4;
  else
    v8 = &MiSystemPartition;
  v9 = MiEnablePartitionMappedWrites((__int64)v8);
  if ( v9 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v11 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(
                       FileObject,
                       (__int64)&v52[1],
                       (__int64)&MemoryDescriptorList,
                       (__int64)v56,
                       (__int64)v52);
    else
      ImageFileMap = MiCreateDataFileMap(
                       FileObject,
                       v8,
                       (LARGE_INTEGER **)&v52[1],
                       v7,
                       *(_DWORD *)(a1 + 28),
                       v6,
                       *(_DWORD *)(a1 + 172),
                       *(_DWORD *)a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(FileObject);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v14 = *(_QWORD *)&v52[1];
    *a2 = *(_QWORD *)&v52[1];
    if ( v7.QuadPart )
    {
      *(LARGE_INTEGER *)(a1 + 128) = v7;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = *(_QWORD *)&v52[1];
      *(_QWORD *)(a1 + 128) = v15;
    }
    v16 = *(_DWORD *)a1;
    v17 = *(_QWORD *)v14;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v17 + 62) |= 1u;
      v16 = *(_DWORD *)a1;
    }
    v18 = FileObject;
    LOWORD(v19) = v16;
    if ( (v16 & 0x2000) != 0
      && (FileObject->DeviceObject->Characteristics & 0x10) == 0
      && (!v11 || (v56[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000000u;
      v19 = *(_DWORD *)a1;
    }
    if ( (v19 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v20 = 2;
    v23 = (_QWORD *)MiSectionCreated((__int64)v18, v17, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v18);
      *(_DWORD *)a1 &= ~2u;
    }
    v24 = 0LL;
    if ( !v11 )
      goto LABEL_119;
    v25 = *(_QWORD *)(*(_QWORD *)&v52[1] + 56LL);
    v55 = v25;
    if ( !LODWORD(v56[11]) && !HIDWORD(v56[11]) && !*(_BYTE *)(v25 + 50) )
      *(_BYTE *)(*(_QWORD *)&v52[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140C4CC18 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_122:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v17, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        v26 = 6;
LABEL_40:
        dword_140C4CC18 = v26;
        goto LABEL_122;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)v17, (unsigned int *)v56, &v47);
    if ( ImageRequiredSigningLevel < 0 )
    {
      v26 = 4;
      goto LABEL_40;
    }
    v28 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v29 = 4;
    }
    else if ( (v28 & 0x20) != 0 )
    {
      v29 = 1;
    }
    else if ( (v28 & 0x10) != 0 )
    {
      v29 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v29 = 0;
    }
    LOBYTE(v27) = v45;
    v30 = v29 | 0x10;
    if ( (v28 & 0x800) == 0 )
      v30 = v29;
    v31 = *(_DWORD *)a1;
    if ( (v28 & 0x8400) != 0 && (v28 & 0x10) == 0 )
    {
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v30, v27, 0, (__int64)&v48);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CC18 = 7;
        goto LABEL_122;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v45 )
        {
          v33 = v51;
          if ( (Blink & 0x800000) != 0 )
            v33 = 1;
          v51 = v33;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          LOBYTE(v49) = 8;
        }
        else
        {
          v34 = (unsigned __int8)v49;
          if ( (Blink & 0x2000000) != 0 )
            v34 = 6;
          v49 = v34;
        }
      }
      LOBYTE(v27) = v48;
      v18 = FileObject;
      *(_BYTE *)(a1 + 24) = v48;
      v31 = *(_DWORD *)a1;
      v45 = v27;
    }
    if ( (v31 & 0x80000) != 0 )
    {
      v35 = v27;
      v30 |= 0x40000000u;
      if ( !(_BYTE)v27 )
        v35 = 4;
      LOBYTE(v27) = v35;
      v45 = v35;
    }
    v36 = v30 | 0x20000000;
    if ( (v31 & 0x400000) == 0 )
      v36 = v30;
    LODWORD(FileObject) = v36;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v31 |= 0x8000u;
      *(_DWORD *)a1 = v31;
      if ( !(_BYTE)v27 )
      {
        LOBYTE(v27) = 1;
        v45 = 1;
      }
    }
    if ( (v31 & 0x8000) != 0 || (v37 = v31 & 0x400, (v31 & 0x400) != 0) && ((_BYTE)v27 || *(char *)(v55 + 46) < 0) )
    {
      v46 = 1;
      v37 = v31 & 0x400;
    }
    else
    {
      v46 = 0;
    }
    v38 = v37 && (_BYTE)v49;
    if ( (v31 & 0x40) == 0 )
      v20 = (v31 & 0x20) != 0;
    v39 = 0;
    if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v18);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v41 = v53;
      }
      else
      {
        if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
        {
          ImageRequiredSigningLevel = 0;
          v41 = -1LL;
          v53 = -1LL;
        }
        else
        {
          v41 = v53;
        }
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CC18 = 8;
          goto LABEL_122;
        }
      }
    }
    else
    {
      v41 = -1LL;
      v53 = -1LL;
    }
    if ( v46 == 1 || v38 == 1 )
    {
      if ( v41 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v52[1], (unsigned int)v56, v52[0], v20, v41, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CC18 = 9;
          goto LABEL_122;
        }
        v39 = 1;
        if ( v47 == 1 )
          MiMakeImageReadOnly(v17);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (_DWORD)v18,
                                    v17,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    (_DWORD)FileObject,
                                    v46,
                                    v38,
                                    v51,
                                    v45,
                                    v49);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CC18 = 10;
        goto LABEL_122;
      }
      if ( v39 )
        goto LABEL_110;
      v41 = v53;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v52[1], (unsigned int)v56, v52[0], v20, v41, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CC18 = 11;
      goto LABEL_122;
    }
    if ( v47 == 1 )
      MiMakeImageReadOnly(v17);
LABEL_110:
    v42 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v42->MdlFlags & 4) == 0 )
        {
          v43 = v42 + 1;
          for ( i = v42->ByteCount >> 12; i; --i )
          {
            if ( v43->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v43->Next - 0x58000000000LL);
            v43 = (struct _MDL *)((char *)v43 + 8);
          }
        }
        v42 = v42->Next;
      }
      while ( v42 );
      v42 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v42);
    v23 = (_QWORD *)MiReleaseImageSection((__int64)v18, v17);
LABEL_119:
    MiReleaseControlAreaWaiters(v23, v24, v21, v22);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v5);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v9;
}
