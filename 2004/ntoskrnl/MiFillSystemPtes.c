/*
 * XREFs of MiFillSystemPtes @ 0x14021BC90
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140336914 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408C928C (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408CD4F4 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiIoSpaceRunIsConstant @ 0x140335E98 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MiIoPagesInRun @ 0x1403532B0 (MiIoPagesInRun.c)
 *     MiAssignInitialPageAttribute @ 0x1403C3A60 (MiAssignInitialPageAttribute.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F0E58 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140527D1C (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
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
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  ULONG_PTR v29; // r15
  ULONG_PTR v30; // rdi
  int v31; // ecx
  ULONG_PTR v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r11d
  __int64 v37; // rdx
  int v38; // ebx
  unsigned __int64 v40; // rcx
  char v41; // cl
  unsigned __int8 v42; // cl
  __int64 ValidPte; // rax
  unsigned int v44; // r8d
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // rax
  int v48; // [rsp+40h] [rbp-78h] BYREF
  int v49; // [rsp+44h] [rbp-74h]
  __int64 v50; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR v51; // [rsp+50h] [rbp-68h]
  __int64 v52; // [rsp+58h] [rbp-60h]
  unsigned __int64 v53; // [rsp+60h] [rbp-58h]
  unsigned int v54; // [rsp+C0h] [rbp+8h]
  int v56; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int16 v57; // [rsp+D8h] [rbp+20h]

  BugCheckParameter4 = 0LL;
  v52 = 0LL;
  ProtectionPfnCompatible = a4;
  v50 = 0LL;
  v9 = 1;
  v54 = 1;
  *a6 = 0;
  v11 = a2;
  if ( a4 )
  {
    if ( a4 != 31 )
    {
      if ( a4 >> 3 == 3 )
      {
        if ( (a4 & 7) != 0 )
          v54 = 2;
        goto LABEL_9;
      }
      v9 = a4 >> 3 != 1;
    }
    v54 = v9;
  }
  else
  {
    v54 = 3;
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
      LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16, a2, a3, v15);
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( byte_140C4F7C8[((LeafVa >> 39) & 0x1FF) - 256] == 1 )
      {
        v16 = BugCheckParameter4;
      }
      else if ( LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( LeafVa < qword_140C4F938 || (v16 = HIBYTE(word_140C4DE08), LeafVa > qword_140C4E168) )
          v16 = (unsigned __int8)word_140C4DE08;
      }
      else
      {
        v16 = BugCheckParameter4;
      }
    }
    else
    {
      v16 = HIBYTE(word_140C4DE08);
    }
    v17 = v15 | 0x100;
    if ( !v16 )
      v17 = v15;
  }
  v51 = BugCheckParameter4;
  v18 = v17 | 0x42;
  IsConstant = BugCheckParameter4;
  v20 = v11;
  if ( (ProtectionPfnCompatible & 5) != 4 )
    v18 = v17;
  v21 = v18 & 0xFFFB;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v21 = v18;
  v22 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
  v23 = ((unsigned __int16)((unsigned __int8)word_140C4DE08 << 8) ^ v21) & 0x100;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v22 = v18;
  v24 = v22 ^ v23;
  v25 = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (ProtectionPfnCompatible & 0x8000000) == 0 )
    v25 = v24;
  v26 = v25 | 0x80;
  if ( (ProtectionPfnCompatible & 0x4000000) == 0 )
    v26 = v25;
  v53 = v26 & 0xFAFFFFFFFFFFFFFFuLL;
  if ( !v11 )
    return 0LL;
  v27 = a5;
  v28 = 0xFFFFFA8000000028uLL;
  v29 = a3 - 8;
  v30 = BugCheckParameter4;
  if ( a3 >= 0 )
  {
    v30 = a3 - 1;
    v29 = BugCheckParameter4;
  }
  v31 = a5 & 4;
  v49 = v31;
  while ( 1 )
  {
    if ( v29 )
      v30 = *(_QWORD *)(v29 + 8);
    else
      ++v30;
    v32 = v29 + 8;
    if ( !v29 )
      v32 = 0LL;
    v29 = v32;
    if ( v31 && v30 == qword_140C4EB78 )
      goto LABEL_110;
    if ( v30 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
    {
      if ( IsConstant || (IsConstant = MiIoSpaceRunIsConstant(v30, v32, v20, 0xFFFFFA8000000028uLL)) != 0 )
      {
        if ( IsConstant > 1 )
        {
          v46 = *(_DWORD *)(IsConstant + 40);
LABEL_103:
          ProtectionPfnCompatible &= 7u;
          if ( v46 )
          {
            if ( v46 == 2 )
              ProtectionPfnCompatible |= 0x18u;
          }
          else
          {
            ProtectionPfnCompatible |= 8u;
          }
          v44 = ProtectionPfnCompatible;
          goto LABEL_108;
        }
      }
      else
      {
        IsConstant = 1LL;
      }
      v45 = v51;
      if ( v51 )
      {
        v47 = v52;
      }
      else
      {
        if ( v29 )
          v45 = 1LL;
        else
          v45 = MiIoPagesInRun(v30, v20);
        v38 = MiReferenceIoPages(1, v30, v45, v54, 0LL, (__int64)&v50);
        if ( v38 < 0 )
          goto LABEL_74;
        *a6 |= 1u;
        v47 = v50;
      }
      v51 = v45 - 1;
      v57 = *(_WORD *)(*(_QWORD *)(v47 + 48) + 2 * ((v30 & 0xFFFFFFFFFLL) - *(_QWORD *)(v47 + 40)));
      v52 = v50;
      v46 = v57 >> 14;
      goto LABEL_103;
    }
    v33 = 48 * v30 - 0x58000000000LL;
    v34 = v27 & 2;
    if ( (v27 & 2) != 0
      && ((*(_BYTE *)(v33 + 34) & 7) != 5
       || !(unsigned int)MiIsPfnFileOnly(48 * v30 - 0x58000000000LL, v34, v27, 0xFFFFFA8000000028uLL)) )
    {
      KeBugCheckEx(0x1Au, 0x1160CuLL, v30, 0LL, BugCheckParameter4);
    }
    if ( !*(_WORD *)(v33 + 32)
      && (!(_DWORD)v34
       || (*(_BYTE *)(v33 + 34) & 7) != 5
       || !(unsigned int)MiIsPfnFileOnly(48 * v30 - 0x58000000000LL, v34, v27, v28)) )
    {
      MiShowBadMapper(v30);
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * v30 - 0x58000000000LL) )
      goto LABEL_85;
    v37 = *(_QWORD *)(v33 + 40);
    if ( (v37 & 0x1000000000LL) == 0 )
      break;
    v56 = v36;
    v48 = v36;
    if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v35, &v56, &v48) == 3 || v56 != 6 )
    {
      v38 = -1073741800;
      goto LABEL_74;
    }
LABEL_85:
    v42 = *(_BYTE *)(v33 + 34);
    if ( (v42 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * v30 - 0x58000000000LL, v54);
      v42 = *(_BYTE *)(v33 + 34);
    }
    if ( v54 != v42 >> 6 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v30 - 0x58000000000LL);
      v44 = ProtectionPfnCompatible;
LABEL_108:
      ValidPte = MiMakeValidPte(a1, v30, v44 | 0xA0000000);
      goto LABEL_109;
    }
    ValidPte = v53 | ((v30 & 0xFFFFFFFFFLL | 0xA00000000000LL) << 12);
LABEL_109:
    v31 = v49;
    BugCheckParameter4 = 0LL;
    v27 = a5;
    *(_QWORD *)a1 = ValidPte;
    v28 = 0xFFFFFA8000000028uLL;
LABEL_110:
    a1 += 8LL;
    if ( !--v20 )
      return 0LL;
  }
  v40 = (__int64)(*(_QWORD *)(v33 + 8) << 25) >> 16;
  if ( v40 < 0xFFFFF68000000000uLL )
    goto LABEL_85;
  if ( v40 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_85;
  if ( (v37 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    goto LABEL_85;
  v41 = *(_BYTE *)(v33 + 34);
  if ( (v41 & 0x20) != 0 && (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(v33 + 32) )
    goto LABEL_85;
  if ( (v41 & 8) != 0 || ((*(_QWORD *)v33 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL )
    goto LABEL_85;
  v38 = -1073741800;
LABEL_74:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((a1 << 25) + ((v20 - a2) << 28)) >> 16, a2 - v20);
  return (unsigned int)v38;
}
