/*
 * XREFs of HalpAddMcaToProcessorSpecificSection @ 0x1404B9718
 * Callers:
 *     HalpCreateMcaProcessorErrorRecord @ 0x1404BA10C (HalpCreateMcaProcessorErrorRecord.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpAddMcaToProcessorSpecificSection(__int64 a1, GUID *a2, unsigned int *a3)
{
  unsigned __int16 *p_Data2; // rbx
  unsigned int v7; // esi
  GUID *v8; // r9
  unsigned __int64 v9; // r10
  _QWORD *Data4; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // esi
  char *v24; // rax

  p_Data2 = &a2[1].Data2;
  *(_QWORD *)&a2->Data1 |= 2uLL;
  v7 = 64;
  ((void (__fastcall *)(_QWORD, __int64, GUID *, unsigned __int16 *, unsigned __int8 *, unsigned __int8 *))HalpWheaCpuid)(
    *(unsigned int *)(a1 + 16),
    1LL,
    &a2[1],
    &a2[1].Data2,
    a2[1].Data4,
    &a2[1].Data4[4]);
  *(_QWORD *)&a2->Data1 |= 1uLL;
  v8 = a2 + 4;
  *(_QWORD *)a2->Data4 = *((unsigned __int8 *)p_Data2 + 3);
  if ( (*(_QWORD *)(a1 + 40) & 0x400000000000000LL) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 2uLL;
    *(_QWORD *)&a2[6].Data1 = *(_QWORD *)(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 0x10uLL;
    *(_QWORD *)a2[7].Data4 = *(_QWORD *)(a1 + 28);
  }
  v9 = *(unsigned __int16 *)(a1 + 40);
  if ( (unsigned __int16)(v9 - 1) <= 3u || (_WORD)v9 == 1024 || (v9 & 0xFC00) == 0x400 && (v9 & 0x3FF) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    *v8 = WHEA_MSCHECK_GUID;
    v18 = *(_QWORD *)a2[5].Data4 | 3LL;
    *(_QWORD *)a2[5].Data4 = v18;
    v19 = ((unsigned int)v18 ^ (*(_QWORD *)(a1 + 40) >> 38)) & 0x80000 ^ v18 | 4;
    *(_QWORD *)a2[5].Data4 = v19;
    v20 = ((unsigned int)v19 ^ (*(_QWORD *)(a1 + 40) >> 41)) & 0x100000 ^ v19 | 0x20;
    *(_QWORD *)a2[5].Data4 = v20;
    v21 = ((unsigned int)v20 ^ (*(_QWORD *)(a1 + 40) >> 39)) & 0x800000 ^ v20;
    *(_QWORD *)a2[5].Data4 = v21;
    if ( (_WORD)v9 )
    {
      switch ( (_WORD)v9 )
      {
        case 1:
          v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL | 0x10000;
          break;
        case 2:
          v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL | 0x20000;
          break;
        case 3:
          v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL | 0x30000;
          break;
        case 4:
          v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL | 0x40000;
          break;
        default:
          v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL | 0x50000;
          break;
      }
    }
    else
    {
      v14 = v21 & 0xFFFFFFFFFFF8FFFFuLL;
    }
    goto LABEL_31;
  }
  if ( (v9 & 0xEFFC) == 0xC )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    *v8 = WHEA_CACHECHECK_GUID;
    v11 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3FFFFFuLL | ((v9 & 3) << 22) | 0xC;
LABEL_15:
    *Data4 = v11;
    v12 = v11 ^ ((unsigned int)v11 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    *Data4 = v12;
    v13 = v12 ^ ((unsigned int)v12 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    *Data4 = v13;
    v14 = v13 ^ ((unsigned int)v13 ^ (*(_QWORD *)(a1 + 40) >> 33)) & 0x20000000;
    goto LABEL_31;
  }
  if ( (v9 & 0xEFF0) == 0x10 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    *v8 = WHEA_TLBCHECK_GUID;
    v11 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3CFFFFuLL | ((((v9 & 3) << 6) | ((unsigned __int16)v9 >> 2) & 3LL) << 16) | 0xD;
    goto LABEL_15;
  }
  if ( (v9 & 0xEF00) == 0x100 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = a2[5].Data4;
    *v8 = WHEA_CACHECHECK_GUID;
    v11 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE00FFFFuLL | ((((unsigned __int16)v9 >> 2) & 3LL | (4
                                                                                                * ((16 * (v9 & 3)) | ((unsigned __int16)v9 >> 4) & 0xF))) << 16) | 0xF;
    goto LABEL_15;
  }
  if ( (v9 & 0xE800) != 0x800 )
  {
    memset(&a2[4], 0, 0x40uLL);
    v8 = 0LL;
    goto LABEL_32;
  }
  *(_QWORD *)&a2[5].Data1 |= 1uLL;
  Data4 = a2[5].Data4;
  *v8 = WHEA_BUSCHECK_GUID;
  v15 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE03FFFFuLL | (((16 * (v9 & 3)) | ((unsigned __int16)v9 >> 4) & 0xF) << 18) | 0xE;
  *(_QWORD *)a2[5].Data4 = v15;
  v16 = v15 ^ ((unsigned int)v15 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
  *(_QWORD *)a2[5].Data4 = v16;
  v17 = v16 ^ ((unsigned int)v16 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
  *(_QWORD *)a2[5].Data4 = v17;
  v14 = v17 & 0xFFFFFFF81FFFFFFFuLL | (*(_QWORD *)(a1 + 40) >> 33) & 0x20000000LL | (((v9 >> 9) & 3 | (4 * ((v9 >> 8) & 1 | (2 * (((unsigned __int16)v9 >> 2) & 3LL))))) << 30) | 0x700;
LABEL_31:
  *Data4 = v14;
  v7 = 128;
  *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFFF03uLL | 4;
LABEL_32:
  if ( *(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFC0FFuLL | 0x100;
    v22 = v7;
    v23 = v7 + 16;
    v24 = (char *)v8 + v22;
    *(_DWORD *)v24 = 524289;
    *((_DWORD *)v24 + 1) = 384;
    *((_QWORD *)v24 + 1) = 0LL;
    memmove(&v24[v23], (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
    v7 = v23 + 8 * *(_DWORD *)(a1 + 64);
  }
  *a3 = v7;
  return 0LL;
}
