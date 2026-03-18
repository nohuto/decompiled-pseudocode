/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C02492B4
 * Callers:
 *     xxxSetMenuInfo @ 0x1C00341B4 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C003621C (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0234E8C (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r14
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // esi
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  unsigned __int16 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // r8d
  __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // r10
  _QWORD v34[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v35; // [rsp+50h] [rbp-49h]
  _QWORD v36[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v38[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *a1;
  v5 = a3;
  *(_OWORD *)v38 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v34, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  v35 = 0LL;
  v36[2] = 0LL;
  v37[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v36;
  v36[1] = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = v35;
  if ( !v35 )
    v8 = *(_QWORD *)v34[0];
  v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37[0] = *(_QWORD *)(v9 + 416);
  *(_QWORD *)(v9 + 416) = v37;
  v37[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  GetClientRect((__int64)v6, (__int64)v38);
  v12 = *(_QWORD *)v34[0];
  if ( *(_DWORD *)(*(_QWORD *)v34[0] + 64LL) )
    goto LABEL_34;
  v39 = *(struct tagRECT *)v38;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v38, 12));
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v38, 8));
  v15 = *(_DWORD *)(*(_QWORD *)v34[0] + 124LL);
  xxxSendMessage((unsigned __int64)v6, 0x1E2u, v5, 0LL);
  v16 = v35;
  if ( !v35 )
    v16 = *(_QWORD *)v34[0];
  if ( (unsigned int)MNGetpItemIndex(v16, a2) == -1 )
    goto LABEL_29;
  LOBYTE(v5) = v5 & 0xFB;
  v12 = *(_QWORD *)v34[0];
  if ( (((unsigned __int8)v15 ^ *(_BYTE *)(*(_QWORD *)v34[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v38[1]) = v17;
  if ( !a2 )
    goto LABEL_34;
  if ( v17 != v14 )
  {
LABEL_29:
    v26 = 0LL;
LABEL_30:
    xxxInvalidateRect(v6, (int *)v26, 1);
    goto LABEL_31;
  }
  HIDWORD(v38[1]) = *(_DWORD *)(*(_QWORD *)v34[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v34[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v38[1]) <= v13 )
    {
      v18 = v35;
      if ( !v35 )
        v18 = *(_QWORD *)v34[0];
      v19 = MNGetpItemFromIndex(v18, *(_DWORD *)(v18 + 116));
      v12 = *(_QWORD *)v19;
      v11 = (unsigned int)(v20 - *(_DWORD *)(*(_QWORD *)v19 + 68LL));
      HIDWORD(v38[0]) = v11;
      goto LABEL_40;
    }
    GetClientRect((__int64)v6, (__int64)&v39);
  }
  if ( v35 )
    v21 = v35;
  else
    v21 = *(_QWORD *)v34[0];
  v22 = MNGetpItemFromIndex(v21, *(_DWORD *)(v21 + 116));
  v12 = *(_QWORD *)v22;
  v11 = (unsigned int)(v24 - *(_DWORD *)(*(_QWORD *)v22 + 68LL));
  v39.top = v11;
  HIDWORD(v38[0]) = v11;
  if ( (int)v11 >= 0 )
  {
    v12 = *(_QWORD *)v34[0];
    if ( v39.top < *(_DWORD *)(*(_QWORD *)v34[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0, HIDWORD(v38[1]) - v13, &v39, (struct tagRECT *)v38, 0LL, 0LL, 6);
      if ( v35 )
        v25 = v35;
      else
        v25 = *(_QWORD *)v34[0];
      if ( (unsigned int)MNGetpItemIndex(v25, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v23 = v35;
  }
LABEL_35:
  if ( (v5 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v23 )
    v23 = *(_QWORD *)v34[0];
  v31 = MNGetpItemFromIndex(v23, *(_DWORD *)(v23 + 116));
  v11 = (unsigned int)(v32 - *(_DWORD *)(*(_QWORD *)v31 + 68LL));
  HIDWORD(v38[0]) = v11;
  v12 = (unsigned int)(v11 + *(_DWORD *)(v33 + 76));
  HIDWORD(v38[1]) = v11 + *(_DWORD *)(v33 + 76);
LABEL_40:
  if ( (int)v11 >= 0 )
  {
    v12 = *(_QWORD *)v34[0];
    if ( SHIDWORD(v38[0]) < *(_DWORD *)(*(_QWORD *)v34[0] + 68LL) )
    {
      v26 = v38;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (v5 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v12, v10, v11);
  ThreadUnlock1(v28, v27, v29);
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v34);
}
