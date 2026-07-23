/*
 * XREFs of MiReadyStandbyPageForActive @ 0x14030DB30
 * Callers:
 *     MiUnlinkStandbyBatch @ 0x14030D930 (MiUnlinkStandbyBatch.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rsi
  char v4; // al
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  int v8; // ecx
  int v9; // eax
  __int64 ValidPte; // rbx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v13; // rax
  char v14; // r8

  v2 = a1 + 16;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE *)(a1 + 34) & 0xFE;
  ++*(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 34) = v4 | 6;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (_QWORD *)(v3 | 0x8000000000000000uLL);
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      v14 = v6 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v6;
      LOBYTE(v6) = v14;
      if ( (v13 & 0x42) != 0 )
        LOBYTE(v6) = v14 | 0x42;
    }
  }
  v8 = (unsigned __int8)v6 >> 5;
  v9 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v9 != 1 )
  {
    if ( v9 )
    {
      if ( v9 == 2 )
        v8 |= 0x18u;
    }
    else
    {
      v8 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a2, (a1 + 0x58000000000LL) / 48, v8 | 0x20000000u);
  if ( !(unsigned int)MiPteInShadowRange(v7) )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_4:
    *v7 = ValidPte;
    goto LABEL_5;
  }
  if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v7 = ValidPte;
  MiWritePteShadow((__int64)v7, ValidPte);
LABEL_5:
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
