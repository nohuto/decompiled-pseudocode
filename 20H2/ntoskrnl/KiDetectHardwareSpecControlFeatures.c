/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1403A8164
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403A8060 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetermineRetpolineEnablement @ 0x1403CC7E0 (KiDetermineRetpolineEnablement.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1403F1D28 (KiIsKvaShadowNeededForBranchConfusion.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1403A84E0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiIsBranchConfusionPresent @ 0x1403F1CE4 (KiIsBranchConfusionPresent.c)
 */

_OWORD *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, _OWORD *a3, unsigned __int64 a4)
{
  char v4; // r14
  char v6; // r11
  int v8; // edi
  _BYTE *v9; // r12
  bool v15; // si
  bool v16; // r15
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  char v28; // bl
  bool v29; // zf
  int v30; // ecx
  int v31; // ebx
  _OWORD *result; // rax
  __int128 v33; // [rsp+20h] [rbp-40h]
  __int128 v35; // [rsp+38h] [rbp-28h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 141);
  v6 = *(_BYTE *)(a1 + 64);
  _RAX = 0LL;
  v8 = 0;
  v9 = (_BYTE *)a4;
  *(_QWORD *)&v33 = 0x4800000000LL;
  LOBYTE(a4) = *(_BYTE *)(a1 + 67);
  __asm { cpuid }
  *((_QWORD *)&v33 + 1) = 4LL;
  LODWORD(v35) = 0;
  v15 = 0;
  *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(_RCX, _RBX);
  v16 = 0;
  HIDWORD(v35) = _RDX;
  v36 = 0LL;
  if ( (unsigned int)_RAX < 7 )
  {
    v20 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    *(_QWORD *)&v35 = __PAIR64__(_RBX, _RAX);
    v20 = (unsigned int)_RDX;
    DWORD2(v35) = _RCX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v21 = __readmsr(0x10Au);
      _RDX = 512LL;
      _RCX = v21 & 2;
      if ( (v21 & 2) != 0 )
        v8 = 512;
      LODWORD(v33) = v8;
      v16 = (_DWORD)_RCX != 0;
      v15 = (_DWORD)_RCX != 0;
      if ( (v21 & 2) != 0 )
      {
        v8 |= 1u;
        v15 = 1;
        LODWORD(v33) = v8;
      }
      if ( (v21 & 0x10) != 0 )
      {
        v8 |= 0x100u;
        v15 = 1;
        LODWORD(v33) = v8;
      }
      if ( (v21 & 4) != 0 )
      {
        v8 |= 0x200u;
        v15 = 1;
        LODWORD(v33) = v8;
      }
    }
  }
  if ( v4 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(_RCX, _RBX);
    HIDWORD(v35) = _RDX;
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LODWORD(v35) = _RAX;
      *((_QWORD *)&v35 + 1) = __PAIR64__(_RDX, _RCX);
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v8 |= 4u;
      v15 = 1;
      LODWORD(v33) = v8;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v8 |= 0x10u;
      v15 = 1;
      LODWORD(v33) = v8;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v8 |= 0x40u;
      v15 = 1;
      LODWORD(v33) = v8;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v8 |= 0x80u;
      LODWORD(v33) = v8;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v8 |= 0x180u;
      LODWORD(v33) = v8;
    }
    if ( (v8 & 0x80u) != 0 )
      goto LABEL_34;
  }
  else
  {
    if ( (v20 & 0x4000000) != 0 )
    {
      v8 |= 0x14u;
      v15 = 1;
      LODWORD(v33) = v8;
    }
    if ( (v20 & 0x8000000) != 0 )
    {
      v8 |= 0x44u;
      v15 = 1;
      LODWORD(v33) = v8;
    }
    if ( (int)v20 < 0 )
    {
      v8 |= 0x80u;
      LODWORD(v33) = v8;
LABEL_34:
      v15 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v8 |= 0x20u;
    LODWORD(v33) = v8;
  }
  if ( v4 == 2 && v6 == 6 )
  {
    if ( (unsigned __int8)(a4 - 78) <= 0x19u && (_RCX = 50397313LL, _bittest((const int *)&_RCX, a4 - 78))
      || (_BYTE)a4 == 0x8E
      || (_BYTE)a4 == 0x9E )
    {
      v8 |= 0x200u;
      LODWORD(v33) = v8;
    }
    LOBYTE(a4) = a4 - 55;
    if ( (unsigned __int8)a4 <= 0x3Eu )
    {
      _RCX = 0x4080404800680001LL;
      if ( _bittest64(&_RCX, a4) )
      {
        v8 |= 0x200u;
        LODWORD(v33) = v8;
      }
    }
  }
  if ( (v8 & 0x10) != 0 && (v8 & 4) != 0 )
  {
    v28 = 1;
    if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible(_RCX, _RDX, v20, a4) )
    {
      HviGetEnlightenmentInformation(&v36);
      v35 = 0LL;
      HviGetHypervisorFeatures(&v35);
      if ( (v35 & 0x100000000000LL) == 0 )
        goto LABEL_56;
      v29 = (v36 & 0x1000) == 0;
    }
    else
    {
      v29 = !HviIsAnyHypervisorPresent();
    }
    if ( v29 )
    {
      v28 = 0;
      goto LABEL_57;
    }
LABEL_56:
    if ( (KiFeatureSettings & 0x8000) == 0 )
    {
LABEL_67:
      if ( v4 == 1 )
      {
        v8 |= 0x1000u;
        LODWORD(v33) = v8;
        if ( (v8 & 0x40) != 0 )
        {
          v8 |= 0x4000u;
          LODWORD(v33) = v8;
        }
      }
      goto LABEL_70;
    }
LABEL_57:
    v30 = *(_DWORD *)(a1 + 1740);
    if ( (v30 & 2) != 0 )
    {
      v8 |= 0x400u;
      LODWORD(v33) = v8;
    }
    if ( (v30 & 4) != 0 )
    {
      v8 |= 0x800u;
      LODWORD(v33) = v8;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v8 |= 1u;
        LODWORD(v33) = v8;
      }
    }
    if ( v4 == 2 )
    {
      if ( (v28 || v16) && (v30 & 3) == 0 )
        goto LABEL_70;
      v8 |= 0x1000u;
      LODWORD(v33) = v8;
    }
    goto LABEL_67;
  }
LABEL_70:
  v31 = KeFeatureBits2;
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v8 |= 0x2000u;
    LODWORD(v33) = v8;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1, _RDX, v20, a4) )
  {
    v8 |= 0x8000u;
    LODWORD(v33) = v8;
  }
  if ( v4 != 1 || (v31 & 0x2000000) != 0 )
  {
    v8 |= 8u;
    LODWORD(v33) = v8;
  }
  if ( (KiFeatureSettings & 0x10000) != 0 )
    LODWORD(v33) = v8 & 0xFFFFF7FE;
  result = a3;
  *a3 = v33;
  if ( v9 )
    *v9 = v15;
  return result;
}
