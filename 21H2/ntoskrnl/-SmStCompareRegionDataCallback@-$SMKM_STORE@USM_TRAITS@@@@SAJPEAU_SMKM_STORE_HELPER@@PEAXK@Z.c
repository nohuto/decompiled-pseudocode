/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140245270
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1402903D4 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x1402455B4 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14028F918 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14028FAB0 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14059A260 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned __int64 a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  volatile signed __int32 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned int *v13; // r13
  unsigned int *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-88h]
  void *Buf2; // [rsp+40h] [rbp-68h]
  void *Buf1; // [rsp+48h] [rbp-60h]
  unsigned __int64 v24; // [rsp+58h] [rbp-50h]
  unsigned int *i; // [rsp+60h] [rbp-48h]
  _DWORD *v26; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v6 = 0LL;
  v7 = a1 - 6232;
  v8 = 0;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  v10 = (volatile signed __int32 *)(v7 + 6596);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 6596));
  v11 = *(unsigned int *)a2;
  if ( (*(_BYTE *)(v7 + 6021) & 4) == 0 )
  {
    v12 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v7 + 6216) + 8 * v11) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    goto LABEL_7;
  }
  v12 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v11, 0, a4, 64);
  if ( v12 > 3 )
  {
LABEL_7:
    v13 = (unsigned int *)(a2 + 4);
    v14 = (unsigned int *)((char *)a2 + a2[3]);
    for ( i = v14; ; v14 = i )
    {
      if ( v13 >= v14 )
      {
LABEL_23:
        v10 = (volatile signed __int32 *)(v7 + 6596);
        goto LABEL_24;
      }
      Buf1 = (void *)(v12 + *v13);
      *((_BYTE *)v13 + 7) = 16;
      v15 = (unsigned __int64)&v13[2 * *((unsigned __int8 *)v13 + 6) + 2];
      v24 = v15;
      a3 = v13 + 2;
      while ( 1 )
      {
        v26 = a3;
        if ( (unsigned __int64)a3 >= v15 )
          break;
        if ( v6 )
        {
          if ( v8 == *a3 )
            goto LABEL_32;
          if ( v6 != v12 )
          {
            if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (_DWORD)a3, a4, v21, 8);
            }
            else
            {
              v16 = *(_QWORD *)(v7 + 6216);
              a4 = *(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL;
              v17 = *(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
              *(_QWORD *)(v16 + 8LL * v8) = v17;
              if ( (v17 & 3) != 0 )
                goto LABEL_19;
              SmFpFree(v7 + 6608, 5LL, KeGetCurrentThread(), a4);
            }
            a3 = v26;
          }
        }
LABEL_19:
        v8 = *a3;
        if ( *a3 == *(_DWORD *)a2 )
        {
          v6 = v12;
        }
        else
        {
          v6 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v8, 0, a4, 64);
          if ( v6 <= 3 )
          {
            v5 = -1073741670;
            goto LABEL_23;
          }
          a3 = v26;
        }
LABEL_32:
        Buf2 = (void *)(v6 + (unsigned int)a3[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(Buf2, *((unsigned __int16 *)v13 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v13 + 2)) )
            *((_BYTE *)v13 + 7) = ((char *)v26 - (char *)(v13 + 2)) >> 3;
          if ( *((_BYTE *)v13 + 7) != 16 )
            break;
        }
        a3 = v26 + 2;
        v15 = v24;
      }
      v13 += 2 * *((unsigned __int8 *)v13 + 6) + 2;
    }
  }
  v5 = -1073741670;
LABEL_24:
  if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 && v12 > 3 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, *(_DWORD *)a2, (_DWORD)a3, a4, v21, 8);
  if ( v6 > 3 && v6 != v12 )
  {
    if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (_DWORD)a3, a4, v21, 8);
    }
    else
    {
      v18 = *(_QWORD *)(v7 + 6216);
      v19 = *(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL;
      v20 = *(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v18 + 8LL * v8) = v20;
      if ( (v20 & 3) == 0 )
        SmFpFree(v7 + 6608, 5LL, KeGetCurrentThread(), v19);
    }
  }
  _InterlockedDecrement(v10);
  return v5;
}
