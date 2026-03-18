/*
 * XREFs of KiDetectKvaLeakage @ 0x140999878
 * Callers:
 *     KiSetFeatureBits @ 0x14099920C (KiSetFeatureBits.c)
 * Callees:
 *     HvlGetImplementedPhysicalBits @ 0x1403A5D10 (HvlGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall KiDetectKvaLeakage(__int64 a1)
{
  char v2; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  char v10; // r9
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  ULONG_PTR v20; // rdx
  unsigned __int64 v21; // rax
  int v32[6]; // [rsp+30h] [rbp-20h] BYREF

  v32[0] = 0;
  v2 = *(_BYTE *)(a1 + 141);
  if ( v2 == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 6 )
    {
      v3 = *(unsigned __int8 *)(a1 + 67);
      if ( (unsigned __int8)v3 <= 0x36u )
      {
        v4 = 0x6000C010000000LL;
        if ( _bittest64(&v4, v3) )
          return;
      }
    }
  }
  else if ( v2 != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v10 = 0;
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_9;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) != 0 )
  {
    v21 = __readmsr(0x10Au);
    v10 = v21;
  }
  if ( (v10 & 1) == 0 || (KiMicrocodeTrackerEnabled = 1, (KeFeatureBits2 & 0x28) == 8) )
  {
LABEL_9:
    v16 = *(_DWORD *)(a1 + 36);
    if ( v16 && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
    KiKvaLeakage = 1;
    if ( v2 != 2 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !v16 )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      if ( HvlGetImplementedPhysicalBits(v32) )
      {
        v19 = v32[0];
      }
      else
      {
        v17 = 0LL;
        v18 = 0LL;
        v19 = 46;
        while ( KiCpuTable[v18] != *(unsigned __int8 *)(a1 + 141) || KiCpuTable[v18 + 1] != *(_DWORD *)(a1 + 1736) )
        {
          ++v17;
          v18 = 5 * v17;
          if ( KiCpuTable[5 * v17 + 2] == 19 )
            goto LABEL_20;
        }
        v19 = KiCpuTable[5 * v17 + 3];
        if ( !v19 )
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
          v19 = (unsigned __int8)_RAX;
        }
      }
LABEL_20:
      v20 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v20 )
      {
        if ( v19 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v20, v19, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v19;
      }
    }
  }
}
