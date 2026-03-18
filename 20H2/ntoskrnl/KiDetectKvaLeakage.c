/*
 * XREFs of KiDetectKvaLeakage @ 0x14099F8D0
 * Callers:
 *     KiSetFeatureBits @ 0x14099F24C (KiSetFeatureBits.c)
 * Callees:
 *     HvlGetImplementedPhysicalBits @ 0x1403A8110 (HvlGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1403F1D28 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsFbClearSupported @ 0x1403F1E88 (KiIsFbClearSupported.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  __int64 v3; // rcx
  char v8; // r8
  char v13; // dl
  char v14; // dl
  bool v15; // zf
  __int64 v16; // rdx
  int v17; // ecx
  ULONG_PTR v27; // rdx
  int v29[6]; // [rsp+30h] [rbp-20h] BYREF

  v29[0] = 0;
  LODWORD(_RAX) = KiIsKvaShadowNeededForBranchConfusion(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_19;
  LOBYTE(_RAX) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)_RAX == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 6 )
    {
      _RAX = *(unsigned __int8 *)(a1 + 67);
      if ( (unsigned __int8)_RAX <= 0x36u )
      {
        v3 = 0x6000C010000000LL;
        if ( _bittest64(&v3, _RAX) )
          return _RAX;
      }
    }
  }
  else if ( (_BYTE)_RAX != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v8 = 0;
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_18;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) != 0 )
  {
    _RAX = __readmsr(0x10Au);
    v8 = _RAX;
  }
  if ( (v8 & 1) == 0 )
    goto LABEL_18;
  KiMicrocodeTrackerEnabled = 1;
  LOBYTE(_RAX) = 0;
  v13 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    LOBYTE(_RAX) = KiIsFbClearSupported();
    v13 = _RAX | v14;
  }
  if ( v13 )
  {
LABEL_18:
    if ( *(_DWORD *)(a1 + 36) && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
LABEL_19:
    v15 = *(_BYTE *)(a1 + 141) == 2;
    KiKvaLeakage = 1;
    if ( !v15 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 36) )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      LOBYTE(_RAX) = HvlGetImplementedPhysicalBits(v29);
      if ( (_BYTE)_RAX )
      {
        v17 = v29[0];
      }
      else
      {
        v16 = 0LL;
        _RAX = 0LL;
        v17 = 46;
        while ( *(int *)((char *)KiCpuTable + _RAX) != *(unsigned __int8 *)(a1 + 141)
             || *(int *)((char *)&KiCpuTable[1] + _RAX) != *(_DWORD *)(a1 + 1736) )
        {
          ++v16;
          _RAX = 20 * v16;
          if ( KiCpuTable[5 * v16 + 2] == 19 )
            goto LABEL_33;
        }
        LOBYTE(_RAX) = 5 * v16;
        v17 = KiCpuTable[5 * v16 + 3];
        if ( !v17 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          v17 = (unsigned __int8)_RAX;
        }
      }
LABEL_33:
      v27 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v27 )
      {
        LOBYTE(_RAX) = KiImplementedPhysicalBits;
        if ( v17 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v27, v17, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v17;
      }
    }
  }
  return _RAX;
}
