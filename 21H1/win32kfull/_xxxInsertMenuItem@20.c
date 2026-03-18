/*
 * XREFs of _xxxInsertMenuItem@20 @ 0x42D14
 * Callers:
 *     _NtUserThunkedMenuItemInfo@24 @ 0x1D426 (_NtUserThunkedMenuItemInfo@24.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z @ 0x1C032 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z.c)
 *     ?MNAllocMenuItems@@YGHABV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1DDEC (-MNAllocMenuItems@@YGHABV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z @ 0x2A41E (--0-$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1A7228 (-MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _MakeMenuRtoL@8 @ 0x1AB8A6 (_MakeMenuRtoL@8.c)
 */

int __fastcall xxxInsertMenuItem(int a1, size_t a2, int a3, int a4, unsigned __int16 *a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // edi
  size_t v9; // esi
  int **v10; // ebx
  _DWORD *v11; // esi
  PKTHREAD v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  _DWORD *v19; // esi
  PKTHREAD v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // ecx
  int v25; // eax
  int v27; // ecx
  size_t v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  _DWORD *v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  int v34; // ecx
  size_t v35; // eax
  int v36; // ecx
  int v37; // ebx
  size_t v38; // edi
  size_t v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // eax
  _DWORD *v45; // ecx
  _DWORD *v46; // ecx
  unsigned int v47; // esi
  signed int v48; // eax
  _DWORD *v49; // esi
  signed int v50; // edx
  bool v51; // zf
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // ebx
  int v55; // edi
  size_t v56; // edx
  int v57; // ecx
  int v58; // eax
  int *v59; // ecx
  int v60; // [esp-8h] [ebp-68h]
  int v61; // [esp-4h] [ebp-64h]
  _DWORD *v62; // [esp+10h] [ebp-50h] BYREF
  int **v63; // [esp+14h] [ebp-4Ch]
  _DWORD *v64; // [esp+18h] [ebp-48h] BYREF
  signed int v65; // [esp+1Ch] [ebp-44h]
  size_t Size; // [esp+20h] [ebp-40h]
  int v67; // [esp+24h] [ebp-3Ch] BYREF
  size_t v68; // [esp+28h] [ebp-38h]
  _DWORD *v69; // [esp+2Ch] [ebp-34h] BYREF
  _BYTE v70[8]; // [esp+34h] [ebp-2Ch] BYREF
  int *v71[2]; // [esp+3Ch] [ebp-24h] BYREF
  _DWORD *v72; // [esp+44h] [ebp-1Ch]
  _DWORD *v73; // [esp+48h] [ebp-18h] BYREF
  int v74; // [esp+4Ch] [ebp-14h] BYREF
  _DWORD *v75; // [esp+50h] [ebp-10h]
  int v76; // [esp+54h] [ebp-Ch] BYREF
  _DWORD *v77; // [esp+58h] [ebp-8h]
  int v78; // [esp+5Ch] [ebp-4h]

  Size = a2;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v73 = (_DWORD *)gSmartObjNullRef;
  v74 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v74;
  v75 = 0;
  v62 = 0;
  v64 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(0);
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v8 = 0;
  v65 = 0;
  v67 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v71, a1);
  v9 = Size;
  if ( Size == -1 )
  {
    v10 = 0;
    v63 = 0;
  }
  else
  {
    v33 = v75;
    if ( !v75 )
      v33 = (_DWORD *)*v73;
    v34 = (int)v72;
    v62 = v33;
    if ( !v72 )
      v34 = *v71[0];
    v10 = (int **)MNLookUpItem(v34, Size, a3, &v62);
    v75 = 0;
    v63 = v10;
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    if ( v10 )
    {
      v72 = v75;
      SmartObjStackRefBase<tagMENU>::operator=(*v73);
    }
    else
    {
      v9 = -1;
    }
  }
  if ( (*(_BYTE *)(*(_DWORD *)(*v71[0] + 20) + 20) & 1) == 0 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) )
    {
      if ( *(char *)(a4 + 4) >= 0 || (v44 = *(_DWORD *)(a4 + 44), v44 > 7) || !v44 )
      {
        Size = v9;
        v27 = v9;
        if ( v10 && !a3 )
        {
          v45 = v72;
          if ( !v72 )
            v45 = (_DWORD *)*v71[0];
          v27 = MNGetpItemIndex(v45, v10);
        }
        if ( !v27 )
        {
          if ( *(_DWORD *)(**(_DWORD **)(*v71[0] + 56) + 64) != 1 )
            goto LABEL_4;
          v9 = 1;
          a3 = 1;
          goto LABEL_40;
        }
        if ( v27 == -1 )
          v27 = *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24);
        v28 = v27 - 1;
        v29 = *(_DWORD *)(*v71[0] + 56) + 80 * v28;
        if ( v28 )
        {
          do
          {
            v30 = *(_DWORD *)(*(_DWORD *)v29 + 64);
            if ( !v30 )
              break;
            if ( v30 >= 7 )
              break;
            v9 = v28;
            a3 = 1;
            v29 -= 80;
            --v28;
          }
          while ( v28 );
          v10 = v63;
          v8 = 0;
LABEL_40:
          if ( v9 != Size )
          {
            v10 = (int **)(*(_DWORD *)(*v71[0] + 56) + 80 * v9);
            v63 = v10;
          }
        }
      }
    }
  }
