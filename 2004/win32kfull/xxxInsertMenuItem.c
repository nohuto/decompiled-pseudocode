/*
 * XREFs of xxxInsertMenuItem @ 0x1C00A2D8C
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C005F080 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005DDA0 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C005F8B4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1C00A0700 (MNLookUpItem.c)
 *     MNGetPopupFromMenu @ 0x1C00A287C (MNGetPopupFromMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00AECD0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     MNFreeItem @ 0x1C00AF168 (MNFreeItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01148F8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C024A740 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1C024FBA4 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 ThreadWin32Thread; // rax
  int **v11; // rdi
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // edx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  __int128 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // ecx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  _QWORD *v45; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _DWORD *v51; // rax
  size_t v52; // r14
  __int64 v53; // r10
  char v54; // cl
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  signed int v58; // eax
  __int64 *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  unsigned int v63; // r14d
  __int64 v64; // r10
  __int64 v65; // r9
  int *v66; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v69; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v71[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v72; // [rsp+40h] [rbp-51h]
  _QWORD v73[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v74; // [rsp+58h] [rbp-39h] BYREF
  __int64 v75; // [rsp+60h] [rbp-31h] BYREF
  __int64 v76; // [rsp+68h] [rbp-29h]
  __int64 *v77; // [rsp+70h] [rbp-21h] BYREF
  __int128 v78; // [rsp+78h] [rbp-19h] BYREF
  __int64 v79; // [rsp+88h] [rbp-9h]
  char v80[8]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v81[72]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v82; // [rsp+F0h] [rbp+5Fh] BYREF
  int v83; // [rsp+F8h] [rbp+67h] BYREF

  v9 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v74 = (__int64 *)gSmartObjNullRef;
  v11 = 0LL;
  v77 = 0LL;
  v75 = *(_QWORD *)(ThreadWin32Thread + 1464);
  *(_QWORD *)(ThreadWin32Thread + 1464) = &v75;
  v76 = 0LL;
  v82 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v73, 0LL);
  v12 = (_QWORD *)*a1;
  v83 = 0;
  v13 = 0;
  v78 = 0LL;
  v79 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v71, *v12);
  v14 = a1[2];
  v15 = -1;
  v72 = v14;
  if ( a2 != -1 )
  {
    v49 = v76;
    if ( !v76 )
    {
      v14 = v72;
      v49 = *v74;
    }
    v82 = v49;
    if ( !v14 )
      v14 = *v71[0];
    v11 = (int **)MNLookUpItem(v14, a2, a3, &v82);
    v76 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v74);
    if ( v11 )
    {
      v72 = v76;
      SmartObjStackRefBase<tagMENU>::operator=(v71);
      v15 = -1;
    }
    else
    {
      v15 = -1;
      a2 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL)
    && ((*(_DWORD *)(a4 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(a4 + 72) - 1LL) > 6) )
  {
    v16 = a2;
    v17 = a2;
    if ( v11 && !a3 )
    {
      v56 = v72;
      if ( !v72 )
        v56 = *v71[0];
      v16 = MNGetpItemIndex(v56, (__int64)v11);
    }
    if ( v16 )
    {
      if ( v16 == v15 )
        v16 = *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL);
      v18 = (unsigned int)(v15 + v16);
      v19 = *(_QWORD *)(*v71[0] + 88) + 96 * v18;
      if ( !(_DWORD)v18 )
        goto LABEL_13;
      do
      {
        v20 = *(_QWORD *)(*(_QWORD *)v19 + 96LL);
        if ( !v20 )
          break;
        if ( v20 >= 7 )
          break;
        v19 -= 96LL;
        a2 = v18;
        a3 = 1;
        LODWORD(v18) = v15 + v18;
      }
      while ( (_DWORD)v18 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*v71[0] + 88) + 96LL) == 1LL )
      {
        v54 = 1;
        a2 = 1;
      }
      else
      {
        v54 = 0;
      }
      v55 = 1;
      if ( !v54 )
        v55 = a3;
      a3 = v55;
    }
    if ( a2 != v17 )
      v11 = (int **)(*(_QWORD *)(*v71[0] + 88) + 96LL * a2);
  }
LABEL_13:
  if ( *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) >= *(_DWORD *)(*v71[0] + 60) )
  {
    if ( !(unsigned int)MNAllocMenuItems(v71, 0) )
      goto LABEL_102;
    if ( a2 != -1 )
    {
      v47 = v76;
      if ( !v76 )
        v47 = *v74;
      v48 = v72;
      v82 = v47;
      if ( !v72 )
        v48 = *v71[0];
      v11 = (int **)MNLookUpItem(v48, a2, a3, &v82);
      v76 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v74);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v71, &v74) )
        goto LABEL_102;
    }
  }
  v21 = v72;
  if ( !v72 )
    v21 = *v71[0];
  v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = &v78;
  v25 = *(_QWORD *)(v22 + 408);
  *(_QWORD *)&v78 = v25;
  *(_QWORD *)(v22 + 408) = &v78;
  *((_QWORD *)&v78 + 1) = v21;
  if ( v21 )
    HMLockObject(v21);
  if ( v11 )
  {
    v50 = v72;
    if ( !v72 )
      v50 = *v71[0];
    v51 = MNGetPopupFromMenu(v50, &v77);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v73, v51);
    if ( *(_QWORD *)v73[0] )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v80);
      v57 = v72;
      if ( !v72 )
        v57 = *v71[0];
      v13 = MNGetpItemIndex(v57, (__int64)v11);
      if ( *(_DWORD *)(*(_QWORD *)v73[0] + 80LL) >= v13 )
        ++*(_DWORD *)(*(_QWORD *)v73[0] + 80LL);
      if ( (**(_DWORD **)v73[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v73[0] + 84LL) >= v13 )
        ++*(_DWORD *)(*(_QWORD *)v73[0] + 84LL);
      if ( v77[8] == *(_QWORD *)(*(_QWORD *)v73[0] + 16LL) )
      {
        v58 = *((_DWORD *)v77 + 18);
        if ( v58 >= (int)v13 )
          *((_DWORD *)v77 + 18) = v58 + 1;
      }
      v59 = v77;
      if ( v77[10] == *(_QWORD *)(*(_QWORD *)v73[0] + 16LL) )
      {
        v60 = *((unsigned int *)v77 + 22);
        if ( (int)v60 >= (int)v13 )
        {
          *((_DWORD *)v77 + 22) = v60 + 1;
          if ( (_DWORD)v60 == v13 )
          {
            v61 = *((unsigned int *)v59 + 23);
            if ( (v61 & 1) != 0 )
              xxxMNSetGapState(v59[10], v60, v61, 0LL);
          }
        }
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v80);
    }
  }
  ThreadUnlock1(v24, v25, v23);
  v72 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v71);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v71) )
    goto LABEL_102;
  ++*(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL);
  v29 = *v71[0];
  if ( v11 )
  {
    v26 = *v71[0];
    v52 = *(_QWORD *)(*v71[0] + 88) + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v29 + 40) + 44LL) - 1) - (_QWORD)v11;
    if ( v52 )
    {
      memmove(
        v11[12],
        *v11,
        **(_QWORD **)(*v71[0] + 88)
      + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) - 1)
      - (_QWORD)*v11);
      memmove(v11 + 12, v11, v52);
      v26 = (unsigned __int128)(((__int64)v11 - *(_QWORD *)(*v71[0] + 88) + 96) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v53 = ((__int64)v11 - *(_QWORD *)(*v71[0] + 88) + 96) / 96;
      while ( (unsigned int)v53 < *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) )
      {
        v28 = 96LL * (int)v53;
        *(_QWORD *)(v28 + *(_QWORD *)(*v71[0] + 88)) = *(_QWORD *)(*v71[0] + 96) + 112LL * (unsigned int)v53;
        v27 = *v71[0];
        v26 = *(_QWORD *)(v28 + *(_QWORD *)(*v71[0] + 88)) - *(_QWORD *)(*(_QWORD *)(*v71[0] + 24) + 16LL);
        LODWORD(v53) = v53 + 1;
        *(_QWORD *)(*(_QWORD *)(*v71[0] + 88) + v28 + 8) = v26;
      }
    }
  }
  else
  {
    v11 = (int **)(96LL * *(unsigned int *)(*(_QWORD *)(*v71[0] + 40) + 44LL) + *(_QWORD *)(v29 + 88) - 96LL);
  }
  **v11 = 0;
  (*v11)[1] = 0;
  (*v11)[2] = 0;
  *((_QWORD *)*v11 + 2) = 0LL;
  v11[2] = 0LL;
  *((_QWORD *)*v11 + 3) = 0LL;
  *((_QWORD *)*v11 + 4) = 0LL;
  (*v11)[12] = 0;
  *((_QWORD *)*v11 + 7) = 0LL;
  (*v11)[16] = 0;
  (*v11)[17] = 0;
  (*v11)[18] = 0;
  (*v11)[19] = 0;
  *((_QWORD *)*v11 + 12) = 0LL;
  (*v11)[26] = -1;
  *((_QWORD *)*v11 + 5) = 0LL;
  v11[3] = 0LL;
  v11[11] = 0LL;
  v30 = v72;
  if ( !v72 )
    v30 = *v71[0];
  if ( (unsigned int)MNIsUAHMenu(v30, v26, v27, v28) )
  {
    *(_OWORD *)((char *)v11 + 52) = 0LL;
    *(_OWORD *)((char *)v11 + 68) = 0LL;
  }
  if ( !(unsigned int)SetLPITEMInfoNoRedraw((unsigned int)v71, (_DWORD)v11, a4, a5, (__int64)&v83) )
  {
    if ( *(_QWORD *)v73[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, *(_QWORD *)v73[0]);
      MNDeleteAdjustIndexes(v77, v81, v13);
    }
    v62 = v72;
    if ( !v72 )
      v62 = *v71[0];
    MNFreeItem(v62, v11, 1LL);
    v63 = 96 * *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) + *(_DWORD *)(*v71[0] + 88) - (_DWORD)v11 - 96;
    if ( 96 * *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) + *(_DWORD *)(*v71[0] + 88) - (_DWORD)v11 != 96 )
    {
      memmove(
        *v11,
        v11[12],
        (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL)
                     + **(_DWORD **)(*v71[0] + 88)
                     - *((_DWORD *)v11 + 24)));
      memmove(v11, v11 + 12, v63);
      v64 = ((__int64)v11 - *(_QWORD *)(*v71[0] + 88)) / 96;
      while ( (unsigned int)v64 < *(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL) - 1 )
      {
        v65 = 96LL * (int)v64;
        *(_QWORD *)(v65 + *(_QWORD *)(*v71[0] + 88)) = *(_QWORD *)(*v71[0] + 96) + 112LL * (unsigned int)v64;
        LODWORD(v64) = v64 + 1;
        *(_QWORD *)(*(_QWORD *)(*v71[0] + 88) + v65 + 8) = *(_QWORD *)(v65 + *(_QWORD *)(*v71[0] + 88))
                                                         - *(_QWORD *)(*(_QWORD *)(*v71[0] + 24) + 16LL);
      }
    }
    --*(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 44LL);
    goto LABEL_102;
  }
  if ( v83 )
  {
    v31 = v72;
    if ( !v72 )
      v31 = *v71[0];
    v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v78 = *(_QWORD *)(v32 + 408);
    *(_QWORD *)(v32 + 408) = &v78;
    *((_QWORD *)&v78 + 1) = v31;
    if ( v31 )
      HMLockObject(v31);
    xxxRedrawForSetLPITEMInfo(v71, (__int64)v11);
    ThreadUnlock1(v34, v33, v35);
    v72 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v71);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v71) )
    {
LABEL_102:
      v9 = 0;
      goto LABEL_38;
    }
  }
  v36 = v72;
  if ( !v72 )
    v36 = *v71[0];
  if ( (unsigned int)MNGetpItemIndex(v36, (__int64)v11) != -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*v71[0] + 40) + 40LL) & 0x20) != 0
      || (v37 = **v11, (v37 & 0x2000) != 0) && (v37 & 4) == 0 )
    {
      **v11 |= 0x6000u;
      v66 = v11[2];
      if ( v66 )
        MakeMenuRtoL(v66, 1LL);
    }
  }
LABEL_38:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v71);
  CurrentThread = KeGetCurrentThread();
  v39 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (CurrentProcess = PsGetCurrentProcess(v42, v41, v43),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v69),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v44 )
      v39 = *v44;
  }
  if ( v73[0] != gSmartObjNullRef && !--*(_DWORD *)(v73[0] + 8LL) )
  {
    if ( *(_BYTE *)(v73[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v73[0]);
  }
  v45 = *(_QWORD **)(v39 + 1464);
  if ( v45 )
    *(_QWORD *)(v39 + 1464) = *v45;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v74);
  return v9;
}
