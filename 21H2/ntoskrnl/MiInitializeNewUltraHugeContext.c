/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x14039A6C4
 * Callers:
 *     MiGetHugePageToZero @ 0x14022FCB0 (MiGetHugePageToZero.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  __int64 result; // rax
  unsigned __int64 UltraMapping; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rdx
  unsigned __int64 *v17; // r14
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v20; // r15d
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  v6 = (a3 + 0x58000000000LL) / 48;
  v8 = *((_DWORD *)MiSearchNumaNodeTable(v6) + 2);
  v11 = *(_DWORD **)(a2 + 96);
  *(_DWORD *)(a2 + 184) = v8;
  *(_QWORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 188) = 1;
  *v11 |= 1u;
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23, v7, v9, v10);
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  if ( *(_BYTE *)(a2 + 69) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 88), 0, 0x40000LL, 1);
  v14 = (__int64 *)(a2 + 72);
  v15 = *(_QWORD *)(a1 + 232) + 56LL;
  v16 = *(__int64 ***)(*(_QWORD *)(a1 + 232) + 64LL);
  if ( *v16 != (__int64 *)v15 )
    __fastfail(3u);
  *v14 = v15;
  *(_QWORD *)(a2 + 80) = v16;
  *v16 = v14;
  *(_QWORD *)(v15 + 8) = v14;
  *(_QWORD *)(a2 + 176) = UltraMapping;
  *(_QWORD *)(a2 + 40) = UltraMapping;
  v17 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  ValidPte = MiMakeValidPte((unsigned __int64)v17, v6, ProtectionPfnCompatible | 0xA4000000);
  v20 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v17) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
LABEL_13:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_13;
    }
  }
  *v17 = ValidPte;
  if ( v20 )
    MiWritePteShadow((__int64)v17, ValidPte, v21);
  v22 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 48) = v22 + 0x3FFFFFFF;
  *(_QWORD *)(a2 + 32) = v17;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_DWORD *)(a1 + 64) = 0;
  result = 1LL;
  *(_QWORD *)(a1 + 224) = a2;
  *(_WORD *)(a1 + 216) = 0;
  return result;
}
