/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x1408BE468
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x14032D974 (KeKvaShadowingActive.c)
 *     KiIsFbClearSupported @ 0x1403F1E88 (KiIsFbClearSupported.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlQueryL1tfMitigationInformation @ 0x1404F00F0 (HvlQueryL1tfMitigationInformation.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(void *a1, size_t Size, unsigned int *a3)
{
  size_t v3; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // eax
  ULONG_PTR v8; // rdi
  char v9; // r13
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // edi
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 Src; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size >= 4 )
  {
    v6 = Size;
    if ( (unsigned int)Size >= 8 )
      v6 = 8;
    *a3 = v6;
    v7 = (((KiSpeculationFeatures & 0x100000) != 0) ^ (unsigned __int8)((unsigned int)KiSpeculationFeatures >> 17)) & 2 ^ ((unsigned int)KiSpeculationFeatures >> 20) & 1;
    Src = ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned int)KiSpeculationFeatures >> 17)) & 4 ^ (unsigned __int64)v7;
    if ( (KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0 )
      LODWORD(Src) = Src | 8;
    if ( (KiSpeculationFeatures & 4) != 0 )
      LODWORD(Src) = Src | 0x10;
    if ( (KiSpeculationFeatures & 0x100000) != 0 && (KiSpeculationFeatures & 0x200000) != 0 )
      LODWORD(Src) = Src | 0x2000;
    LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)(2 * KiSpeculationFeatures)) & 0x20 ^ Src;
    LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)KiSpeculationFeatures) & 0x40 ^ Src;
    LODWORD(Src) = Src & 0xFFFFFF7F | (4 * (KiSpeculationFeatures & 0x20 | 0x40));
    LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)(4 * KiSpeculationFeatures)) & 0x200 ^ Src;
    LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned int)KiSpeculationFeatures >> 12)) & 0x400 ^ Src;
    LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned int)KiSpeculationFeatures >> 12)) & 0x800 ^ Src;
    LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)~(16 * KiSpeculationFeatures)) & 0x1000 ^ Src;
    LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned int)KiSpeculationFeatures >> 11)) & 0x4000 ^ Src;
    LODWORD(Src) = (Src ^ ((unsigned int)KiSpeculationFeatures >> 11)) & 0x8000 ^ Src;
    v8 = KeFeatureBits2;
    v9 = KiKvaShadow;
    if ( !KiKvaShadow || (v10 = 637534208, (KeFeatureBits2 & 8) == 0) )
      v10 = 603979776;
    v11 = v10 | Src & 0xFCFEFFFF | ((_DWORD)KeFeatureBits2 << 19) & 0x1000000 | ((KiSpeculationFeatures & 1 | 0x80) << 16) & 0xFDFFFFFF;
    v12 = (unsigned __int16)KeFeatureBits2 & 0x8000;
    if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
    {
      v13 = v11 | 0x18000000;
    }
    else if ( (KeFeatureBits2 & 0x10000) != 0 || (KeFeatureBits2 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
    {
      v13 = v11 & 0xE7FFFFFF | 0x10000000;
    }
    else if ( v12 )
    {
      v13 = v11 & 0xE7FFFFFF | 0x8000000;
    }
    else
    {
      v13 = v11 & 0xE7FFFFFF;
    }
    if ( (v8 & 0x10000) != 0 || !KiTsxSupportedAtBoot )
      v14 = 0x40000000;
    else
      v14 = 0;
    LODWORD(Src) = v14 | v13 & 0xBFFFFFFF;
    HvlQueryL1tfMitigationInformation((int *)&Src);
    v15 = HIDWORD(Src) ^ (BYTE4(Src) ^ (unsigned __int8)(v8 >> 19)) & 7;
    if ( !v9 || (v16 = !KiIsFbClearSupported(), v17 = 1048, v16) )
      v17 = 1040;
    HIDWORD(Src) = v17 | v15 & 0xFFFFFFF7;
    if ( (KiSpeculationFeatures & 0x8000) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x40000) != 0
        || (KiSpeculationFeatures & 0x200000) != 0
        || (KiSpeculationFeatures & 0x10000000) != 0 )
      {
        v18 = HIDWORD(Src) & 0xFFFFFCFF | 0x100;
      }
      else if ( (KiSpeculationFeatures & 0x80000) != 0 || (KiSpeculationFeatures & 0x20000000) != 0 )
      {
        v18 = HIDWORD(Src) & 0xFFFFFCFF;
      }
      else
      {
        v18 = HIDWORD(Src) | 0x300;
      }
    }
    else
    {
      v18 = HIDWORD(Src) & 0xFFFFFCFF | 0x200;
    }
    HIDWORD(Src) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)((_WORD)KeFeatureBits2 << 8)) & 0x1000 | 0x800;
    memset(a1, 0, v3);
    memmove(a1, &Src, v6);
    return 0LL;
  }
  else
  {
    *a3 = 8;
    return 3221225476LL;
  }
}
