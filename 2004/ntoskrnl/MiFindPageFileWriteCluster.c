/*
 * XREFs of MiFindPageFileWriteCluster @ 0x14030FFE0
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140310538 (MiSetPageFileAllocationBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1403521E0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140352270 (MiRefPageFileSpaceBitmaps.c)
 *     RtlFindLongestRunClearCapped @ 0x140581DE0 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int FreePageFileSpace; // esi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int *result; // rax
  int v16; // r15d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _OWORD *v19; // r13
  char *v20; // rcx
  unsigned int *v21; // rax
  unsigned int LongestRunClearCapped; // eax
  bool v23; // zf
  void *v24; // rax
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v26[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v29; // [rsp+B0h] [rbp+50h]
  unsigned int v30; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a3;
  v4 = *a3;
  v27 = 0LL;
  v8 = (unsigned __int64)*a2 << 32;
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  v9 = MiSwizzleInvalidPte(v8);
  v10 = *(_QWORD *)(a1 + 248);
  v28 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | v9 & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v10, (__int64)&v28, v4, v11 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v13 = v28;
    if ( qword_140C4DD40 && (v28 & 0x10) == 0 )
      v13 = v28 & ~qword_140C4DD40;
    v14 = HIDWORD(v13);
  }
  else
  {
    if ( a4 )
    {
      v20 = (char *)&v25;
      v19 = *(_OWORD **)(a1 + 112);
      v16 = 0;
      LODWORD(v25) = *(_DWORD *)a1;
      *((_QWORD *)&v25 + 1) = *((_QWORD *)v19 + 2);
      v21 = a2;
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 128);
      v17 = *(_DWORD *)(a1 + 124);
      if ( v17 < dword_140CFB18C && *(_DWORD *)(a1 + 132) != v16 )
      {
        if ( v17 >= (unsigned int)dword_140CFB18C >> 3 )
        {
          v18 = v17 + (v17 >> 1);
          v17 = dword_140CFB18C;
          if ( v18 < dword_140CFB18C )
            v17 = v18;
        }
        else
        {
          v17 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v17;
      }
      v19 = v26;
      if ( v4 >= v17 )
        v4 = v17;
      if ( (*(_WORD *)(a1 + 204) & 0x800) != 0 )
        v4 = 1;
      MiRefPageFileSpaceBitmaps(a1, v26);
      v20 = (char *)v26 + 8;
      v21 = (unsigned int *)(a1 + 120);
    }
    v30 = *v21;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v20, v4, &v30);
    v23 = a4 == 0;
    FreePageFileSpace = LongestRunClearCapped;
    LODWORD(v14) = v30;
    if ( v23 )
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v4 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v16;
        }
        *(_DWORD *)(a1 + 120) = v14 + LongestRunClearCapped;
      }
      v24 = (void *)MiDerefPageFileSpaceBitmaps(a1, v19, 0LL);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
    }
    else
    {
      MiSetPageFileAllocationBits(a1, v30, LongestRunClearCapped);
    }
  }
  result = v29;
  *a2 = v14;
  *result = FreePageFileSpace;
  return result;
}
