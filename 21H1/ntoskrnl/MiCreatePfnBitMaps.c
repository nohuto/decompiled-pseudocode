/*
 * XREFs of MiCreatePfnBitMaps @ 0x1407A2EE4
 * Callers:
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiSplitPfnBitMaps @ 0x1407A3174 (MiSplitPfnBitMaps.c)
 *     MiDeletePfnBitMaps @ 0x1408D3CFC (MiDeletePfnBitMaps.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140A605E4 (MiInitializeRebuildCandidateCounts.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // r12
  unsigned int i; // esi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r15
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  _QWORD *v11; // r15
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR v15; // rax
  _QWORD *v16; // r15
  unsigned __int64 v17; // rsi
  int v18; // esi
  unsigned int v20; // r8d
  _QWORD *v21; // rdx
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]
  _QWORD *v24; // [rsp+88h] [rbp+20h]

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
    v23 = 0x1000000000LL / v7 + (0x1000000000LL % v7 != 0);
    v9 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)((((unsigned __int64)(v23 + 7) >> 3) + 4095) >> 12));
    v24 = (_QWORD *)v9;
    if ( !v9 )
      goto LABEL_30;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v8, (__int64)(v9 << 25) >> 16, v23, 4) )
    {
      v21 = v24;
      v20 = (((unsigned __int64)(v23 + 7) >> 3) + 4095) >> 12;
LABEL_29:
      MiReleasePtes((__int64)&qword_140C4EE80, v21, v20);
LABEL_30:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v8 = 0LL;
LABEL_7:
    ++v3;
  }
  v10 = MiReservePtes((__int64)&qword_140C4EE80, 0x8000LL);
  v11 = (_QWORD *)v10;
  if ( !v10 )
    goto LABEL_30;
  v12 = (__int64)(v10 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v22, v12, 0x40000000LL, 4) )
  {
    v20 = 0x8000;
    v21 = v11;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5104) = v12;
  v13 = MiReservePtes((__int64)&qword_140C4EE80, 8LL);
  v14 = (_QWORD *)v13;
  if ( !v13 )
    goto LABEL_30;
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)(a1 + 5112), (__int64)(v13 << 25) >> 16, 0x40000LL, 4) )
  {
    v20 = 8;
    v21 = v14;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5112) = 0LL;
  v15 = MiReservePtes((__int64)&qword_140C4EE80, 128LL);
  v16 = (_QWORD *)v15;
  if ( !v15 )
    goto LABEL_30;
  v17 = (__int64)(v15 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v22, v17, 0x400000LL, 4) )
  {
    v20 = 128;
    v21 = v16;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 5128) = v17;
  if ( a2 )
  {
    v18 = 0;
    if ( *a2 )
    {
      while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v18 + 4], *(_QWORD *)&a2[4 * v18 + 6]) )
      {
        if ( (unsigned int)++v18 >= *a2 )
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
