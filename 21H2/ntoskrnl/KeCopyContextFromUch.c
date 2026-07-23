/*
 * XREFs of KeCopyContextFromUch @ 0x1408BE2E0
 * Callers:
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 * Callees:
 *     KeContextFromKframes @ 0x140261AA0 (KeContextFromKframes.c)
 *     RtlpSanitizeContextFlags @ 0x140264514 (RtlpSanitizeContextFlags.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiCopyXStateArea @ 0x14051A1D0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeCopyContextFromUch(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rcx
  __int64 result; // rax
  _OWORD *v7; // rsi
  _OWORD *v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  unsigned int v11; // ecx
  char v12; // dl
  int v13; // ecx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v14 = v2 & 0x100013;
  RtlpSanitizeContextFlags((unsigned int *)&v14, 1);
  *(_DWORD *)(a1 + 48) = v14;
  KeContextFromKframes(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), a1);
  if ( (v2 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] )
  {
    *(_DWORD *)(a1 + 48) |= 0x100040u;
    v5 = *(int *)(a1 + 1248);
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
      KiCopyXStateArea(a1 + v5 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, *(_QWORD *)(a2 + 64));
    else
      *(_QWORD *)(v5 + a1 + 1232) = 0LL;
  }
  result = v2 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_DWORD *)(a1 + 48) |= 0x100008u;
    v7 = (_OWORD *)(a1 + 256);
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
    {
      v8 = *(_OWORD **)(a2 + 64);
      v9 = 4LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        v10 = v8[7];
        v8 += 8;
        *(v7 - 1) = v10;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)(a1 + 416) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 112LL);
      *(_OWORD *)(a1 + 432) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 128LL);
      *(_OWORD *)(a1 + 448) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 144LL);
      *(_OWORD *)(a1 + 464) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 160LL);
      *(_OWORD *)(a1 + 480) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 176LL);
      *(_OWORD *)(a1 + 496) = *(_OWORD *)(*(_QWORD *)(a2 + 80) + 192LL);
    }
    else
    {
      memset((void *)(a1 + 256), 0, 0x200uLL);
      *(_WORD *)v7 = **(_WORD **)(a2 + 64);
    }
    *(_OWORD *)(a1 + 512) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 48LL);
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 64LL);
    *(_OWORD *)(a1 + 544) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 80LL);
    *(_OWORD *)(a1 + 560) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 96LL);
    *(_OWORD *)(a1 + 576) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 112LL);
    *(_OWORD *)(a1 + 592) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 128LL);
    *(_OWORD *)(a1 + 608) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 144LL);
    *(_OWORD *)(a1 + 624) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 160LL);
    *(_OWORD *)(a1 + 640) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 176LL);
    *(_OWORD *)(a1 + 656) = *(_OWORD *)(*(_QWORD *)(a2 + 88) + 192LL);
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 44LL);
    result = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(result + 44);
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 48) | 0x80000000;
    *(_DWORD *)(a1 + 48) = v11;
    result = *(_QWORD *)(a2 + 80);
    v12 = *(_BYTE *)(result + 43);
    if ( v12 == 1 )
    {
      v13 = v11 | 0x8000000;
    }
    else
    {
      if ( v12 != 2 )
        return result;
      v13 = v11 | 0x10000000;
    }
    *(_DWORD *)(a1 + 48) = v13;
  }
  return result;
}
