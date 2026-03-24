/*
 * XREFs of KiSetFeatureBits @ 0x14099CB6C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5A10 (HviIsAnyHypervisorPresent.c)
 *     HalIsHyperThreadingEnabled @ 0x1403AE380 (HalIsHyperThreadingEnabled.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     Feature_2400407865__private_IsEnabledDeviceUsage @ 0x1403F3544 (Feature_2400407865__private_IsEnabledDeviceUsage.c)
 *     KiApplyProcessorErrata @ 0x1403F3598 (KiApplyProcessorErrata.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HvlSetApicVirtualizationAvailable @ 0x1404F1ED8 (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x1404F1EE8 (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x14099BEA8 (KiGetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x14099D588 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x14099EA34 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 */

void __fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // si
  unsigned __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rcx
  unsigned int ProcessorSignature; // eax
  int v12; // r13d
  char v13; // r8
  ULONG_PTR v24; // rsi
  unsigned int v35; // r15d
  ULONG_PTR v36; // r12
  char v37; // bl
  char v38; // al
  unsigned __int8 v39; // cl
  char v40; // al
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  char v44; // r11
  __int64 v45; // rsi
  char v46; // cl
  unsigned int v47; // r15d
  unsigned __int8 v53; // r8
  int v54; // ecx
  unsigned int v60; // r12d
  unsigned int v61; // r10d
  int v72; // r11d
  unsigned int v73; // r9d
  unsigned int v79; // ecx
  char v80; // r8
  unsigned int v81; // ebx
  unsigned int v87; // ecx
  char v88; // al
  int v89; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rax
  char v101; // r10
  __int64 v112; // r8
  __int64 v113; // rsi
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r9
  unsigned __int64 v122; // rax
  unsigned __int64 v133; // rax
  unsigned __int64 v139; // rax
  char v145; // r8
  int v146; // eax
  char v147; // al
  bool v148; // [rsp+30h] [rbp-68h]
  unsigned int v149; // [rsp+38h] [rbp-60h]
  unsigned int v150; // [rsp+3Ch] [rbp-5Ch]
  int v151; // [rsp+40h] [rbp-58h]
  __int16 v152; // [rsp+44h] [rbp-54h]
  unsigned int v153; // [rsp+48h] [rbp-50h]

  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v148 = (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
    goto LABEL_28;
  }
  Feature_MSRC101641_Enabled = Feature_2400407865__private_IsEnabledDeviceUsage() != 0;
  v4 = *(_BYTE *)(a1 + 141);
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_28;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( (unsigned __int8)v3 > 0x27u )
    {
      if ( (unsigned __int8)v3 > 0x3Au )
      {
        if ( (_BYTE)v3 != 60 )
        {
          if ( (unsigned __int8)v3 <= 0x44u )
            goto LABEL_12;
          if ( (unsigned __int8)v3 > 0x46u )
          {
            if ( (_BYTE)v3 != 77 )
              goto LABEL_12;
            goto LABEL_24;
          }
        }
      }
      else if ( (((_BYTE)v3 - 42) & 0xEF) != 0 )
      {
        if ( (unsigned __int8)v3 <= 0x2Bu )
          goto LABEL_12;
        if ( (unsigned __int8)v3 > 0x2Fu )
        {
          if ( (unsigned __int8)(v3 - 53) > 2u )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)v3 > 0x25u )
        goto LABEL_24;
      v5 = 0x3FFF7F7FFFLL;
      if ( !_bittest64(&v5, v3) )
        goto LABEL_24;
      if ( (_BYTE)v3 != 26 )
      {
        if ( (unsigned __int8)(v3 - 28) > 1u )
        {
          if ( (unsigned __int8)(v3 - 30) <= 1u || (_BYTE)v3 == 37 )
            goto LABEL_11;
LABEL_12:
          if ( KiLastBranchFromBaseMSR )
            KiLastBranchTOSMSR = 457;
          goto LABEL_28;
        }
LABEL_24:
        KiLastBranchFromBaseMSR = 64;
        KiLastBranchToBaseMSR = 96;
        goto LABEL_12;
      }
    }
LABEL_11:
    KiLastBranchFromBaseMSR = 1664;
    KiLastBranchToBaseMSR = 1728;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    KiLastBranchFromBaseMSR = 475;
    KiLastBranchToBaseMSR = 476;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
  }
