/*
 * XREFs of MiCreatePfnBitMaps @ 0x1407B9A04
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiSplitPfnBitMaps @ 0x1407B9C94 (MiSplitPfnBitMaps.c)
 *     MiDeletePfnBitMaps @ 0x1408D87AC (MiDeletePfnBitMaps.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140A69014 (MiInitializeRebuildCandidateCounts.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v5; // r12
  unsigned int i; // esi
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r15
  unsigned __int64 v11; // r13
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  ULONG_PTR v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  ULONG_PTR v22; // rax
  _QWORD *v23; // r15
  unsigned __int64 v24; // rsi
  int v25; // esi
  unsigned int v27; // r8d
  _QWORD *v28; // rdx
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h]
  _QWORD *v31; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = MiLargePageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      v9 = 512LL;
      v10 = (_QWORD *)(a1 + 6144);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      {
        *v10 = 0LL;
        *(_QWORD *)(a1 + 6152) = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v9 = *v5;
      v10 = (_QWORD *)(16LL * i + a1 + 5064);
    }
    v30 = 0x1000000000LL / v9 + (0x1000000000LL % v9 != 0);
    v11 = (((unsigned __int64)(v30 + 7) >> 3) + 4095) >> 12;
    v12 = MiReservePtes((__int64)&qword_140C4EF80, v11, a3, a4);
    v31 = (_QWORD *)v12;
    if ( !v12 )
      goto LABEL_30;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v10, (__int64)(v12 << 25) >> 16, v30, 4) )
    {
      v28 = v31;
      v27 = v11;
LABEL_29:
      MiReleasePtes((__int64)&qword_140C4EF80, v28, v27);
LABEL_30:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v10 = 0LL;
LABEL_7:
    ++v5;
  }
  v13 = MiReservePtes((__int64)&qword_140C4EF80, 0x8000u, a3, a4);
  v14 = (_QWORD *)v13;
  if ( !v13 )
    goto LABEL_30;
  v15 = (__int64)(v13 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v29, v15, 0x40000000LL, 4) )
  {
    v27 = 0x8000;
    v28 = v14;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5104) = v15;
  v18 = MiReservePtes((__int64)&qword_140C4EF80, 8u, v16, v17);
  v19 = (_QWORD *)v18;
  if ( !v18 )
    goto LABEL_30;
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)(a1 + 5112), (__int64)(v18 << 25) >> 16, 0x40000LL, 4) )
  {
    v27 = 8;
    v28 = v19;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5112) = 0LL;
  v22 = MiReservePtes((__int64)&qword_140C4EF80, 0x80u, v20, v21);
  v23 = (_QWORD *)v22;
  if ( !v22 )
    goto LABEL_30;
  v24 = (__int64)(v22 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v29, v24, 0x400000LL, 4) )
  {
    v27 = 128;
    v28 = v23;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5128) = v24;
  if ( a2 )
  {
    v25 = 0;
    if ( *a2 )
    {
      while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v25 + 4], *(_QWORD *)&a2[4 * v25 + 6]) )
      {
        if ( (unsigned int)++v25 >= *a2 )
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
      MiInitializeRebuildCandidateCounts(v4, 2LL);
      MiInitializeRebuildCandidateCounts(v4++, 1LL);
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
  }
  return 1LL;
}
