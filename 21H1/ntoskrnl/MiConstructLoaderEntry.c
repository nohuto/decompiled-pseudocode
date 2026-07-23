/*
 * XREFs of MiConstructLoaderEntry @ 0x1407465D8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140A4E514 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExpCovGetSectionInfo @ 0x140746D08 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x140746D6C (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140746E4C (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14075ED28 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(
        __int64 a1,
        const void **a2,
        const void **a3,
        int a4,
        int a5,
        unsigned int **a6)
{
  char v9; // bp
  SIZE_T v10; // rdx
  unsigned int *v11; // rdi
  _WORD *Pool; // rax
  _WORD *v13; // r14
  unsigned __int64 v14; // r12
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // r8d
  PIMAGE_NT_HEADERS v17; // rsi
  unsigned __int64 NumberOfSections; // r10
  char *v19; // r15
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r13
  SIZE_T v26; // rdx
  _OWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  char *v30; // rbx
  char *v31; // r14
  char *v32; // rcx
  bool v33; // zf
  int v34; // r13d
  unsigned __int64 v35; // r14
  __int16 v36; // r8
  unsigned __int64 v37; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v43; // r8d
  char *v44; // r15
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  int v47; // edx
  unsigned __int64 v48; // rbp
  unsigned int v49; // r9d
  __int64 v50; // r8
  unsigned int *v51; // r15
  __int64 v52; // rax
  unsigned int v53; // r13d
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // [rsp+20h] [rbp-118h]
  unsigned int v60; // [rsp+20h] [rbp-118h]
  int v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  __int64 v63; // [rsp+30h] [rbp-108h]
  _IMAGE_DATA_DIRECTORY *v64; // [rsp+38h] [rbp-100h]
  __int128 v65; // [rsp+40h] [rbp-F8h]
  char *v66; // [rsp+50h] [rbp-E8h]
  __int64 v67; // [rsp+58h] [rbp-E0h]
  __int64 v68[27]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v71; // [rsp+150h] [rbp+18h] BYREF
  int v72; // [rsp+158h] [rbp+20h]

  v72 = a4;
  v9 = a4;
  memset(&v68[1], 0, 0x88uLL);
  v10 = *(unsigned __int16 *)a3 + 2LL;
  v59 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  DWORD1(v65) = 0;
  Pool = MiAllocatePool(256, v10, 0x54446D4Du);
  *((_QWORD *)&v65 + 1) = Pool;
  v13 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  LOWORD(v65) = *(_WORD *)a3;
  WORD1(v65) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(_QWORD *)(a1 + 48);
  v15 = RtlImageNtHeader((PVOID)v14);
  v16 = v9 & 1;
  v17 = v15;
  v61 = v16;
  if ( (v9 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v71 = 0;
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v71 = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v58 = -1073741520;
      goto LABEL_78;
    }
  }
  v64 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v16 )
  {
    v20 = 32;
    if ( v15->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v64 = &v17->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v17->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v17->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v20 = Size + 32;
              v43 = 0;
              v44 = (char *)(v14 + VirtualAddress);
              v45 = Size / 0x1C;
              if ( v45 )
              {
                do
                {
                  v46 = *((_DWORD *)v44 + 5);
                  if ( v46 )
                  {
                    if ( v46 < SizeOfImage )
                    {
                      v47 = *((_DWORD *)v44 + 4);
                      if ( v47 + v46 < SizeOfImage )
                        v20 += v47;
                    }
                  }
                  ++v43;
                  v44 += 28;
                }
                while ( v43 < v45 );
              }
              v19 = &v44[-28 * v43];
            }
          }
        }
      }
      v20 = (v20 + 7) & 0xFFFFFFF8;
    }
  }
  v21 = (v17->OptionalHeader.SizeOfImage >> 12) + ((v17->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v22 = 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2);
  v23 = (unsigned int)v22;
  v24 = v22 + 306;
  v62 = v23;
  if ( v24 <= 0x132 )
    goto LABEL_76;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_76;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v24 + v25;
  if ( v24 + v25 <= v24 )
  {
LABEL_76:
    v58 = -1073741701;
    goto LABEL_78;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_76;
  }
LABEL_11:
  v66 = (char *)MiAllocatePool(64, v26, 0x644C6D4Du);
  v11 = (unsigned int *)v66;
  if ( !v66 )
    goto LABEL_77;
  v27 = (_OWORD *)a1;
  v28 = *(_QWORD *)(a1 + 112);
  v67 = v28;
  if ( !v28 )
    goto LABEL_15;
  v29 = MiSectionControlArea(v28);
  v59 = (*(_DWORD *)(*(_QWORD *)v29 + 8LL) >> 12) + (unsigned int)((*(_DWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFF) != 0);
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v59, 0LL) )
  {
LABEL_77:
    v58 = -1073741670;
LABEL_78:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v58;
  }
  v27 = (_OWORD *)a1;
LABEL_15:
  v30 = v66 + 160;
  *((_QWORD *)v66 + 33) = 0LL;
  v31 = &v66[v62 + 304];
  v32 = &v31[v20];
  *((_QWORD *)v66 + 34) = v66 + 304;
  v33 = v71 == 0;
  *((_QWORD *)v66 + 32) = v31;
  *((_QWORD *)v66 + 27) = v59;
  if ( !v33 )
    *((_QWORD *)v66 + 28) = &v32[v25];
  *(_OWORD *)v66 = *v27;
  *((_OWORD *)v66 + 1) = v27[1];
  *((_OWORD *)v66 + 2) = v27[2];
  *((_OWORD *)v66 + 3) = v27[3];
  *((_OWORD *)v66 + 4) = v27[4];
  *((_OWORD *)v66 + 5) = v27[5];
  *((_OWORD *)v66 + 6) = v27[6];
  *((_OWORD *)v66 + 7) = v27[7];
  *((_OWORD *)v66 + 8) = v27[8];
  *((_OWORD *)v66 + 9) = v27[9];
  if ( v17->OptionalHeader.MajorOperatingSystemVersion >= 5u && v17->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v66 + 26) |= 0x8000000u;
  if ( (v17->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v66 + 26) |= 0x20u;
  *((_QWORD *)v66 + 12) = v32;
  *((_WORD *)v66 + 44) = *(_WORD *)a2;
  *((_WORD *)v66 + 45) = *(_WORD *)a2;
  memmove(v32, a2[1], *(unsigned __int16 *)a2);
  v34 = v61;
  *(_WORD *)(*((_QWORD *)v66 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v66 + 5) = 0LL;
  *(_OWORD *)(v66 + 72) = v65;
  if ( v61 )
  {
    *((_DWORD *)v66 + 26) |= 0x20000000u;
    *((_QWORD *)v66 + 5) = v31;
    *(_DWORD *)v31 = 84302;
    *((_DWORD *)v31 + 1) = v20;
    *((_WORD *)v31 + 4) = v17->FileHeader.Machine;
    *((_WORD *)v31 + 5) = v17->FileHeader.Characteristics;
    *((_DWORD *)v31 + 3) = v17->FileHeader.TimeDateStamp;
    *((_DWORD *)v31 + 4) = v17->OptionalHeader.CheckSum;
    *((_DWORD *)v31 + 5) = v17->OptionalHeader.SizeOfImage;
    *((_QWORD *)v31 + 3) = v14;
    if ( v19 )
    {
      memmove(v31 + 32, v19, v64->Size);
      v48 = v64->Size;
      v60 = 0;
      v49 = 0;
      if ( v48 / 0x1C )
      {
        v50 = 0LL;
        v63 = 0LL;
        v51 = (unsigned int *)(v19 + 16);
        do
        {
          v52 = v51[1];
          v53 = *v51;
          v71 = v48;
          if ( (_DWORD)v52
            && (v54 = v17->OptionalHeader.SizeOfImage, (unsigned int)v52 < v54)
            && (unsigned int)v52 + v53 > (unsigned int)v52
            && (unsigned int)v52 + v53 < v54 )
          {
            memmove(&v31[(unsigned int)v48 + 32], (const void *)(v14 + v52), v53);
            v50 = v63;
            LODWORD(v48) = v53 + v48;
            v49 = v60;
          }
          else
          {
            v71 = 0;
          }
          ++v49;
          v55 = 28 * v50;
          v50 = v49;
          v51 += 7;
          v60 = v49;
          v63 = v49;
          *(_DWORD *)&v31[v55 + 52] = v71;
          v56 = v64->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v49 < (*((_QWORD *)&v56 + 1) + (((unsigned __int64)v64->Size - *((_QWORD *)&v56 + 1)) >> 1)) >> 4 );
        v11 = (unsigned int *)v66;
        v34 = v61;
        v30 = v66 + 160;
      }
    }
  }
  *((_QWORD *)v11 + 7) = v14 + v17->OptionalHeader.AddressOfEntryPoint;
  v11[30] = v17->OptionalHeader.CheckSum;
  if ( v67 )
  {
    v35 = MiSectionControlArea(v67);
    v36 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v35 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v36;
    *((_WORD *)v11 + 55) = v36 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v35 + 15LL) >> 1) & 7));
  }
  else
  {
    v35 = 0LL;
  }
  v11[38] = v17->OptionalHeader.SizeOfImage;
  v11[39] = v17->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v67 )
    v37 = *(unsigned int *)(*(_QWORD *)v35 + 8LL);
  else
    v37 = (unsigned __int64)v11[16] >> 12;
  if ( v34 )
    goto LABEL_30;
  *((_QWORD *)v30 + 5) = v37;
  *((_QWORD *)v30 + 6) = v37;
  if ( (PVOID)v14 == PsNtosImageBase )
    goto LABEL_70;
  if ( (PVOID)v14 == PsHalImageBase )
  {
    if ( (PVOID)v14 != PsNtosImageBase )
    {
      v57 = v37 - MxHalFreedGapCharges;
      goto LABEL_71;
    }
LABEL_70:
    v57 = v37 - MxKernelFreedGapCharges;
LABEL_71:
    *((_QWORD *)v30 + 5) = v57;
  }
LABEL_30:
  if ( !a5 )
    *((_DWORD *)v30 + 9) |= 1u;
  if ( (dword_140CFB174 & 1) != 0 || (v72 & 2) != 0 )
    *((_DWORD *)v30 + 9) |= 0x10u;
  *((_QWORD *)v11 + 16) = 0LL;
  v71 = 0;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v71);
    if ( SectionInfo )
    {
      v11[31] = v71;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  MiProcessLoaderEntry((unsigned __int64 *)v11, 1);
  if ( !v34 )
  {
    if ( v67 )
    {
      *((_DWORD *)v30 + 8) = -2;
      *((_QWORD *)v30 + 2) = v14 | 3;
      *((_QWORD *)v30 + 3) = (v37 << 12) + v14 - 1;
      v68[0] = v35;
      MiManageSubsectionView(v68, v30, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
