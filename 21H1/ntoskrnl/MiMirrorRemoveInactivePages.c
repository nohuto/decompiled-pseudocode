/*
 * XREFs of MiMirrorRemoveInactivePages @ 0x14052F254
 * Callers:
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x14052EFB4 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 * Callees:
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140382B5C (MiMirrorOmitPagesFromCopy.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1403EF87C (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiMirrorRemoveInactivePages(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 8);
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = 0LL;
  v7 = v5 + 48 * a3;
  v8 = 0LL;
  v9 = -1LL;
  if ( v5 >= v7 )
    return v6;
  do
  {
    v10 = 1LL;
    if ( (*(_QWORD *)(v5 + 40) & 0x1000000000LL) != 0 )
    {
      v11 = MiGetBaseResidentPageForBugCheck(v5);
      v22 = *(_BYTE *)(v11 + 34) & 7;
      v12 = MiLargePageSizes[(unsigned int)MiGetPfnPageSizeIndex(v11)];
      v10 = v12 + (((__int64)(v5 + 0x58000000000LL) / 48) & ~(v12 - 1)) - (__int64)(v5 + 0x58000000000LL) / 48;
      if ( v10 > (__int64)(v7 - v5) / 48 )
        v10 = (__int64)(v7 - v5) / 48;
      if ( (v22 & 0xFFFFFFFA) == 0 && v22 != 4
        || v14 == 1
        || (v3 & 0x40) != 0 && v13 && MiGetLeafVa(v13) <= 0xFFFF800000000000uLL )
      {
        goto LABEL_11;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 34) & 7) != 6
        || MI_PFN_IS_PROTO(v5)
        || ((v16 >> 60) & 7) == 1
        || (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (v16 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      {
        goto LABEL_11;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v20 = v19 | *(_QWORD *)(v5 + 8);
        if ( !*(_QWORD *)(v5 + 8) )
          v20 = 0LL;
        if ( v20 >= v17 && v20 <= v12 )
        {
          v21 = (__int64)((v20 << 25) - (v17 << 25)) >> 16;
          if ( (v21 < v17 || v21 > v12) && v21 <= v18 )
          {
LABEL_11:
            if ( !v8 )
              v9 = (__int64)(v5 + 0x58000000000LL) / 48;
            v8 += v10;
            goto LABEL_14;
          }
        }
      }
    }
    if ( v8 )
    {
      v6 += v8;
      MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8, v12);
      v8 = 0LL;
    }
LABEL_14:
    v5 += 48 * v10;
  }
  while ( v5 < v7 );
  if ( v8 )
  {
    v6 += v8;
    MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8, 0xFFFFF6FFFFFFFFFFuLL);
  }
  return v6;
}
