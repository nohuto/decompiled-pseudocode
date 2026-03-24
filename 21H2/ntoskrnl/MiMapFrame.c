/*
 * XREFs of MiMapFrame @ 0x140536F84
 * Callers:
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1405370A4 (MiMapSystemCachePage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r8d
  int v4; // eax
  unsigned __int64 ValidPte; // rbx
  int v6; // esi
  __int64 v7; // r8
  bool v8; // zf

  v3 = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
    if ( !v4 || v4 == 3 )
    {
      v3 = 12;
    }
    else if ( v4 == 2 )
    {
      v3 = 28;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, v3 | 0xA0000000);
  v6 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_16;
      v8 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_16;
      v8 = (ValidPte & 1) == 0;
    }
    if ( !v8 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_16:
  *(_QWORD *)a1 = ValidPte;
  if ( v6 )
    MiWritePteShadow(a1, ValidPte, v7);
  return (__int64)(a1 << 25) >> 16;
}