LABEL_28:
  _RAX = 0LL;
  __asm { cpuid }
  v12 = _RDX;
  v149 = _RAX;
  v13 = *(_BYTE *)(a1 + 141);
  if ( v13 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    v12 = _RDX;
  }
  else
  {
    if ( v13 != 1 )
      goto LABEL_33;
    v13 = 1;
  }
  *(_QWORD *)(a1 + 34216) = __readmsr(0x8Bu);
LABEL_33:
  _RAX = 1LL;
  __asm { cpuid }
  v24 = (unsigned int)_RDX;
  v151 = _RDX;
  v152 = _RCX;
  v153 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v150 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v35 = _RDX;
  v36 = (unsigned int)_RCX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v13 == 1 )
    {
      v37 = *(_BYTE *)(a1 + 64);
      v38 = *(_BYTE *)(a1 + 67);
      v39 = *(_BYTE *)(a1 + 66);
      if ( v37 == 15 && (v38 == 107 || v38 == 104) && v39 == 1 )
      {
        KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v37 == 16 && (!v38 && v39 <= 2u || v38 == 2 && (v39 <= 2u || v39 == 10) || v38 == 4 && !v39) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v40 = *(_BYTE *)(a1 + 141);
      if ( v40 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v40 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v41 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v41 <= 0x36u)
          && (v42 = 0x6000C010000000LL, _bittest64(&v42, v41))
          || (LOBYTE(v41) = v41 - 55, (unsigned __int8)v41 <= 0x16u)
          && (v43 = 4718593, _bittest(&v43, v41))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  v44 = 1;
  if ( *(_BYTE *)(a1 + 141) == 1 )
    v35 |= 0x100000u;
  *(_DWORD *)(a1 + 212) = HIBYTE(v153);
  *(_DWORD *)(a1 + 232) = (v153 >> 5) & 0x7F8;
  if ( (v24 & 0x789F3FD) != 0x789F3FD
    || (v35 & 0x800) == 0
    || (v35 & 0x100000) == 0
    || (v152 & 0x2000) == 0
    || (v36 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v24, v35, v36, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v45 = *(_QWORD *)(a1 + 34208) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 34208) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v35 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 156) = 1;
  v46 = *(_BYTE *)(a1 + 141);
  if ( (unsigned __int8)(v46 - 2) <= 1u )
  {
    v61 = 0;
    v60 = v149;
    if ( v149 >= 0x1F )
    {
      _RAX = 31LL;
      __asm { cpuid }
      v12 = _RDX;
      if ( (_DWORD)_RBX )
        v61 = 31;
    }
    if ( v61 )
      goto LABEL_90;
    if ( v149 >= 0xB )
    {
      _RAX = 11LL;
      __asm { cpuid }
      v12 = _RDX;
      if ( (_DWORD)_RBX )
        v61 = 11;
    }
    if ( v61 )
    {
LABEL_90:
      *(_DWORD *)(a1 + 212) = v12;
      v72 = 0;
      v73 = 1;
      do
      {
        _RAX = v61;
        __asm { cpuid }
        ++v72;
        v79 = (unsigned int)_RCX >> 8;
        if ( v79 )
        {
          v80 = _RAX & 0x1F;
          if ( v79 == 1 )
            *(_DWORD *)(a1 + 156) = 1 << v80;
          else
            v73 = 1 << v80;
        }
      }
      while ( (_WORD)_RBX );
      *(_DWORD *)(a1 + 152) = v73 / *(_DWORD *)(a1 + 156);
      v44 = 1;
    }
    else
    {
      v81 = 1;
      if ( v149 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        v81 = 1 << _RCX;
        *(_DWORD *)(a1 + 152) = 1 << _RCX;
      }
      if ( (v151 & 0x10000000) != 0 )
      {
        _BitScanReverse(&v87, 2 * BYTE2(v153) - 1);
        *(_DWORD *)(a1 + 156) = (1 << v87) / v81;
      }
    }
    v47 = v150;
  }
  else
  {
    v47 = v150;
    if ( v46 == 1 && v150 >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v53 = _RCX;
      v54 = (unsigned __int16)_RCX >> 12;
      if ( !v54 )
        _BitScanReverse((unsigned int *)&v54, 2 * v53 + 1);
      *(_DWORD *)(a1 + 152) = 1 << v54;
      if ( v150 >= 0x8000001E && (v36 & 0x400000) != 0 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LODWORD(_RCX) = BYTE1(_RBX) + 1;
        *(_DWORD *)(a1 + 156) = _RCX;
        *(_DWORD *)(a1 + 152) /= (unsigned int)_RCX;
        *(_DWORD *)(a1 + 212) = _RAX;
      }
    }
    v60 = v149;
  }
  v88 = *(_BYTE *)(a1 + 141);
  if ( v88 == 1 )
  {
    v45 |= 0x200000uLL;
  }
  else if ( v88 == 2 )
  {
    v45 |= 0x1000000uLL;
  }
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 152);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 156);
  v89 = *(_DWORD *)(a1 + 156);
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v44 = 1;
    if ( !IsHyperThreadingEnabled )
      v89 *= *(_DWORD *)(a1 + 152);
  }
  *(_DWORD *)(a1 + 220) = -v89;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) > 2u || v47 < 0x80000008 )
  {
    if ( *(_BYTE *)(a1 + 141) == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v96 = __readcr4();
  if ( (v45 & 1) != 0 )
    v96 |= 0x100000uLL;
  v97 = v96 | 0x10000;
  if ( (v45 & 0x10000000) == 0 )
    v97 = v96;
  if ( KeSmapEnabled )
    v97 |= 0x200000uLL;
  v98 = v97 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v98 = v97;
  v99 = v98;
  if ( *(_DWORD *)(a1 + 36) && (v45 & 0x40000000000LL) != 0 && KiFlushPcid )
    v99 = v98 | 0x20000;
  __writecr4(v99);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v99 & 0x20000) != 0 )
  {
    v100 = __readcr3();
    __writecr3(v100 | 2);
  }
  v101 = *(_BYTE *)(a1 + 141);
  if ( v101 == 2 && v60 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v45 |= 0x100000000000uLL;
    }
  }
  v112 = v45 | 0x20000;
  if ( !v148 )
    v112 = v45;
  v113 = v112;
  if ( v101 != 2 )
  {
    if ( v101 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        v113 = v112 | 0x4000000;
        if ( (_RDX & 1) == 0 )
          v113 = v112;
        if ( (_RDX & 0x20000) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (_RDX & 0x2000) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v133 = __readmsr(0xC0010114);
      if ( (v133 & 0x10) == 0 )
      {
        v113 |= 0x8000000uLL;
        KiVirtFlags |= v44;
      }
    }
    goto LABEL_164;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_164:
    v121 = 0x10000000000LL;
    goto LABEL_165;
  }
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v121 = 0x10000000000LL;
  }
  else
  {
    v119 = __readmsr(0x48Bu);
    v120 = v112 | 0x4000000;
    if ( (v119 & 0x200000000LL) == 0 )
      v120 = v112;
    v112 = v120;
    if ( (v120 & 1) != 0 && (v119 & 0x40000000000000LL) != 0 )
      HvlSetHardwareMbecAvailable();
    v121 = 0x10000000000LL;
    if ( (v119 & 0x10000000000LL) != 0 )
      HvlSetApicVirtualizationAvailable();
  }
  v122 = __readmsr(0x3Au);
  v113 = v112 | 0x8000000;
  if ( (v122 & 5) != 5 )
    v113 = v112;
  if ( (v122 & 4) != 0 )
    KiVirtFlags |= v44;
  if ( ((unsigned __int8)v122 & (unsigned __int8)v44) != 0 )
    KiVirtFlags |= 2u;
LABEL_165:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v139 = __readmsr(0x3Au);
      if ( (v139 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v145 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v44) != 0 )
        {
          v113 |= v121;
          v146 = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v145 & 2) != 0 )
          {
            v113 |= 0x80000000000uLL;
            MEMORY[0xFFFFF7800000036C] = v146 | 4;
          }
        }
      }
    }
  }
  if ( Feature_MSRC101641_Enabled )
  {
    KiApplyProcessorErrata((_BYTE *)a1);
  }
  else if ( *(_BYTE *)(a1 + 141) == v44 )
  {
    v147 = *(_BYTE *)(a1 + 64);
    if ( v147 > 15 && v147 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  *(_QWORD *)(a1 + 34208) = v113;
}
