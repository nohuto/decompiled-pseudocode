/*
 * XREFs of MiCreateNewSection @ 0x1406F914C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiMakeImageReadOnly @ 0x1402450AC (MiMakeImageReadOnly.c)
 *     MiReleaseImageSection @ 0x140249828 (MiReleaseImageSection.c)
 *     MiSectionCreated @ 0x140281DE0 (MiSectionCreated.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiEnablePartitionMappedWrites @ 0x1406F9808 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x1406FA990 (MiCreateDataFileMap.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x1406FF378 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x1407010C8 (SeGetImageRequiredSigningLevel.c)
 *     MiDeleteImageCreationMdls @ 0x140705E1C (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiParseComAndCetHeaders @ 0x1407E4D40 (MiParseComAndCetHeaders.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14092D730 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, _QWORD *a2)
{
  ULONG_PTR **v3; // rdi
  struct _FILE_OBJECT *v4; // r13
  int v5; // r15d
  __int64 v6; // rsi
  ULONG_PTR *v7; // rdi
  int v9; // r14d
  int v10; // eax
  int v11; // r12d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  int v18; // r8d
  int v19; // esi
  __int64 *v20; // r15
  _QWORD *v21; // r12
  int v22; // edx
  int v23; // r8d
  int v24; // ecx
  int v25; // r15d
  int v26; // ecx
  int Blink; // r12d
  int v28; // eax
  int v29; // r8d
  char v30; // dl
  char v31; // al
  int v32; // r9d
  int v33; // r12d
  int DirectImageOriginalBase; // eax
  __int64 v35; // rax
  int v36; // ecx
  char v37; // r15
  __int64 v38; // rdx
  int v39; // ecx
  __int64 v40; // rdx
  PMDL v41; // rbx
  struct _MDL *v42; // r15
  ULONG i; // esi
  char v44; // [rsp+50h] [rbp-89h]
  char v45; // [rsp+51h] [rbp-88h] BYREF
  char v46[2]; // [rsp+52h] [rbp-87h] BYREF
  int v47; // [rsp+54h] [rbp-85h]
  int v48; // [rsp+58h] [rbp-81h]
  _DWORD v49[3]; // [rsp+5Ch] [rbp-7Dh] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-71h]
  __int64 v51; // [rsp+70h] [rbp-69h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-61h] BYREF
  __int64 v53[14]; // [rsp+80h] [rbp-59h] BYREF

  v50 = a2;
  v51 = 0LL;
  memset(v53, 0, sizeof(v53));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 152);
  v44 = *(_BYTE *)(a1 + 24);
  v45 = 0;
  v47 = 0;
  v46[0] = 0;
  LOBYTE(v48) = 0;
  memset(v49, 0, sizeof(v49));
  if ( v3 )
    v7 = *v3;
  else
    v7 = &MiSystemPartition;
  if ( (*((_DWORD *)v7 + 1) & 0x100) != 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    return 3221225659LL;
  }
  v9 = MiEnablePartitionMappedWrites(v7);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 172);
    MemoryDescriptorList = 0LL;
    v11 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(
                       v4,
                       (__int64)&v49[1],
                       (__int64)&MemoryDescriptorList,
                       (__int64)v53,
                       (__int64)v49);
    else
      ImageFileMap = MiCreateDataFileMap(v4, *(_DWORD *)(a1 + 28), v5, v10, *(_DWORD *)a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v4);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v14 = *(_QWORD *)&v49[1];
    *v50 = *(_QWORD *)&v49[1];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 128) = v6;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = *(_QWORD *)&v49[1];
      *(_QWORD *)(a1 + 128) = v15;
    }
    v16 = *(_DWORD *)a1;
    v17 = *(_QWORD *)v14;
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
    {
      *(_BYTE *)(v17 + 62) |= 1u;
      v16 = *(_DWORD *)a1;
    }
    LOWORD(v18) = v16;
    if ( (v16 & 0x2000) != 0 && (v4->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v53[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x40000000u;
      v18 = *(_DWORD *)a1;
    }
    if ( (v18 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v19 = 2;
    v20 = (__int64 *)MiSectionCreated((_DWORD *)a1, (__int64)v4, v17, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v11 )
      goto LABEL_119;
    v21 = *(_QWORD **)(*(_QWORD *)&v49[1] + 56LL);
    v50 = v21;
    if ( !LODWORD(v53[11]) && !HIDWORD(v53[11]) && !*((_BYTE *)v21 + 50) )
      *(_BYTE *)(*(_QWORD *)&v49[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x100000) != 0 )
      {
        dword_140C4F3D0 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_122:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v17, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4F3D0 = 6;
        goto LABEL_122;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v17, v53, v46);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4F3D0 = 4;
      goto LABEL_122;
    }
    v22 = *(_DWORD *)a1;
    v23 = 4;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v24 = 4;
    }
    else if ( (v22 & 0x20) != 0 )
    {
      v24 = 1;
    }
    else if ( (v22 & 0x10) != 0 )
    {
      v24 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v24 = 0;
    }
    v25 = v24 | 0x10;
    if ( (v22 & 0x800) == 0 )
      v25 = v24;
    v26 = *(_DWORD *)a1;
    if ( (v22 & 0x8400) == 0 || (v22 & 0x10) != 0 )
    {
      v30 = v44;
    }
    else
    {
      LOBYTE(v23) = v44;
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)v4, v25, v23, 0, (__int64)&v45);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4F3D0 = 7;
        goto LABEL_122;
      }
      v26 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v44 )
        {
          v28 = v47;
          if ( (Blink & 0x800000) != 0 )
            v28 = 1;
          v47 = v28;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          LOBYTE(v48) = 8;
        }
        else
        {
          v29 = (unsigned __int8)v48;
          if ( (Blink & 0x2000000) != 0 )
            v29 = 6;
          v48 = v29;
        }
      }
      v30 = v45;
      v21 = v50;
      v44 = v45;
      *(_BYTE *)(a1 + 24) = v45;
    }
    if ( (v26 & 0x100000) != 0 )
    {
      v31 = v30;
      v25 |= 0x40000000u;
      if ( !v30 )
        v31 = 4;
      v30 = v31;
      v44 = v31;
    }
    v32 = v25 | 0x20000000;
    if ( (v26 & 0x800000) == 0 )
      v32 = v25;
    LODWORD(v50) = v32;
    if ( (MiFlags & 0x20000) != 0 )
    {
      v26 |= 0x8000u;
      *(_DWORD *)a1 = v26;
      if ( !v30 )
      {
        v30 = 1;
        v44 = 1;
      }
    }
    if ( (v26 & 0x8000) == 0 )
    {
      if ( (v26 & 0x400) == 0 )
        goto LABEL_85;
      if ( !v30 && *((char *)v21 + 46) >= 0 )
        goto LABEL_83;
    }
    v47 |= 2u;
    if ( (v26 & 0x400) != 0 )
    {
LABEL_83:
      if ( (_BYTE)v48 )
        v47 |= 4u;
    }
LABEL_85:
    if ( (v26 & 0x40) == 0 )
      v19 = (v26 & 0x20) != 0;
    v33 = 0;
    if ( (*(_BYTE *)(v17 + 62) & 0xC) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v4);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v35 = v51;
        goto LABEL_94;
      }
      if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
      {
        dword_140C4F3D0 = 8;
        goto LABEL_122;
      }
    }
    v35 = -1LL;
    v51 = -1LL;
LABEL_94:
    v36 = v47;
    v37 = v46[0];
    if ( (v47 & 6) != 0 )
    {
      if ( v35 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v49[1], (unsigned int)v53, v49[0], v19, v35, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4F3D0 = 9;
          goto LABEL_122;
        }
        v33 = 1;
        if ( v37 )
          MiMakeImageReadOnly(v17, v38);
        v36 = v47;
      }
      v39 = v36 | 8;
      if ( (*(_DWORD *)a1 & 0x10000000) == 0 )
        v39 = v47;
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (_DWORD)v4,
                                    v17,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    (_DWORD)v50,
                                    v39,
                                    v44,
                                    v48);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4F3D0 = 10;
        goto LABEL_122;
      }
      if ( v33 )
        goto LABEL_110;
      v35 = v51;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v49[1], (unsigned int)v53, v49[0], v19, v35, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4F3D0 = 11;
      goto LABEL_122;
    }
    if ( v37 )
      MiMakeImageReadOnly(v17, v40);
LABEL_110:
    v41 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v41->MdlFlags & 4) == 0 )
        {
          v42 = v41 + 1;
          for ( i = v41->ByteCount >> 12; i; --i )
          {
            if ( v42->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v42->Next - 0x220000000000LL);
            v42 = (struct _MDL *)((char *)v42 + 8);
          }
        }
        v41 = v41->Next;
      }
      while ( v41 );
      v41 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v41);
    v20 = (__int64 *)MiReleaseImageSection((__int64)v4, v17);
LABEL_119:
    MiReleaseControlAreaWaiters(v20);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v4);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v9;
}
