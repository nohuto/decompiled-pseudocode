/*
 * XREFs of MiCreatePfnBitMaps @ 0x14082ACF0
 * Callers:
 *     MmCreatePartition @ 0x1403D981C (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiSplitPfnBitMaps @ 0x14082AFE0 (MiSplitPfnBitMaps.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x14097E6E8 (MiDeletePfnBitMaps.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140B059BC (MiInitializeRebuildCandidateCounts.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // r12
  unsigned __int64 v3; // r13
  unsigned int v5; // ebx
  unsigned int i; // esi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r15
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  ULONG_PTR v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // rsi
  int v24; // esi
  _QWORD *v26; // rdx
  unsigned int v27; // r8d
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+18h]
  _QWORD *v30; // [rsp+80h] [rbp+18h]
  unsigned __int64 v31; // [rsp+88h] [rbp+20h]

  v2 = MiLargePageSizes;
  v3 = qword_140C50840 + 1;
  v5 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      v8 = 512LL;
      v9 = (_QWORD *)(a1 + 15960);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 15968) = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v8 = *v2;
      v9 = (_QWORD *)(16LL * i + a1 + 15816);
    }
    v29 = v3 / v8 + (v3 % v8 != 0);
    v31 = (((v29 + 7) >> 3) + 4095) >> 12;
    v10 = MiReservePtes((__int64)&qword_140C534C0, v31);
    v28[0] = v10;
    if ( !v10 )
      goto LABEL_30;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v9, (__int64)(v10 << 25) >> 16, v29, 4LL) )
    {
      v27 = v31;
      v26 = (_QWORD *)v28[0];
LABEL_29:
      MiReleasePtes((__int64)&qword_140C534C0, v26, v27);
LABEL_30:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v9 = 0LL;
LABEL_7:
    ++v2;
  }
  v11 = (v3 >> 9) + ((v3 & 0x1FF) != 0);
  v12 = (v11 + 4095) >> 12;
  v13 = MiReservePtes((__int64)&qword_140C534C0, v12);
  v30 = (_QWORD *)v13;
  if ( !v13 )
    goto LABEL_30;
  v14 = (__int64)(v13 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v28, v14, 8 * v11, 4LL) )
  {
    v26 = v30;
    v27 = v12;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 15856) = v14;
  v15 = ((v3 & 0x3FFFF) != 0) + (v3 >> 18);
  v16 = (((v15 + 7) >> 3) + 4095) >> 12;
  v17 = MiReservePtes((__int64)&qword_140C534C0, v16);
  v18 = (_QWORD *)v17;
  if ( !v17 )
    goto LABEL_30;
  if ( !(unsigned int)MiInitializeDynamicBitmap(a1 + 15864, (__int64)(v17 << 25) >> 16, v15, 4LL) )
  {
    v27 = v16;
    v26 = v18;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 15864) = 0LL;
  v19 = 2 * v15;
  v20 = (2 * v15 + 4095) >> 12;
  v21 = MiReservePtes((__int64)&qword_140C534C0, v20);
  v22 = (_QWORD *)v21;
  if ( !v21 )
    goto LABEL_30;
  v23 = (__int64)(v21 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap(v28, v23, 8 * v19, 4LL) )
  {
    v27 = v20;
    v26 = v22;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 15880) = v23;
  if ( a2 )
  {
    v24 = 0;
    if ( *a2 )
    {
      while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v24 + 4], *(_QWORD *)&a2[4 * v24 + 6]) )
      {
        if ( (unsigned int)++v24 >= *a2 )
          goto LABEL_18;
      }
      return 0LL;
    }
  }
LABEL_18:
  *(_BYTE *)(a1 + 15590) = 1;
  if ( a2 && KeNumberNodes )
  {
    do
    {
      MiInitializeRebuildCandidateCounts(v5, 2LL);
      MiInitializeRebuildCandidateCounts(v5++, 1LL);
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  return 1LL;
}
