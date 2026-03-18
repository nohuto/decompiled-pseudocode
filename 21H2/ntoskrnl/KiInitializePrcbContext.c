/*
 * XREFs of KiInitializePrcbContext @ 0x140A59B28
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MmAllocateIndependentPages @ 0x140829AB0 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // di
  unsigned int v5; // ebp
  void *IndependentPages; // rax
  void *v7; // rsi
  int v8; // r10d
  _DWORD *v9; // r8
  int v11; // eax
  unsigned int v12; // eax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v3 = (unsigned int)(KeXStateLength + KiXSaveAreaLengthFull + 893);
    if ( (_BYTE)KiKernelCetEnabled )
      v3 = (unsigned int)(v3 + 32);
    v4 = 1;
    if ( (_DWORD)v3 )
    {
      v5 = v3;
      IndependentPages = (void *)MmAllocateIndependentPages(v3, a2);
      v7 = IndependentPages;
      if ( !IndependentPages )
        return 3221225626LL;
      memset(IndependentPages, 0, v5);
      *(_QWORD *)(a1 + 35280) = ((unsigned __int64)v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v4 )
  {
LABEL_7:
    v8 = KeXStateLength - 512;
    v9 = (_DWORD *)((*(_QWORD *)(a1 + 35280) + (unsigned int)KiXSaveAreaLengthFull + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[310] = -1232;
    v9[311] = 1232;
    v9[313] = v8;
    v9[308] = -1232;
    v9[312] = (((_DWORD)v9 + 1327) & 0xFFFFFFC0) - ((_DWORD)v9 + 1232);
    v9[309] = (((_DWORD)v9 + 1327) & 0xFFFFFFC0) - (_DWORD)v9 + v8;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v9[315] = 24;
      v12 = (((((_DWORD)v9 + 1327) & 0xFFFFFFC0) + v8 + 7) & 0xFFFFFFF8) - ((_DWORD)v9 + 1232);
      v9[314] = v12;
      v9[309] = v12 + 1256;
    }
    *(_QWORD *)(a1 + 35264) = v9;
  }
  *(_DWORD *)(a1 + 35272) = 1048587;
  if ( v4 && !*(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 35272) = 1048651;
    v11 = *(_DWORD *)(a1 + 35272);
    if ( (_BYTE)KiKernelCetEnabled )
      v11 = 1048779;
    *(_DWORD *)(a1 + 35272) = v11;
  }
  return 0LL;
}
