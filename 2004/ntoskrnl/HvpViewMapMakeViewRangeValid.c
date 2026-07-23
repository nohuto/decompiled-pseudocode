/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x140638E1C
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1406375BC (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406376C4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140638B80 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     CmSiLockViewOfSection @ 0x140271240 (CmSiLockViewOfSection.c)
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402713B8 (CmSiPrefetchVirtualMemoryRange.c)
 *     CmSiProtectViewOfSection @ 0x1402D5750 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140637C5C (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  SIZE_T v6; // rdi
  _BYTE *v7; // r14
  int v12; // esi
  ULONG_PTR v13; // rcx
  char v14; // r13
  ULONG_PTR v15; // rcx
  __int64 i; // r8
  unsigned __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v21; // cl
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2[7] - a2[3];
  v6 = a4 - a3;
  LODWORD(v22) = 0;
  v7 = (_BYTE *)(a3 + v5);
  v12 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v7, a4 - a3, 2u, (ULONG *)&v22);
  if ( v12 >= 0 )
  {
    CmSiPrefetchVirtualMemoryRange(*(void ***)(a1 + 24), v7, v6);
    v14 = 0;
    if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
    {
      if ( a5 && CmSiLockViewOfSection(v13, *(void ***)(a1 + 24), v7, v6) >= 0 )
      {
        v14 = 1;
        a2[8] += v6 >> 12;
        *(_DWORD *)(a1 + 32) |= 4u;
        goto LABEL_8;
      }
      v12 = CmSiProtectViewOfSection(v13, *(void ***)(a1 + 24), v7, v6, 8u, (ULONG *)&v22);
      if ( v12 >= 0 )
      {
        v12 = HvpViewMapTouchPages(v7, v6, 1);
        if ( v12 >= 0 )
        {
          CmSiProtectViewOfSection(v15, *(void ***)(a1 + 24), v7, v6, 2u, (ULONG *)&v22);
          goto LABEL_8;
        }
      }
    }
    else
    {
      v12 = HvpViewMapTouchPages(v7, v6, 0);
      if ( v12 >= 0 )
      {
LABEL_8:
        for ( i = a3; i < a4; i += 4096LL )
        {
          v17 = (unsigned __int64)(i - a2[3]) >> 12;
          v18 = *((_BYTE *)a2 + v17 + 72);
          *((_BYTE *)a2 + v17 + 72) = v18 | 1;
          if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
          {
            if ( v14 )
              v21 = v18 | 0x11;
            else
              v21 = v18 | 5;
            *((_BYTE *)a2 + v17 + 72) = v21;
          }
        }
        v19 = a2[5];
        if ( v19 || a2[6] )
        {
          if ( v19 == a4 )
          {
            a2[5] = a3;
            return 0;
          }
          if ( a2[6] != a3 )
            return 0;
        }
        else
        {
          a2[5] = a3;
        }
        a2[6] = a4;
        return 0;
      }
    }
    CmSiProtectViewOfSection(v15, *(void ***)(a1 + 24), v7, v6, 0x80000001, (ULONG *)&v22);
  }
  return (unsigned int)v12;
}
