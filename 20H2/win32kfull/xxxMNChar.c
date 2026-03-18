/*
 * XREFs of xxxMNChar @ 0x1C02373E4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMessageBeep @ 0x1C0152270 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C0250338 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r13
  int v7; // r12d
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // rbx
  __int64 v30; // rax
  struct _LARGE_STRING *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD v39[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v40; // [rsp+38h] [rbp-39h]
  __int128 v41; // [rsp+40h] [rbp-31h] BYREF
  __int64 v42; // [rsp+50h] [rbp-21h]
  __int128 v43; // [rsp+58h] [rbp-19h] BYREF
  __int64 v44; // [rsp+68h] [rbp-9h]
  __int128 v45; // [rsp+70h] [rbp-1h] BYREF
  __int64 v46; // [rsp+80h] [rbp+Fh]
  _QWORD v47[4]; // [rsp+88h] [rbp+17h] BYREF
  int v48; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v39, 0LL);
  v46 = 0LL;
  v44 = 0LL;
  v6 = 0LL;
  v48 = 0;
  v7 = 0;
  v42 = 0LL;
  v8 = *a1;
  v45 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v9 = *(_QWORD *)(*v8 + 40);
  v40 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v39, v9);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v10 = v40;
    if ( !v40 )
      v10 = *(_QWORD *)v39[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v43 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v43;
    *((_QWORD *)&v43 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    v12 = *(_QWORD *)(**a1 + 48);
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v41 = *(_QWORD *)(v13 + 416);
    *(_QWORD *)(v13 + 416) = &v41;
    *((_QWORD *)&v41 + 1) = v12;
    if ( v12 )
      HMLockObject(v12);
    v14 = xxxMNFindChar(v39, a3, *(unsigned int *)(**a1 + 80), &v48);
    v16 = v14;
    if ( v14 != -1 )
    {
      v17 = v14;
      while ( 1 )
      {
        v18 = v40;
        if ( !v40 )
          v18 = *(_QWORD *)v39[0];
        v19 = MNGetpItemFromIndex(v18, v16);
        if ( !v19 || (*(_DWORD *)(*(_QWORD *)v19 + 4LL) & 3) == 0 )
          break;
        v16 = xxxMNFindChar(v39, a3, v20, &v48);
        if ( v16 == v17 )
          goto LABEL_57;
      }
      v21 = v20;
      do
      {
        v22 = xxxMNFindChar(v39, a3, v20, &v48);
        v23 = v40;
        if ( !v40 )
          v23 = *(_QWORD *)v39[0];
        v24 = MNGetpItemFromIndex(v23, v22);
      }
      while ( v24 && (*(_DWORD *)(*(_QWORD *)v24 + 4LL) & 3) != 0 && v20 != v17 );
      if ( v17 == v20 || v20 == v21 )
        v7 = 1;
      if ( v21 != -1 )
        goto LABEL_51;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v7 = 1;
        goto LABEL_51;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_62;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)&v41);
        SmartObjStackRefBase<tagMENU>::Init(v47, *(_QWORD *)(**a1 + 48));
        v47[2] = 0LL;
        v25 = xxxMNFindChar(v47, a3, 0LL, &v48);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v47);
        if ( v25 != -1 )
        {
LABEL_62:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_58;
        }
      }
    }
    v28 = ((*(_DWORD *)**a1 & 4) << 11) | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      v28 = (*(_DWORD *)**a1 & 4) << 11;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      v29 = *(_QWORD *)(**a1 + 8);
      v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v45 = *(_QWORD *)(v30 + 416);
      *(_QWORD *)(v30 + 416) = &v45;
      *((_QWORD *)&v45 + 1) = v29;
      HMLockObject(v29);
      if ( *(_QWORD *)(**a1 + 40) )
        v31 = **(struct _LARGE_STRING ***)(**a1 + 40);
      else
        v31 = 0LL;
      v6 = xxxSendMessage(
             *(_QWORD *)(**a1 + 8),
             0x120u,
             (unsigned __int16)a3 | (unsigned __int64)(unsigned int)(v28 << 16),
             v31);
      ThreadUnlock1(v33, v32, v34);
    }
    v27 = v6 >> 16;
    if ( WORD1(v6) )
    {
      if ( WORD1(v6) != 1 )
      {
        v26 = (unsigned int)WORD1(v6) - 2;
        if ( WORD1(v6) == 2 )
        {
          v7 = 1;
        }
        else if ( WORD1(v6) != 3 )
        {
          goto LABEL_58;
        }
        v26 = (unsigned __int16)v6;
        v27 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(v27 + 44) && (__int16)v6 != -1 )
        {
LABEL_51:
          xxxMNSelectItem(a1, a2);
          if ( v7 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_58:
        ThreadUnlock1(v27, v26, v15);
        ThreadUnlock1(v36, v35, v37);
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v39);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v26 = **a1, v27 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1392LL) != *(_QWORD *)(v26 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v28 & 0x10) != 0 )
        goto LABEL_58;
    }
LABEL_57:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_58;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v39);
}
