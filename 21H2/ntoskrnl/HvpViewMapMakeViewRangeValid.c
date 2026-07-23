/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x1406FB950
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1406FB5C4 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406FCB88 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1406FCEC4 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1402F7A5C (CmSiProtectViewOfSection.c)
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402F7A9C (CmSiPrefetchVirtualMemoryRange.c)
 *     CmSiLockViewOfSection @ 0x1402F7EC0 (CmSiLockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x1406FBF74 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  SIZE_T v6; // rdi
  void *v7; // r14
  NTSTATUS v12; // esi
  ULONG_PTR v13; // rcx
  char v14; // r13
  ULONG_PTR v15; // rcx
  __int64 i; // r8
  unsigned __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v21; // cl
  __int64 v22; // r8
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2[7] - a2[3];
  v6 = a4 - a3;
  LODWORD(v23) = 0;
  v7 = (void *)(a3 + v5);
  v12 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v7, a4 - a3, 2u, (ULONG *)&v23);
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
      v12 = CmSiProtectViewOfSection(v13, *(void ***)(a1 + 24), v7, v6, 8u, (ULONG *)&v23);
      if ( v12 >= 0 )
      {
        LOBYTE(v22) = 1;
        v12 = HvpViewMapTouchPages(v7, v6, v22);
        if ( v12 >= 0 )
        {
          CmSiProtectViewOfSection(v15, *(void ***)(a1 + 24), v7, v6, 2u, (ULONG *)&v23);
          goto LABEL_8;
        }
      }
    }
    else
    {
      v12 = HvpViewMapTouchPages(v7, v6, 0LL);
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
    CmSiProtectViewOfSection(v15, *(void ***)(a1 + 24), v7, v6, 0x80000001, (ULONG *)&v23);
  }
  return (unsigned int)v12;
}
