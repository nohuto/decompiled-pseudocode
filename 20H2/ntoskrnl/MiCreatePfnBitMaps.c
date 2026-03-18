/*
 * XREFs of MiCreatePfnBitMaps @ 0x1407B4884
 * Callers:
 *     MmCreatePartition @ 0x1403C9FD4 (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiSplitPfnBitMaps @ 0x1407B4B14 (MiSplitPfnBitMaps.c)
 *     MiDeletePfnBitMaps @ 0x1408DAE8C (MiDeletePfnBitMaps.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140A6AAA4 (MiInitializeRebuildCandidateCounts.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // r12
  unsigned int i; // esi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r15
  unsigned __int64 v9; // r13
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rax
  _QWORD *v12; // r15
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // rax
  _QWORD *v15; // rsi
  ULONG_PTR v16; // rax
  _QWORD *v17; // r15
  unsigned __int64 v18; // rsi
  int v19; // esi
  unsigned int v21; // r8d
  _QWORD *v22; // rdx
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h]
  _QWORD *v25; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = MiLargePageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      v7 = 512LL;
      v8 = (_QWORD *)(a1 + 6144);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      {
        *v8 = 0LL;
        *(_QWORD *)(a1 + 6152) = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v7 = *v3;
      v8 = (_QWORD *)(16LL * i + a1 + 5064);
    }
    v24 = 0x1000000000LL / v7 + (0x1000000000LL % v7 != 0);
    v9 = (((unsigned __int64)(v24 + 7) >> 3) + 4095) >> 12;
    v10 = MiReservePtes((__int64)&qword_140C4EDC0, v9);
    v25 = (_QWORD *)v10;
    if ( !v10 )
      goto LABEL_30;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v8, (__int64)(v10 << 25) >> 16, v24, 4) )
    {
      v22 = v25;
      v21 = v9;
LABEL_29:
      MiReleasePtes((__int64)&qword_140C4EDC0, v22, v21);
LABEL_30:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v8 = 0LL;
LABEL_7:
    ++v3;
  }
  v11 = MiReservePtes((__int64)&qword_140C4EDC0, 0x8000u);
  v12 = (_QWORD *)v11;
  if ( !v11 )
    goto LABEL_30;
  v13 = (__int64)(v11 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v23, v13, 0x40000000LL, 4) )
  {
    v21 = 0x8000;
    v22 = v12;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5104) = v13;
  v14 = MiReservePtes((__int64)&qword_140C4EDC0, 8u);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    goto LABEL_30;
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)(a1 + 5112), (__int64)(v14 << 25) >> 16, 0x40000LL, 4) )
  {
    v21 = 8;
    v22 = v15;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5112) = 0LL;
  v16 = MiReservePtes((__int64)&qword_140C4EDC0, 0x80u);
  v17 = (_QWORD *)v16;
  if ( !v16 )
    goto LABEL_30;
  v18 = (__int64)(v16 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v23, v18, 0x400000LL, 4) )
  {
    v21 = 128;
    v22 = v17;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5128) = v18;
  if ( a2 )
  {
    v19 = 0;
    if ( *a2 )
    {
      while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v19 + 4], *(_QWORD *)&a2[4 * v19 + 6]) )
      {
        if ( (unsigned int)++v19 >= *a2 )
          goto LABEL_18;
      }
      return 0LL;
    }
  }
LABEL_18:
  *(_BYTE *)(a1 + 4830) = 1;
  if ( a2 && KeNumberNodes )
  {
    do
    {
      MiInitializeRebuildCandidateCounts(v2, 2LL);
      MiInitializeRebuildCandidateCounts(v2++, 1LL);
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return 1LL;
}
