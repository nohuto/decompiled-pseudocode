/*
 * XREFs of MiFillSystemPtes @ 0x1402CB7F0
 * Callers:
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CC9EC (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0C54 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiIoSpaceRunIsConstant @ 0x140216A68 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiIoPagesInRun @ 0x140242FC4 (MiIoPagesInRun.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6D60 (MiAssignInitialPageAttribute.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052D42C (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, _DWORD *a6)
{
  ULONG_PTR BugCheckParameter4; // r11
  unsigned int ProtectionPfnCompatible; // esi
  BOOL v9; // ecx
  __int64 v11; // r10
  unsigned __int64 v12; // rbx
  unsigned __int64 LeafVa; // rdi
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 IsConstant; // r13
  __int64 v20; // rbp
  unsigned __int16 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // r8
  __int64 v28; // r15
  unsigned __int64 v29; // rdi
  int v30; // ecx
  __int64 *v31; // rax
  __int64 v32; // rbx
  int v33; // edx
  __int64 v34; // rcx
  int v35; // r11d
  __int64 v36; // rdx
  int v37; // ebx
  unsigned __int64 v39; // rcx
  char v40; // cl
  unsigned __int8 v41; // cl
  __int64 ValidPte; // rax
  unsigned int v43; // r8d
  __int64 v44; // r14
  int v45; // eax
  __int64 v46; // rax
  int v47; // [rsp+40h] [rbp-78h] BYREF
  int v48; // [rsp+44h] [rbp-74h]
  __int64 v49; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR v50; // [rsp+50h] [rbp-68h]
  __int64 v51; // [rsp+58h] [rbp-60h]
  unsigned __int64 v52; // [rsp+60h] [rbp-58h]
  unsigned int v53; // [rsp+C0h] [rbp+8h]
  int v55; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int16 v56; // [rsp+D8h] [rbp+20h]

  BugCheckParameter4 = 0LL;
  v51 = 0LL;
  ProtectionPfnCompatible = a4;
  v49 = 0LL;
  v9 = 1;
  v53 = 1;
  *a6 = 0;
  v11 = a2;
  if ( a4 )
  {
    if ( a4 != 31 )
    {
      if ( a4 >> 3 == 3 )
      {
        if ( (a4 & 7) != 0 )
          v53 = 2;
        goto LABEL_9;
      }
      v9 = a4 >> 3 != 1;
    }
    v53 = v9;
  }
  else
  {
    v53 = 3;
  }
LABEL_9:
  v12 = MmProtectToPteMask[a4 & 0x1F] & 0xFFFF000000000E5EuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v17 = MmProtectToPteMask[a4 & 0x1F] & 0xFFFF000000000E5EuLL | 0x121;
  }
  else
  {
    LeafVa = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v12 = MmProtectToPteMask[a4 & 0x1F] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (a4 & 0x4000000) == 0 )
      {
        v12 = MmProtectToPteMask[a4 & 0x1F] & 0x7FFF000000000E5ELL | 0x21;
      }
      v14 = MiUserPdeOrAbove(a1);
      v11 = a2;
      if ( v14 )
        v12 |= 4uLL;
      BugCheckParameter4 = 0LL;
    }
    v15 = v12 | 4;
    if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
      v15 = v12;
    if ( (ProtectionPfnCompatible & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( byte_140C4FA08[((LeafVa >> 39) & 0x1FF) - 256] == 1 )
      {
        v16 = BugCheckParameter4;
      }
      else if ( LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( LeafVa < qword_140C4FB78 || (v16 = HIBYTE(word_140C4E048), LeafVa > qword_140C4E3A8) )
          v16 = (unsigned __int8)word_140C4E048;
      }
      else
      {
        v16 = BugCheckParameter4;
      }
    }
    else
    {
      v16 = HIBYTE(word_140C4E048);
    }
    v17 = v15 | 0x100;
    if ( !v16 )
      v17 = v15;
  }
  v50 = BugCheckParameter4;
  v18 = v17 | 0x42;
  IsConstant = BugCheckParameter4;
  v20 = v11;
  if ( (ProtectionPfnCompatible & 5) != 4 )
    v18 = v17;
  v21 = v18 & 0xFFFB;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v21 = v18;
  v22 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
  v23 = ((unsigned __int16)((unsigned __int8)word_140C4E048 << 8) ^ v21) & 0x100;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v22 = v18;
  v24 = v22 ^ v23;
  v25 = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (ProtectionPfnCompatible & 0x8000000) == 0 )
    v25 = v24;
  v26 = v25 | 0x80;
  if ( (ProtectionPfnCompatible & 0x4000000) == 0 )
    v26 = v25;
  v52 = v26 & 0xFAFFFFFFFFFFFFFFuLL;
  if ( !v11 )
    return 0LL;
  v27 = a5;
  v28 = a3 - 8;
  v29 = BugCheckParameter4;
  if ( a3 >= 0 )
  {
    v29 = a3 - 1;
    v28 = BugCheckParameter4;
  }
  v30 = a5 & 4;
  v48 = v30;
  while ( 1 )
  {
    if ( v28 )
      v29 = *(_QWORD *)(v28 + 8);
    else
      ++v29;
    v31 = (__int64 *)(v28 + 8);
    if ( !v28 )
      v31 = 0LL;
    v28 = (__int64)v31;
    if ( v30 && v29 == qword_140C4EDB8 )
      goto LABEL_110;
    if ( v29 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
    {
      if ( IsConstant || (IsConstant = MiIoSpaceRunIsConstant(v29, v31, v20)) != 0 )
      {
        if ( IsConstant > 1 )
        {
          v45 = *(_DWORD *)(IsConstant + 40);
LABEL_103:
          ProtectionPfnCompatible &= 7u;
          if ( v45 )
          {
            if ( v45 == 2 )
              ProtectionPfnCompatible |= 0x18u;
          }
          else
          {
            ProtectionPfnCompatible |= 8u;
          }
          v43 = ProtectionPfnCompatible;
          goto LABEL_108;
        }
      }
      else
      {
        IsConstant = 1LL;
      }
      v44 = v50;
      if ( v50 )
      {
        v46 = v51;
      }
      else
      {
        if ( v28 )
          v44 = 1LL;
        else
          v44 = MiIoPagesInRun(v29, v20);
        v37 = MiReferenceIoPages(1u, v29, v44, v53, 0LL, &v49);
        if ( v37 < 0 )
          goto LABEL_74;
        *a6 |= 1u;
        v46 = v49;
      }
      v50 = v44 - 1;
      v56 = *(_WORD *)(*(_QWORD *)(v46 + 48) + 2 * ((v29 & 0xFFFFFFFFFLL) - *(_QWORD *)(v46 + 40)));
      v51 = v49;
      v45 = v56 >> 14;
      goto LABEL_103;
    }
    v32 = 48 * v29 - 0x58000000000LL;
    v33 = v27 & 2;
    if ( (v27 & 2) != 0 && ((*(_BYTE *)(v32 + 34) & 7) != 5 || !MiIsPfnFileOnly(48 * v29 - 0x58000000000LL)) )
      KeBugCheckEx(0x1Au, 0x1160CuLL, v29, 0LL, BugCheckParameter4);
    if ( !*(_WORD *)(v32 + 32)
      && (!v33 || (*(_BYTE *)(v32 + 34) & 7) != 5 || !MiIsPfnFileOnly(48 * v29 - 0x58000000000LL)) )
    {
      MiShowBadMapper(v29);
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * v29 - 0x58000000000LL) )
      goto LABEL_85;
    v36 = *(_QWORD *)(v32 + 40);
    if ( (v36 & 0x1000000000LL) == 0 )
      break;
    v55 = v35;
    v47 = v35;
    if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v34, &v55, &v47) == 3 || v55 != 6 )
    {
      v37 = -1073741800;
      goto LABEL_74;
    }
LABEL_85:
    v41 = *(_BYTE *)(v32 + 34);
    if ( (v41 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * v29 - 0x58000000000LL, v53);
      v41 = *(_BYTE *)(v32 + 34);
    }
    if ( v53 != v41 >> 6 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v29 - 0x58000000000LL);
      v43 = ProtectionPfnCompatible;
LABEL_108:
      ValidPte = MiMakeValidPte(a1, v29, v43 | 0xA0000000);
      goto LABEL_109;
    }
    ValidPte = v52 | ((v29 & 0xFFFFFFFFFLL | 0xA00000000000LL) << 12);
LABEL_109:
    v30 = v48;
    BugCheckParameter4 = 0LL;
    v27 = a5;
    *(_QWORD *)a1 = ValidPte;
LABEL_110:
    a1 += 8LL;
    if ( !--v20 )
      return 0LL;
  }
  v39 = (__int64)(*(_QWORD *)(v32 + 8) << 25) >> 16;
  if ( v39 < 0xFFFFF68000000000uLL )
    goto LABEL_85;
  if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_85;
  if ( (v36 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    goto LABEL_85;
  v40 = *(_BYTE *)(v32 + 34);
  if ( (v40 & 0x20) != 0 && (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(v32 + 32) )
    goto LABEL_85;
  if ( (v40 & 8) != 0 || ((*(_QWORD *)v32 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL )
    goto LABEL_85;
  v37 = -1073741800;
LABEL_74:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((a1 << 25) + ((v20 - a2) << 28)) >> 16, a2 - v20);
  return (unsigned int)v37;
}
