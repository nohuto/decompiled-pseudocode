/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403ADD20 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CD320 (KiDetermineRetpolineEnablement.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1403F3214 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1403F327C (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1403AE310 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE390 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiIsBranchConfusionPresent @ 0x1403F31D0 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsPresent @ 0x1403F3308 (KiIsRfdsPresent.c)
 *     KiIsSrsoPresent @ 0x1403F33F4 (KiIsSrsoPresent.c)
 *     KiIsTsaPresent @ 0x1403F34B8 (KiIsTsaPresent.c)
 */

bool *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, __int64 a3, bool *a4)
{
  int v4; // r15d
  bool v7; // r14
  bool IsAnyHypervisorPresent; // r13
  __int64 v9; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // ecx
  bool v22; // r9
  __int64 v31; // rcx
  int v32; // ecx
  ULONG_PTR v33; // rbx
  char v34; // cl
  char v35; // al
  __int64 v36; // rdi
  bool *result; // rax
  bool v38; // [rsp+20h] [rbp-60h]
  char v39; // [rsp+21h] [rbp-5Fh]
  char v40; // [rsp+22h] [rbp-5Eh]
  __int128 v41; // [rsp+28h] [rbp-58h]
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v38 = 0;
  v39 = *(_BYTE *)(a1 + 141);
  v41 = 0LL;
  v40 = *(_BYTE *)(a1 + 64);
  v7 = 0;
  IsAnyHypervisorPresent = 1;
  v44 = 0LL;
  DWORD2(v41) = 72;
  v45 = 0LL;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(&v45);
    v44 = 0LL;
    HviGetHypervisorFeatures(&v44);
    if ( (v44 & 0x100000000000LL) != 0 )
      IsAnyHypervisorPresent = (v45 & 0x1000) != 0;
  }
  else
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  }
  v9 = v41;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v19 = 0LL;
    v22 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v19 = (unsigned int)_RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v20 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v20) << 32;
      v21 = v20 & 2;
      if ( (v20 & 2) != 0 )
      {
        v9 = v41 | 0x200;
        *(_QWORD *)&v41 = v41 | 0x200;
      }
      v22 = v21 != 0;
      v38 = v21 != 0;
      v7 = v21 != 0;
      if ( (v20 & 2) != 0 )
      {
        v9 |= 1uLL;
        v7 = 1;
        *(_QWORD *)&v41 = v9;
      }
      if ( (v20 & 0x10) != 0 )
      {
        v9 |= 0x100uLL;
        v7 = 1;
        *(_QWORD *)&v41 = v9;
      }
      if ( (v20 & 4) != 0 )
      {
        v9 |= 0x200uLL;
        v38 = v21 != 0;
        *(_QWORD *)&v41 = v9;
        v7 = 1;
      }
    }
    else
    {
      v22 = 0;
    }
  }
  if ( v39 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v9 |= 4uLL;
      v7 = 1;
      *(_QWORD *)&v41 = v9;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v9 |= 0x10uLL;
      v7 = 1;
      *(_QWORD *)&v41 = v9;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v9 |= 0x40uLL;
      v7 = 1;
      *(_QWORD *)&v41 = v9;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v9 |= 0x80uLL;
      *(_QWORD *)&v41 = v9;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v9 |= 0x180uLL;
      *(_QWORD *)&v41 = v9;
    }
    if ( (v41 & 0x80u) != 0LL )
      goto LABEL_39;
  }
  else
  {
    if ( (v19 & 0x4000000) != 0 )
    {
      v9 |= 0x14uLL;
      v7 = 1;
      *(_QWORD *)&v41 = v9;
    }
    if ( (v19 & 0x8000000) != 0 )
    {
      v9 |= 0x44uLL;
      v7 = 1;
      *(_QWORD *)&v41 = v9;
    }
    if ( (int)v19 < 0 )
    {
      v9 |= 0x80uLL;
      *(_QWORD *)&v41 = v9;
LABEL_39:
      v7 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v9 |= 0x20uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( v39 == 2 && v40 == 6 )
  {
    if ( (unsigned __int8)(v4 - 78) <= 0x19u && (_RDX = 50397313LL, _bittest((const int *)&_RDX, v4 - 78))
      || (_BYTE)v4 == 0x8E
      || (_BYTE)v4 == 0x9E )
    {
      v9 |= 0x200uLL;
      *(_QWORD *)&v41 = v9;
    }
    if ( (unsigned __int8)(v4 - 55) <= 0x37u && (v31 = 0x80404800680001LL, _bittest64(&v31, (unsigned int)(v4 - 55)))
      || (_BYTE)v4 == 117 )
    {
      v9 |= 0x200uLL;
      *(_QWORD *)&v41 = v9;
    }
  }
  if ( (v41 & 0x14) == 0x14 )
  {
    if ( !IsAnyHypervisorPresent || (KiFeatureSettings & 0x8000) != 0 )
    {
      v32 = *(_DWORD *)(a1 + 1740);
      if ( (v32 & 2) != 0 )
      {
        v9 |= 0x400uLL;
        *(_QWORD *)&v41 = v9;
      }
      if ( (v32 & 4) != 0 )
      {
        v9 |= 0x800uLL;
        *(_QWORD *)&v41 = v9;
        if ( (KiFeatureSettings & 0x4000) != 0 )
        {
          v9 |= 1uLL;
          *(_QWORD *)&v41 = v9;
        }
      }
      if ( v39 == 2 )
      {
        if ( (IsAnyHypervisorPresent || v22) && (v32 & 3) == 0 )
          goto LABEL_70;
        v9 |= 0x1000uLL;
        *(_QWORD *)&v41 = v9;
      }
    }
    if ( v39 == 1 )
    {
      v9 |= 0x1000uLL;
      *(_QWORD *)&v41 = v9;
      if ( (v9 & 0x40) != 0 )
      {
        v9 |= 0x4000uLL;
        *(_QWORD *)&v41 = v9;
      }
    }
  }
LABEL_70:
  v33 = KeFeatureBits2;
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v9 |= 0x2000uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1, _RDX, v19) )
  {
    v9 |= 0x8000uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( (unsigned int)KiIsTsaPresent(a1) )
  {
    v9 |= 0x2000000uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( v39 != 1 || (v33 & 0x2000000) != 0 )
  {
    v9 |= 8uLL;
    *(_QWORD *)&v41 = v9;
  }
  BYTE12(v41) = 0;
  if ( v39 == 2 )
  {
    if ( (v33 & 0x4000000) == 0 && (IsAnyHypervisorPresent || v38) )
    {
      v9 |= 0x10000uLL;
      *(_QWORD *)&v41 = v9;
    }
    if ( (v9 & 0x10000) != 0 )
    {
      if ( (v33 & 0x8000000) != 0 )
      {
        v9 |= 0x20000uLL;
        *(_QWORD *)&v41 = v9;
      }
      if ( KiTsxSupported )
      {
        BYTE12(v41) = 3;
      }
      else if ( (v33 & 0x8000000) != 0
             || *(_BYTE *)(a1 + 64) == 6
             && ((v34 = *(_BYTE *)(a1 + 67), v34 == -105) && ((v35 = *(_BYTE *)(a1 + 66), v35 == 2) || v35 == 5)
              || v34 == -102 && (unsigned __int8)(*(_BYTE *)(a1 + 66) - 3) <= 1u)
             || (BYTE12(v41) = 1, IsAnyHypervisorPresent) )
      {
        BYTE12(v41) = 2;
      }
    }
  }
  if ( (KiFeatureSettings & 0x10000) != 0 )
  {
    v9 &= 0xFFFFFFFFFFFFF7FEuLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( (unsigned int)KiIsSrsoPresent(a1, 0x10000LL) )
  {
    v9 |= 0x200000uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( v39 == 1 )
  {
    v9 |= 0x400000uLL;
    *(_QWORD *)&v41 = v9;
  }
  if ( (unsigned int)KiIsRfdsPresent() )
  {
    v36 = v9 | 0x800000;
    *(_QWORD *)&v41 = v36;
    if ( (v33 & 0x1000000000LL) != 0 )
      *(_QWORD *)&v41 = v36 | 0x1000000;
  }
  *(_OWORD *)a3 = v41;
  *(_QWORD *)(a3 + 16) = 4LL;
  result = a4;
  if ( a4 )
    *a4 = v7;
  return result;
}
