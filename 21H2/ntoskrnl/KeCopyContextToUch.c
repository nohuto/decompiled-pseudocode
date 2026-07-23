/*
 * XREFs of KeCopyContextToUch @ 0x1408BE750
 * Callers:
 *     PspSetUmsThreadContext @ 0x14090EEF8 (PspSetUmsThreadContext.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x140264514 (RtlpSanitizeContextFlags.c)
 *     KeContextToKframes @ 0x1403FE200 (KeContextToKframes.c)
 *     KiCopyXStateArea @ 0x14051A1D0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeCopyContextToUch(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 result; // rax
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // r8d
  __int128 v10; // xmm1
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 48);
  v12 = v2 & 0x100013;
  RtlpSanitizeContextFlags((unsigned int *)&v12, 1);
  LOBYTE(v11) = 1;
  KeContextToKframes(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), a2, v12, v11);
  if ( (v2 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] && (*(_BYTE *)(a1 + 72) & 1) != 0 )
    KiCopyXStateArea(
      *(_QWORD *)(a1 + 64),
      MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL,
      *(int *)(a2 + 1248) + a2 + 720);
  result = 1048584LL;
  if ( (v2 & 0x100008) == 0x100008 )
  {
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      v7 = (_OWORD *)(a2 + 256);
      v8 = 4LL;
      v9 = *(_DWORD *)(v6 + 24);
      do
      {
        *(_OWORD *)v6 = *v7;
        *(_OWORD *)(v6 + 16) = v7[1];
        *(_OWORD *)(v6 + 32) = v7[2];
        *(_OWORD *)(v6 + 48) = v7[3];
        *(_OWORD *)(v6 + 64) = v7[4];
        *(_OWORD *)(v6 + 80) = v7[5];
        *(_OWORD *)(v6 + 96) = v7[6];
        v6 += 128LL;
        v10 = v7[7];
        v7 += 8;
        *(_OWORD *)(v6 - 16) = v10;
        --v8;
      }
      while ( v8 );
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = v9;
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 112LL) = *(_OWORD *)(a2 + 416);
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 128LL) = *(_OWORD *)(a2 + 432);
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 144LL) = *(_OWORD *)(a2 + 448);
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 160LL) = *(_OWORD *)(a2 + 464);
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 176LL) = *(_OWORD *)(a2 + 480);
      *(_OWORD *)(*(_QWORD *)(a1 + 80) + 192LL) = *(_OWORD *)(a2 + 496);
    }
    **(_WORD **)(a1 + 64) = *(_WORD *)(a2 + 256) & 0x1F3F;
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 48LL) = *(_OWORD *)(a2 + 512);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 64LL) = *(_OWORD *)(a2 + 528);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 80LL) = *(_OWORD *)(a2 + 544);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 96LL) = *(_OWORD *)(a2 + 560);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 112LL) = *(_OWORD *)(a2 + 576);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 128LL) = *(_OWORD *)(a2 + 592);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 144LL) = *(_OWORD *)(a2 + 608);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 160LL) = *(_OWORD *)(a2 + 624);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 176LL) = *(_OWORD *)(a2 + 640);
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 192LL) = *(_OWORD *)(a2 + 656);
    result = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(result + 44) = KiMxCsrMask & *(_DWORD *)(a2 + 52);
  }
  return result;
}
