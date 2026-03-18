/*
 * XREFs of xxxMNDoubleClick @ 0x1C0237EB8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235BEC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025DBBC (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int MenuDefaultItem; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD v31[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v32; // [rsp+48h] [rbp-39h]
  _QWORD v33[3]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v35[3]; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v36[3]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v31, 0LL);
  memset(v36, 0, sizeof(v36));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage(v36, 0LL, 0, 0, 2, 0) && (DWORD2(v36[0]) == 514 || DWORD2(v36[0]) == 162) )
    xxxInternalGetMessage(v36, 0LL, DWORD2(v36[0]), DWORD2(v36[0]), 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v31, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v31)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v8 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v9 = v8[2];
    if ( !v9 )
      break;
    v32 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v31, v9);
    v10 = v32;
    if ( !v32 )
      v10 = *(_QWORD *)v31[0];
    MenuDefaultItem = GetMenuDefaultItem(v10, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v12 = *(_QWORD *)a2;
    v33[2] = 0LL;
    v34[2] = 0LL;
    v35[2] = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v33[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v33;
    v33[1] = v13;
    HMLockObject(v13);
    v15 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v34[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v34;
    v34[1] = v15;
    if ( v15 )
      HMLockObject(v15);
    v17 = v32;
    if ( !v32 )
      v17 = *(_QWORD *)v31[0];
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v35[0] = *(_QWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 416) = v35;
    v35[1] = v17;
    if ( v17 )
      HMLockObject(v17);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v31,
      v4,
      a1);
    v22 = ThreadUnlock1(v20, v19, v21);
    v32 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v31, v22);
    ThreadUnlock1(v24, v23, v25);
    ThreadUnlock1(v27, v26, v28);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v31) )
    goto LABEL_28;
  v29 = v32;
  if ( !v32 )
    v29 = *(_QWORD *)v31[0];
  if ( (unsigned int)MNGetpItemIndex(v29, (__int64)v8) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v8, v4);
LABEL_29:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
  return v6;
}