LABEL_4:
  if ( *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) < *(_DWORD *)(*v71[0] + 32) )
    goto LABEL_5;
  if ( MNAllocMenuItems((int)v71, 0) )
  {
    if ( v9 == -1 )
      goto LABEL_5;
    v31 = v75;
    if ( !v75 )
      v31 = (_DWORD *)*v73;
    v32 = (int)v72;
    v62 = v31;
    if ( !v72 )
      v32 = *v71[0];
    v10 = (int **)MNLookUpItem(v32, v9, a3, &v62);
    v75 = 0;
    v63 = v10;
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    if ( SmartObjStackRef<tagMENU>::operator==(v71, (int)&v73) )
    {
LABEL_5:
      v11 = v72;
      if ( !v72 )
        v11 = (_DWORD *)*v71[0];
      v12 = KeGetCurrentThread();
      v13 = W32GetThreadWin32Thread(v12);
      v76 = *(_DWORD *)(v13 + 228);
      *(_DWORD *)(v13 + 228) = &v76;
      v77 = v11;
      if ( v11 )
        HMLockObject(v11);
      if ( v10 )
      {
        v42 = (int)v72;
        if ( !v72 )
          v42 = *v71[0];
        v43 = MNGetPopupFromMenu(v42, &v64);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v43);
        if ( *v69 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v70);
          v46 = v72;
          if ( !v72 )
            v46 = (_DWORD *)*v71[0];
          v47 = MNGetpItemIndex(v46, v10);
          v65 = v47;
          if ( *(_DWORD *)(*v69 + 40) >= v47 )
            ++*(_DWORD *)(*v69 + 40);
          if ( (*(_BYTE *)*v69 & 0x20) != 0 && *(_DWORD *)(*v69 + 44) >= v47 )
            ++*(_DWORD *)(*v69 + 44);
          if ( v64[11] == *(_DWORD *)(*v69 + 8) )
          {
            v48 = v64[12];
            if ( v48 >= (int)v47 )
              v64[12] = v48 + 1;
          }
          v49 = v64;
          if ( v64[14] == *(_DWORD *)(*v69 + 8) )
          {
            v50 = v64[15];
            v51 = v50 == v65;
            if ( v50 >= v65 )
            {
              v64[15] = v50 + 1;
              if ( v51 )
              {
                v52 = v49[16];
                if ( (v52 & 1) != 0 )
                  xxxMNSetGapState(v52, 0);
              }
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
        }
      }
      v14 = ThreadUnlock1();
      v72 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v14);
      if ( !SmartObjStackRef<tagMENU>::operator==(v71, v15) )
      {
        ++*(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24);
        v16 = *v71[0];
        if ( v10 )
        {
          Size = 80 * *(_DWORD *)(*(_DWORD *)(v16 + 20) + 24) + *(_DWORD *)(*v71[0] + 56) - (_DWORD)v10 - 80;
          if ( Size )
          {
            memmove(
              v10[20],
              *v10,
              76 * *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) + **(_DWORD **)(*v71[0] + 56) - (_DWORD)*v10 - 76);
            memmove(v10 + 20, v10, Size);
            v35 = ((int)v10 - *(_DWORD *)(*v71[0] + 56) + 80) / 80;
            v36 = *v71[0];
            v68 = v35;
            if ( v35 < *(_DWORD *)(*(_DWORD *)(v36 + 20) + 24) )
            {
              v37 = 80 * v35;
              v38 = v35;
              v39 = 76 * v35;
              Size = 76 * v35;
              do
              {
                *(_DWORD *)(v37 + *(_DWORD *)(*v71[0] + 56)) = v39 + *(_DWORD *)(*v71[0] + 60);
                v40 = *(_DWORD *)(*(_DWORD *)(*v71[0] + 56) + v37) - *(_DWORD *)(*(_DWORD *)(*v71[0] + 12) + 8);
                ++v38;
                v41 = *(_DWORD *)(*v71[0] + 56);
                v39 = Size + 76;
                Size += 76;
                *(_DWORD *)(v41 + v37 + 4) = v40;
                v37 += 80;
              }
              while ( v38 < *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) );
              v10 = v63;
              v8 = 0;
            }
          }
        }
        else
        {
          v10 = (int **)(80 * *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) + *(_DWORD *)(v16 + 56) - 80);
        }
        **v10 = 0;
        (*v10)[1] = 0;
        (*v10)[2] = 0;
        (*v10)[3] = 0;
        v10[2] = 0;
        (*v10)[4] = 0;
        (*v10)[5] = 0;
        (*v10)[7] = 0;
        (*v10)[8] = 0;
        (*v10)[9] = 0;
        (*v10)[10] = 0;
        (*v10)[11] = 0;
        (*v10)[12] = 0;
        (*v10)[16] = 0;
        (*v10)[17] = -1;
        (*v10)[6] = 0;
        v10[3] = 0;
        v10[18] = 0;
        v10[19] = 0;
        v17 = v72;
        if ( !v72 )
          v17 = (_DWORD *)*v71[0];
        if ( MNIsUAHMenu(v17) )
        {
          memset(v10 + 9, 0, 0x20u);
          v8 = 0;
        }
        if ( SetLPITEMInfoNoRedraw(v71, (int)v10, (char *)a4, a5, &v67) )
        {
          if ( !v67 )
            goto LABEL_24;
          v19 = v72;
          if ( !v72 )
            v19 = (_DWORD *)*v71[0];
          v20 = KeGetCurrentThread();
          v21 = W32GetThreadWin32Thread(v20);
          v76 = *(_DWORD *)(v21 + 228);
          *(_DWORD *)(v21 + 228) = &v76;
          v77 = v19;
          if ( v19 )
            HMLockObject(v19);
          xxxRedrawForSetLPITEMInfo(v71, (int)v10);
          v22 = ThreadUnlock1();
          v72 = 0;
          SmartObjStackRefBase<tagMENU>::operator=(v22);
          if ( !SmartObjStackRef<tagMENU>::operator==(v71, v23) )
          {
LABEL_24:
            v24 = v72;
            if ( !v72 )
              v24 = (_DWORD *)*v71[0];
            if ( MNGetpItemIndex(v24, v10) != -1 )
            {
              if ( (*(_BYTE *)(*(_DWORD *)(*v71[0] + 20) + 20) & 0x20) != 0
                || (v25 = **v10, (v25 & 0x2000) != 0) && (v25 & 4) == 0 )
              {
                **v10 |= 0x6000u;
                v59 = v10[2];
                if ( v59 )
                  MakeMenuRtoL(v59, 1);
              }
            }
            v8 = 1;
          }
        }
        else
        {
          if ( *v69 )
          {
            v61 = v18;
            v60 = v18;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(*v69);
            MNDeleteAdjustIndexes(v64, v65, v60, v61);
          }
          v53 = (int)v72;
          if ( !v72 )
            v53 = *v71[0];
          MNFreeItem(v53, (int)v10, 1);
          v68 = 80 * *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) + *(_DWORD *)(*v71[0] + 56) - (_DWORD)v10 - 80;
          if ( v68 )
          {
            memmove(
              *v10,
              v10[20],
              76 * *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) + **(_DWORD **)(*v71[0] + 56) - (_DWORD)v10[20]);
            memmove(v10, v10 + 20, v68);
            v54 = ((int)v10 - *(_DWORD *)(*v71[0] + 56)) / 80;
            if ( v54 < *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) - 1 )
            {
              v55 = 80 * v54;
              v56 = 76 * v54;
              Size = 76 * v54;
              do
              {
                *(_DWORD *)(v55 + *(_DWORD *)(*v71[0] + 56)) = v56 + *(_DWORD *)(*v71[0] + 60);
                v57 = *(_DWORD *)(*(_DWORD *)(*v71[0] + 56) + v55) - *(_DWORD *)(*(_DWORD *)(*v71[0] + 12) + 8);
                ++v54;
                v58 = *(_DWORD *)(*v71[0] + 56);
                v56 = Size + 76;
                Size += 76;
                *(_DWORD *)(v58 + v55 + 4) = v57;
                v55 += 80;
              }
              while ( v54 < *(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24) - 1 );
              v8 = 0;
            }
          }
          --*(_DWORD *)(*(_DWORD *)(*v71[0] + 20) + 24);
        }
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v71);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v69);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v73);
  return v8;
}
