/*
 * XREFs of HalpAddMcaToProcessorGenericSection @ 0x1404B9568
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x1404B9E98 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x1404BA10C (HalpCreateMcaProcessorErrorRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAddMcaToProcessorGenericSection(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *(_WORD *)(a1 + 40);
  v3 = -1;
  if ( (unsigned __int16)(v2 - 1) <= 4u || v2 == 1024 || (v2 & 0xFC00) == 0x400 && (v2 & 0x3FF) != 0 )
  {
    v5 = *(_QWORD *)a2 | 4LL;
    *(_BYTE *)(a2 + 10) = 8;
  }
  else
  {
    v5 = *(_QWORD *)a2 | 4LL;
    if ( (v2 & 0xEFFC) == 0xC )
    {
      *(_BYTE *)(a2 + 10) = 1;
LABEL_7:
      *(_BYTE *)(a2 + 13) = v2 & 3;
      v5 |= 0x20uLL;
      goto LABEL_25;
    }
    if ( (v2 & 0xEFF0) == 0x10 )
    {
      *(_BYTE *)(a2 + 10) = 2;
      goto LABEL_7;
    }
    if ( (v2 & 0xEF00) == 0x100 )
    {
      *(_BYTE *)(a2 + 10) = 1;
LABEL_14:
      v3 = (unsigned __int8)v2 >> 4;
      *(_BYTE *)(a2 + 13) = v2 & 3;
      v5 |= 0x20uLL;
      goto LABEL_17;
    }
    if ( (v2 & 0xE800) == 0x800 )
    {
      *(_BYTE *)(a2 + 10) = 4;
      goto LABEL_14;
    }
    *(_BYTE *)(a2 + 10) = 0;
  }
LABEL_17:
  if ( v3 != -1 )
  {
    v5 |= 8uLL;
    switch ( v3 )
    {
      case 3:
        *(_BYTE *)(a2 + 11) = 1;
        break;
      case 4:
        *(_BYTE *)(a2 + 11) = 2;
        break;
      case 5:
        *(_BYTE *)(a2 + 11) = 3;
        break;
      default:
        *(_BYTE *)(a2 + 11) = 0;
        break;
    }
  }
LABEL_25:
  v6 = v5 | 0x10;
  *(_QWORD *)a2 = v6;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (v7 & 0x200000000000000LL) == 0 )
  {
    *(_BYTE *)(a2 + 12) &= 1u;
    v7 = *(_QWORD *)(a1 + 40);
  }
  if ( (v7 & 0x4000000000000000LL) != 0 )
  {
    *(_BYTE *)(a2 + 12) &= 4u;
    v7 = *(_QWORD *)(a1 + 40);
  }
  if ( (v7 & 0x2000000000000000LL) == 0 )
    *(_BYTE *)(a2 + 12) &= 8u;
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *(_QWORD *)a2 = v6 | 0x1000;
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(a1 + 28);
  }
  return 0LL;
}
