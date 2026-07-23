/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14059C2D8
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14059C650 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x14028C158 (SmEtwEnabled.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028DB5C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14059C478 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x14059DB20 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  ULONGLONG *v7; // rax
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // dl
  void *v12; // rsp
  int Keys; // esi
  __int64 v14; // rbx
  int v15; // eax
  int *v16; // rbx
  int v17; // edx
  int *v18; // rdi
  int v19; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  __int64 v23; // [rsp+428h] [rbp+8h]
  __int128 v24; // [rsp+430h] [rbp+10h] BYREF
  __int128 v25; // [rsp+440h] [rbp+20h]

  v5 = a3;
  v24 = 0LL;
  v23 = a2;
  LODWORD(v24) = 1;
  v25 = 0LL;
  LODWORD(v25) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  v7 = SmEtwEnabled(0);
  if ( v7 )
  {
    v10 = *(_QWORD *)(a1 + 1048);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + v5);
    else
      v11 = 0;
    SmEtwLogRegionOp((_DWORD)v7, 3, a1, v5, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5), v11);
    v8 = v23;
  }
  v12 = alloca(1024LL);
  do
  {
    LODWORD(NumOfElements) = 256;
    Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v8, v5, v9, a5, (__int64)Base, (__int64)&NumOfElements);
    if ( Keys < 0 || !(_DWORD)NumOfElements )
      break;
    v14 = (unsigned int)NumOfElements;
    qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
    v15 = Base[0];
    v16 = &Base[v14];
    DWORD2(v24) = Base[0];
    v17 = Base[0];
    v18 = Base;
    v19 = 0;
LABEL_10:
    if ( v15 != v17 )
      goto LABEL_13;
    while ( 1 )
    {
      ++v19;
      if ( ++v18 < v16 )
      {
        v17 = *v18;
        ++v15;
        goto LABEL_10;
      }
      if ( v18 != v16 )
        break;
LABEL_13:
      HIDWORD(v24) = v19;
      Keys = ST_STORE<SM_TRAITS>::StDmPageRemove(a1, (__int64)&v24);
      if ( Keys < 0 )
        return (unsigned int)Keys;
      v15 = *v18;
      v19 = 0;
      DWORD2(v24) = *v18;
    }
    v8 = v23;
  }
  while ( (unsigned int)NumOfElements >= 0x100 );
  return (unsigned int)Keys;
}
