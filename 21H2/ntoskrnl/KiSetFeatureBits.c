/*
 * XREFs of KiSetFeatureBits @ 0x14099DB6C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     HalIsHyperThreadingEnabled @ 0x1403AE4D0 (HalIsHyperThreadingEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiApplyProcessorErrata @ 0x1403F3594 (KiApplyProcessorErrata.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HvlSetApicVirtualizationAvailable @ 0x1404F1E58 (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x1404F1E68 (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x14099CEA8 (KiGetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x14099E4BC (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x14099F964 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 */

void __fastcall KiSetFeatureBits(__int64 a1)
{
  char v1; // bl
  unsigned __int64 v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  unsigned int ProcessorSignature; // eax
  char v7; // r8
  __int16 v23; // si
  ULONG_PTR v24; // r13
  unsigned int v25; // r15d
  unsigned int v36; // r14d
  ULONG_PTR v37; // r12
  char v38; // dl
  unsigned __int8 v39; // al
  unsigned __int8 v40; // cl
  char v41; // al
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  char v45; // r11
  __int64 v46; // rsi
  char v47; // cl
  unsigned int v48; // r15d
  unsigned __int8 v54; // r8
  int v55; // ecx
  unsigned int v56; // r14d
  int v62; // r8d
  unsigned int v68; // r10d
  int v73; // r11d
  unsigned int v74; // r9d
  unsigned int v80; // ecx
  char v81; // r8
  unsigned int v82; // ebx
  int v88; // eax
  unsigned int v89; // ecx
  char v90; // al
  int v91; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  char v103; // r9
  __int64 v114; // r8
  __int64 v115; // rsi
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  unsigned __int64 v134; // rax
  unsigned __int64 v140; // rax
  char v146; // r8
  int v147; // eax
  unsigned int v148; // [rsp+30h] [rbp-40h]
  unsigned int v149; // [rsp+34h] [rbp-3Ch]
  bool v150; // [rsp+38h] [rbp-38h]

  v1 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v150 = (unsigned __int8)(v4 - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
  }
  else
  {
    if ( v4 == 2 )
    {
      if ( v1 != 6 )
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
            if ( !KiLastBranchFromBaseMSR )
              goto LABEL_28;
            goto LABEL_13;
          }
LABEL_24:
          KiLastBranchFromBaseMSR = 64;
          KiLastBranchToBaseMSR = 96;
LABEL_13:
          KiLastBranchTOSMSR = 457;
          goto LABEL_28;
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
  }
LABEL_28:
  v7 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v148 = _RAX;
  if ( v7 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else
  {
    if ( v7 != 1 )
      goto LABEL_33;
    v7 = 1;
  }
  *(_QWORD *)(a1 + 34216) = __readmsr(0x8Bu);
LABEL_33:
  _RAX = 1LL;
  __asm { cpuid }
  v23 = _RCX;
  v24 = (unsigned int)_RDX;
  v25 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v149 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v36 = _RDX;
  v37 = (unsigned int)_RCX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v7 == 1 )
    {
      v38 = *(_BYTE *)(a1 + 64);
      v39 = *(_BYTE *)(a1 + 67);
      v40 = *(_BYTE *)(a1 + 66);
      if ( v38 == 15 )
      {
        if ( (v39 == 107 || v39 == 104) && v40 == 1 )
          KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v38 == 16 && (__PAIR16__(v39, v40) <= 2u || v39 == 2 && (v40 <= 2u || v40 == 10) || v39 == 4 && !v40) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v41 = *(_BYTE *)(a1 + 141);
      if ( v41 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v41 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v42 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v42 <= 0x36u)
          && (v43 = 0x6000C010000000LL, _bittest64(&v43, v42))
          || (LOBYTE(v42) = v42 - 55, (unsigned __int8)v42 <= 0x16u)
          && (v44 = 4718593, _bittest(&v44, v42))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  v45 = 1;
  if ( *(_BYTE *)(a1 + 141) == 1 )
    v36 |= 0x100000u;
  *(_DWORD *)(a1 + 212) = HIBYTE(v25);
  *(_DWORD *)(a1 + 232) = (v25 >> 5) & 0x7F8;
  if ( (v24 & 0x789F3FD) != 0x789F3FD
    || (v36 & 0x800) == 0
    || (v36 & 0x100000) == 0
    || (v23 & 0x2000) == 0
    || (v37 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v24, v36, v37, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v46 = *(_QWORD *)(a1 + 34208) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 34208) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v36 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  v47 = *(_BYTE *)(a1 + 141);
  *(_DWORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 156) = 1;
  if ( (unsigned __int8)(v47 - 2) > 1u )
  {
    v48 = v149;
    if ( v47 != 1 || v149 < 0x80000008 )
      goto LABEL_96;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v54 = _RCX;
    v55 = (unsigned __int16)_RCX >> 12;
    if ( !v55 )
      _BitScanReverse((unsigned int *)&v55, 2 * v54 + 1);
    *(_DWORD *)(a1 + 152) = 1 << v55;
    if ( v149 >= 0x8000001E )
    {
      v56 = v148;
      if ( (v37 & 0x400000) != 0 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        v62 = _RAX;
        LODWORD(_RAX) = *(_DWORD *)(a1 + 152);
        LODWORD(_RCX) = BYTE1(_RBX) + 1;
        *(_DWORD *)(a1 + 212) = v62;
        *(_DWORD *)(a1 + 156) = _RCX;
        *(_DWORD *)(a1 + 152) = (unsigned int)_RAX / (unsigned int)_RCX;
      }
    }
    else
    {
LABEL_96:
      v56 = v148;
    }
    goto LABEL_98;
  }
  v56 = v148;
  if ( v148 >= 0x1F )
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v68 = 31;
      goto LABEL_85;
    }
  }
  v68 = 11;
  if ( v148 >= 0xB )
  {
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
LABEL_85:
      *(_DWORD *)(a1 + 212) = _RDX;
      v73 = 0;
      v74 = 1;
      do
      {
        _RAX = v68;
        __asm { cpuid }
        v80 = (unsigned int)_RCX >> 8;
        ++v73;
        if ( v80 )
        {
          v81 = _RAX & 0x1F;
          if ( v80 == 1 )
            *(_DWORD *)(a1 + 156) = 1 << v81;
          else
            v74 = 1 << v81;
        }
      }
      while ( (_WORD)_RBX );
      v48 = v149;
      v45 = 1;
      *(_DWORD *)(a1 + 152) = v74 / *(_DWORD *)(a1 + 156);
      goto LABEL_98;
    }
  }
  v82 = 1;
  if ( v148 >= 4 )
  {
    _RAX = 4LL;
    __asm { cpuid }
    _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
    v82 = 1 << _RCX;
    *(_DWORD *)(a1 + 152) = 1 << _RCX;
  }
  if ( (v24 & 0x10000000) != 0 )
  {
    v88 = BYTE2(v25);
    v48 = v149;
    _BitScanReverse(&v89, 2 * v88 - 1);
    *(_DWORD *)(a1 + 156) = (1 << v89) / v82;
  }
  else
  {
    v48 = v149;
  }
LABEL_98:
  v90 = *(_BYTE *)(a1 + 141);
  if ( v90 == 1 )
  {
    v46 |= 0x200000uLL;
  }
  else if ( v90 == 2 )
  {
    v46 |= 0x1000000uLL;
  }
  v91 = *(_DWORD *)(a1 + 156);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 152);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 156);
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v45 = 1;
    if ( !IsHyperThreadingEnabled )
      v91 *= *(_DWORD *)(a1 + 152);
  }
  *(_DWORD *)(a1 + 220) = -v91;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) > 2u || v48 < 0x80000008 )
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
  v98 = __readcr4();
  if ( (v46 & 1) != 0 )
    v98 |= 0x100000uLL;
  v99 = v98 | 0x10000;
  if ( (v46 & 0x10000000) == 0 )
    v99 = v98;
  if ( KeSmapEnabled )
    v99 |= 0x200000uLL;
  v100 = v99 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v100 = v99;
  v101 = v100;
  if ( *(_DWORD *)(a1 + 36) && (v46 & 0x40000000000LL) != 0 && KiFlushPcid )
    v101 = v100 | 0x20000;
  __writecr4(v101);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v101 & 0x20000) != 0 )
  {
    v102 = __readcr3();
    __writecr3(v102 | 2);
  }
  v103 = *(_BYTE *)(a1 + 141);
  if ( v103 == 2 && v56 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v46 |= 0x100000000000uLL;
    }
  }
  v114 = v46 | 0x20000;
  if ( !v150 )
    v114 = v46;
  v115 = v114;
  if ( v103 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v121 = __readmsr(0x48Bu);
        v122 = v114 | 0x4000000;
        if ( (v121 & 0x200000000LL) == 0 )
          v122 = v114;
        v114 = v122;
        if ( (v122 & 1) != 0 && (v121 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (v121 & 0x10000000000LL) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      v123 = __readmsr(0x3Au);
      v115 = v114 | 0x8000000;
      if ( (v123 & 5) != 5 )
        v115 = v114;
      if ( (v123 & 4) != 0 )
        KiVirtFlags |= v45;
      if ( ((unsigned __int8)v123 & (unsigned __int8)v45) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v103 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      v115 = v114 | 0x4000000;
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) == 0 )
        v115 = v114;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
      if ( (_RDX & 0x2000) != 0 )
        HvlSetApicVirtualizationAvailable();
    }
    v134 = __readmsr(0xC0010114);
    if ( (v134 & 0x10) == 0 )
    {
      v115 |= 0x8000000uLL;
      KiVirtFlags |= v45;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v140 = __readmsr(0x3Au);
      if ( (v140 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v146 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v45) != 0 )
        {
          v115 |= 0x10000000000uLL;
          v147 = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v146 & 2) != 0 )
          {
            v115 |= 0x80000000000uLL;
            MEMORY[0xFFFFF7800000036C] = v147 | 4;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  *(_QWORD *)(a1 + 34208) = v115;
}
