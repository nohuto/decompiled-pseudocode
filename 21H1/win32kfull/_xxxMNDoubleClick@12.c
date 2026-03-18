/*
 * XREFs of _xxxMNDoubleClick@12 @ 0x19860D
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 *     __GetMenuDefaultItem@12 @ 0x1B79A5 (__GetMenuDefaultItem@12.c)
 */

int __fastcall xxxMNDoubleClick(int a1, int a2, struct tagWND *a3)
{
  int v4; // eax
  int v5; // ecx
  struct tagWND *v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  struct tagWND *MenuDefaultItem; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v15; // eax
  int v16; // eax
  int v17; // esi
  PKTHREAD v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  struct tagMSG *v24[7]; // [esp+10h] [ebp-54h] BYREF
  _DWORD v25[3]; // [esp+2Ch] [ebp-38h] BYREF
  _DWORD v26[3]; // [esp+38h] [ebp-2Ch] BYREF
  _DWORD v27[3]; // [esp+44h] [ebp-20h] BYREF
  _DWORD v28[2]; // [esp+50h] [ebp-14h] BYREF
  int v29; // [esp+58h] [ebp-Ch]
  int v30; // [esp+5Ch] [ebp-8h]
  int v31; // [esp+60h] [ebp-4h]

  v31 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v28, 0);
  memset(v24, 0, sizeof(v24));
  if ( xxxInternalGetMessage(v24, 0, 0, 2u, 0) && (v24[1] == (struct tagMSG *)514 || v24[1] == (struct tagMSG *)162) )
    xxxInternalGetMessage(v24, v24[1], (unsigned int)v24[1], 1u, 0);
  v4 = *(_DWORD *)(**(_DWORD **)a2 + 20);
  v29 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v4);
  if ( SmartObjStackRef<tagMENU>::operator==(v28, v5)
    || (v6 = a3, (unsigned int)a3 >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v28[0] + 20) + 24)) )
  {
    xxxMNDoScroll(a2, *(char **)(**(_DWORD **)a2 + 40), 0);
LABEL_26:
    v22 = 0;
    goto LABEL_27;
  }
  v7 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v28[0] + 56) + 80 * (_DWORD)a3);
  if ( (*(_BYTE *)(*v7 + 4) & 3) != 0 )
    goto LABEL_26;
  while ( 1 )
  {
    v8 = v7[2];
    if ( !v8 )
      break;
    v29 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v28, v8);
    MenuDefaultItem = (struct tagWND *)_GetMenuDefaultItem(0);
    v6 = MenuDefaultItem;
    a3 = MenuDefaultItem;
    if ( MenuDefaultItem == (struct tagWND *)-1 )
      goto LABEL_26;
    v7 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v28[0] + 56) + 80 * (_DWORD)MenuDefaultItem);
  }
  v10 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 32) + 4)
    && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 32) + 4) + 20) + 13) & 2) == 0 )
  {
    v11 = *(_DWORD *)a2;
    v27[2] = 0;
    v26[2] = 0;
    v25[2] = 0;
    v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 32) + 4);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v27[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v27;
    v27[1] = v12;
    HMLockObject(v12);
    v30 = *(_DWORD *)(**(_DWORD **)a2 + 8);
    v15 = KeGetCurrentThread();
    v16 = W32GetThreadWin32Thread(v15);
    v26[0] = *(_DWORD *)(v16 + 228);
    *(_DWORD *)(v16 + 228) = v26;
    v26[1] = v30;
    if ( v30 )
      HMLockObject(v30);
    v17 = v29;
    if ( !v29 )
      v17 = *(_DWORD *)v28[0];
    v18 = KeGetCurrentThread();
    v19 = W32GetThreadWin32Thread(v18);
    v25[0] = *(_DWORD *)(v19 + 228);
    *(_DWORD *)(v19 + 228) = v25;
    v25[1] = v17;
    if ( v17 )
      HMLockObject(v17);
    xxxSendMenuSelect(v28, a3, v31);
    v20 = ThreadUnlock1();
    v29 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v28, v20);
    ThreadUnlock1();
    ThreadUnlock1();
    v6 = a3;
  }
  if ( SmartObjStackRef<tagMENU>::operator==(v28, v10) )
    goto LABEL_26;
  v21 = v29;
  if ( !v29 )
    v21 = *(_DWORD *)v28[0];
  if ( MNGetpItemIndex(v21, (int)v7) == -1 )
    goto LABEL_26;
  xxxMNDismissWithNotify(v31, a2, (int)v7, v6, 0);
  v22 = 1;
LABEL_27:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v28);
  return v22;
}
