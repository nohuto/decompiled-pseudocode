/*
 * XREFs of ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x18048722C
 * Callers:
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x1804871B4 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180148888 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801AD220 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$SortEx@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAJAEBVCBucketComparator@@@Z @ 0x180486C3C (--$SortEx@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUB.c)
 *     ??0BUCKET@@QEAA@XZ @ 0x180486EA0 (--0BUCKET@@QEAA@XZ.c)
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x180486F60 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x180487760 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x1804879F0 (DPA_InsertPtr.c)
 */

char __fastcall _GetNthMostDominantColorFromBits(
        struct tagRGBQUAD *p,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  __int64 v10; // rsi
  char v13; // r13
  void *v14; // r8
  int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  int v19; // r14d
  __int64 v20; // rdx
  HDPA *v21; // rdi
  __int64 v22; // rsi
  BUCKET *v23; // rax
  HDPA *v24; // rbx
  void *v25; // r8
  unsigned __int64 v26; // rcx
  HDPA **v27; // rdx
  unsigned __int64 v28; // rax
  int v29; // edi
  int v30; // r10d
  int v31; // r11d
  int v32; // r9d
  int v33; // ebx
  __int64 v34; // r8
  int v35; // esi
  unsigned __int8 **v36; // rdx
  unsigned __int8 *v37; // rcx
  unsigned int v38; // esi
  __int64 v39; // rdi
  struct _DPA **v40; // rbx
  __int64 v42; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-C0h]
  unsigned int *v47; // [rsp+50h] [rbp-B8h]
  HDPA hdpa[28]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = a8;
  v10 = a2;
  v47 = a8;
  v13 = 0;
  `vector constructor iterator'((char *)hdpa, 8LL, 27LL, (void (__fastcall *)(char *))BUCKET::BUCKET);
  v15 = 0;
  if ( a3 > 0 )
  {
    v16 = (unsigned int)a3;
    v17 = 4LL * (a4 - (int)v10);
    do
    {
      if ( (int)v10 > 0 )
      {
        v18 = v10;
        do
        {
          if ( p->rgbReserved )
          {
            DPA_InsertPtr(hdpa[p->rgbBlue / 0x56u + 3 * (p->rgbGreen / 0x56u + 3 * (p->rgbRed / 0x56u))], 0x7FFFFFFF, p);
            ++v15;
          }
          ++p;
          --v18;
        }
        while ( v18 );
      }
      p = (struct tagRGBQUAD *)((char *)p + v17);
      --v16;
    }
    while ( v16 );
    v8 = v47;
  }
  v19 = 0;
  pv = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&pv,
              0x1BuLL,
              v14) < 0 )
    goto LABEL_41;
  v21 = hdpa;
  v22 = 27LL;
  do
  {
    v23 = (BUCKET *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v23 )
      v24 = (HDPA *)BUCKET::BUCKET(v23);
    else
      v24 = 0LL;
    if ( v24 )
    {
      DPA_Clone(*v21, *v24);
      v26 = v44;
      if ( v44 == v46 )
      {
        if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)&pv,
                    v44 + 1,
                    v25) < 0 )
          goto LABEL_21;
        v26 = v44;
      }
      v44 = v26 + 1;
      v27 = (HDPA **)((char *)pv + 8 * v26);
      if ( v27 )
        *v27 = v24;
    }
LABEL_21:
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( (int)CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::SortEx<CBucketComparator>(
              (__int64)&pv,
              (__int64)&v42) < 0 )
    goto LABEL_33;
  v28 = v44;
  v20 = *((_QWORD *)pv + v44 - 1);
  if ( v20 )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( *(_QWORD *)v20 )
      v32 = **(_DWORD **)v20;
    else
      v32 = 0;
    v33 = 0;
    v34 = v32;
    v35 = 0;
    if ( v32 > 0 )
    {
      v29 = v32;
      v36 = *(unsigned __int8 ***)(*(_QWORD *)v20 + 8LL);
      do
      {
        v37 = *v36++;
        v31 += v37[2];
        v33 += v37[1];
        v19 = v31;
        v30 += *v37;
        v35 = v30;
        --v34;
      }
      while ( v34 );
    }
    if ( MulDiv(v32, 100, v15) >= 7 && v15 >= 5 )
    {
      v13 = 1;
      v20 = (unsigned int)(v19 >> 31);
      LODWORD(v20) = v19 % v29;
      *v8 = (unsigned __int8)(v19 / v29) | ((unsigned __int8)(v35 / v29) << 16) | ((unsigned __int8)(v33 / v29) << 8);
    }
LABEL_33:
    v28 = v44;
  }
  v38 = 0;
  if ( v28 )
  {
    v39 = 0LL;
    do
    {
      v40 = (struct _DPA **)*((_QWORD *)pv + v39);
      if ( v40 )
      {
        CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(*((struct _DPA ***)pv + v39));
        if ( *v40 )
          CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(v40);
        operator delete(v40);
      }
      ++v38;
      *((_QWORD *)pv + v39) = 0LL;
      v39 = v38;
    }
    while ( v38 < v44 );
  }
LABEL_41:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v44 = 0LL;
  v46 = 0LL;
  `vector destructor iterator'((char *)hdpa, v20, 27LL, (void (__fastcall *)(char *))BUCKET::~BUCKET);
  return v13;
}
