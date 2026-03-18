/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1403A5D64
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403A5C60 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetermineRetpolineEnablement @ 0x1403C9BA0 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A2D90 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1403A5F60 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A5FE0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

_OWORD *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, _OWORD *a3, unsigned __int64 a4)
{
  char v4; // r15
  char v6; // r11
  int v8; // edi
  _BYTE *v9; // r12
  bool v15; // si
  bool v16; // r14
  __int64 v20; // r8
  char v21; // bl
  bool v22; // zf
  int v23; // ecx
  _OWORD *result; // rax
  unsigned __int64 v25; // rax
  __int128 v32; // [rsp+20h] [rbp-40h]
  __int128 v34; // [rsp+38h] [rbp-28h] BYREF
  __int128 v35; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(a1 + 141);
  v6 = *(_BYTE *)(a1 + 64);
  _RAX = 0LL;
  v8 = 0;
  v9 = (_BYTE *)a4;
  *(_QWORD *)&v32 = 0x4800000000LL;
  LOBYTE(a4) = *(_BYTE *)(a1 + 67);
  __asm { cpuid }
  *((_QWORD *)&v32 + 1) = 4LL;
  LODWORD(v34) = 0;
  v15 = 0;
  *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(_RCX, _RBX);
  v16 = 0;
  HIDWORD(v34) = _RDX;
  v35 = 0LL;
  if ( (unsigned int)_RAX < 7 )
  {
    v20 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    *(_QWORD *)&v34 = __PAIR64__(_RBX, _RAX);
    v20 = (unsigned int)_RDX;
    DWORD2(v34) = _RCX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v25 = __readmsr(0x10Au);
      _RDX = 512LL;
      _RCX = v25 & 2;
      if ( (v25 & 2) != 0 )
        v8 = 512;
      LODWORD(v32) = v8;
      v16 = (_DWORD)_RCX != 0;
      v15 = (_DWORD)_RCX != 0;
      if ( (v25 & 2) != 0 )
      {
        v8 |= 1u;
        v15 = 1;
        LODWORD(v32) = v8;
      }
      if ( (v25 & 0x10) != 0 )
      {
        v8 |= 0x100u;
        v15 = 1;
        LODWORD(v32) = v8;
      }
      if ( (v25 & 4) != 0 )
      {
        v8 |= 0x200u;
        v15 = 1;
        LODWORD(v32) = v8;
      }
    }
  }
  if ( v4 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(_RCX, _RBX);
    HIDWORD(v34) = _RDX;
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LODWORD(v34) = _RAX;
      *((_QWORD *)&v34 + 1) = __PAIR64__(_RDX, _RCX);
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v8 |= 4u;
      v15 = 1;
      LODWORD(v32) = v8;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v8 |= 0x10u;
      v15 = 1;
      LODWORD(v32) = v8;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v8 |= 0x40u;
      v15 = 1;
      LODWORD(v32) = v8;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v8 |= 0x80u;
      LODWORD(v32) = v8;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v8 |= 0x180u;
      LODWORD(v32) = v8;
    }
    if ( (v8 & 0x80u) != 0 )
      goto LABEL_10;
  }
  else
  {
    if ( (v20 & 0x4000000) != 0 )
    {
      v8 |= 0x14u;
      v15 = 1;
      LODWORD(v32) = v8;
    }
    if ( (v20 & 0x8000000) != 0 )
    {
      v8 |= 0x44u;
      v15 = 1;
      LODWORD(v32) = v8;
    }
    if ( (int)v20 < 0 )
    {
      v8 |= 0x80u;
      LODWORD(v32) = v8;
LABEL_10:
      v15 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v8 |= 0x20u;
    LODWORD(v32) = v8;
  }
  if ( v4 == 2 && v6 == 6 )
  {
    if ( (_BYTE)a4 == 0x8E
      || (unsigned __int8)(a4 - 78) <= 0x19u && (_RCX = 50397313LL, _bittest((const int *)&_RCX, a4 - 78))
      || (_BYTE)a4 == 0x9E )
    {
      v8 |= 0x200u;
      LODWORD(v32) = v8;
    }
    LOBYTE(a4) = a4 - 55;
    if ( (unsigned __int8)a4 <= 0x3Eu )
    {
      _RCX = 0x4080404800680001LL;
      if ( _bittest64(&_RCX, a4) )
      {
        v8 |= 0x200u;
        LODWORD(v32) = v8;
      }
    }
  }
  if ( (v8 & 0x10) != 0 && (v8 & 4) != 0 )
  {
    v21 = 1;
    if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible(_RCX, _RDX, v20, a4) )
    {
      HviGetEnlightenmentInformation(&v35);
      v34 = 0LL;
      HviGetHypervisorFeatures(&v34);
      if ( (v34 & 0x100000000000LL) == 0 )
        goto LABEL_73;
      v22 = (v35 & 0x1000) == 0;
    }
    else
    {
      v22 = !HviIsAnyHypervisorPresent();
    }
    if ( v22 )
    {
      v21 = 0;
      goto LABEL_28;
    }
LABEL_73:
    if ( (KiFeatureSettings & 0x8000) == 0 )
    {
LABEL_35:
      if ( v4 == 1 )
      {
        v8 |= 0x1000u;
        LODWORD(v32) = v8;
      }
      goto LABEL_37;
    }
LABEL_28:
    v23 = *(_DWORD *)(a1 + 1740);
    if ( (v23 & 2) != 0 )
    {
      v8 |= 0x400u;
      LODWORD(v32) = v8;
    }
    if ( (v23 & 4) != 0 )
    {
      v8 |= 0x800u;
      LODWORD(v32) = v8;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v8 |= 1u;
        LODWORD(v32) = v8;
      }
    }
    if ( v4 == 2 )
    {
      if ( (v21 || v16) && (v23 & 3) == 0 )
        goto LABEL_37;
      v8 |= 0x1000u;
      LODWORD(v32) = v8;
    }
    goto LABEL_35;
  }
LABEL_37:
  if ( (KiFeatureSettings & 0x10000) != 0 )
    LODWORD(v32) = v8 & 0xFFFFF7FE;
  result = a3;
  *a3 = v32;
  if ( v9 )
    *v9 = v15;
  return result;
}
